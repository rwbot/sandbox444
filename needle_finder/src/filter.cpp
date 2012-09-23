/** Author: Ankush Gupta
    Date  : 31st, August 2012. */

#include <ros/ros.h>
#include <utils_cv/hueFilter.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include <sensor_msgs/Image.h>
#include <cv_bridge/cv_bridge.h>
#include <iostream>
#include <vector>

cv::RNG rng(12345);


/**
   Returns the pixels in the actual image which fall insdie
   the contour.
   * @param:
   *   contour - vector of points which form a contour
   *   src     - source Mat from which the pixels need to be extracted.
   *   dst     - the output matrix in which the contour pixels are saved. */
void getContourPixels(std::vector <cv::Point> contour,
		      cv::Mat &src, cv::Mat &dst) {
  cv::Rect R = cv::boundingRect(contour);
  cv::Mat outMat(cv::Size(R.width, R.height), src.type());
  outMat = src(cv::Range(R.y, R.y + R.height),
	       cv::Range(R.x, R.x + R.width));
  outMat.copyTo(dst);
}


/** Dilates the SRC matrix into DST. */
void dilation(cv::Mat &src, cv::Mat &dst ) {
  int dilation_type = cv::MORPH_ELLIPSE;
  int dilation_size = 5;
  cv::Mat element = cv::getStructuringElement( dilation_type,
					       cv::Size( 2*dilation_size + 1, 2*dilation_size+1 ),
					       cv::Point( dilation_size, dilation_size ) );
  cv::dilate( src, dst, element );
}


void imageCB(const sensor_msgs::Image::ConstPtr img) {
  cv_bridge::CvImagePtr cv_ptr;
  try {
    cv_ptr = cv_bridge::toCvCopy(img);
  } catch (cv_bridge::Exception& ex1) {
    ROS_ERROR("cv_bridge exception: %s", ex1.what());
    return;
  }


  // set the image region of interest
  cv::Mat in_img1  = cv_ptr->image.clone();
  cv::Rect roi(60,50,400,350);
  cv::Mat in_img(in_img1, roi);
 

  // do a circular hough transform
  cv::Mat img1,gray;
  in_img.copyTo(img1);
  int thresh1 = 100;
  cv::Canny(img1, gray, thresh1, thresh1*2, 3 );

  // smooth it, otherwise a lot of false circles may be detected
  cv::GaussianBlur( gray, gray, cv::Size(9, 9), 2, 2 );
  cv::imshow( "blur", gray );
  
  std::vector<cv::Vec3f> circles;
  cv::HoughCircles(gray, circles, CV_HOUGH_GRADIENT,
		   2, gray.rows/3, 200, 100,50,150 );

  for( size_t i = 0; i < circles.size(); i++ ) {
    cv::Point center(cvRound(circles[i][0]), cvRound(circles[i][1]));
    int radius = cvRound(circles[i][2]);

    // draw the circle center
    cv::circle( img1, center, 3, cv::Scalar(0,255,0), -1, 8, 0 );

    // draw the circle outline
    cv::circle( img1, center, radius, cv::Scalar(0,0,255), 7, 8, 0 );
  }
  
  cv::imshow( "circles", img1 );
  cv::waitKey(10);
  

  // change brightness/ contrast
  //cv::Mat cvt_img;
  ///in_img.convertTo(cvt_img, -1, 1.01, 0);
  //cv::imshow("cvt", cvt_img);
  //cv::waitKey(5);

  /* hue filter the image
  hueFilter hFilter(80,85);
  cv::Mat dest;
  hFilter.filter(in_img, dest, true); */

  /*cv::Mat dest1;
  dilation(dest, dest1);
  cv::namedWindow( "dilate", 1 );
  cv::imshow( "dilate", dest1 );*/
  
  /*
  // do canny edge detection
  cv::Mat gray_img, canny_img;
  int thresh = 100;
  //cv::cvtColor(dest, gray_img,CV_RGB2GRAY);
  cv::Canny(dest, canny_img, thresh, thresh*2, 3 );
  cv::GaussianBlur(canny_img, canny_img, cv::Size(9, 9), 3, 3 );
  cv::imshow("canny-blur", canny_img);
  cv::waitKey(5);

  std::vector<std::vector<cv::Point> > contours;
  std::vector<cv::Vec4i> hierarchy;
  cv::findContours( canny_img, contours, hierarchy,
		    CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE, cv::Point(0, 0));

  // Draw contours
  cv::Mat drawing = cv::Mat::zeros( canny_img.size(), CV_8UC3 ); 
  cv::namedWindow( "Contours", CV_WINDOW_AUTOSIZE );

  for( int i = 0; i< contours.size(); i++ ) {
    cv::Scalar color = cv::Scalar( rng.uniform(0, 255),
				   rng.uniform(0,255),
				   rng.uniform(0,255) );
    drawContours( drawing, contours, i, color, 2, 8, hierarchy, 1, cv::Point() );
  }

  /// Show in a window
  cv::imshow( "Contours", drawing );
  cv::waitKey(10);*/
}


int main(int argc, char** argv) {
  ros::init(argc, argv, "needle_finder_node");
  ros::NodeHandle nh("needle_finder_node");
  ros::Subscriber sub;

  std::string topic; 
  nh.param<std::string>("image_topic", topic, "/camera/rgb/image_rect");
  sub = nh.subscribe(topic, 1, imageCB);
  ros::spin();

  return 0;
 }