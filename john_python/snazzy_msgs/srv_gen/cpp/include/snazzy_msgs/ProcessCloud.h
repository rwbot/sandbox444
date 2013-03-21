/* Auto-generated by genmsg_cpp for file /home/joschu/Dropbox/myros/snazzy_msgs/srv/ProcessCloud.srv */
#ifndef SNAZZY_MSGS_SERVICE_PROCESSCLOUD_H
#define SNAZZY_MSGS_SERVICE_PROCESSCLOUD_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"

#include "sensor_msgs/PointCloud2.h"
#include "std_msgs/String.h"
#include "std_msgs/Float32.h"


#include "sensor_msgs/PointCloud2.h"

namespace snazzy_msgs
{
template <class ContainerAllocator>
struct ProcessCloudRequest_ {
  typedef ProcessCloudRequest_<ContainerAllocator> Type;

  ProcessCloudRequest_()
  : cloud_in()
  , str_args()
  , float_args()
  {
  }

  ProcessCloudRequest_(const ContainerAllocator& _alloc)
  : cloud_in(_alloc)
  , str_args(_alloc)
  , float_args(_alloc)
  {
  }

  typedef  ::sensor_msgs::PointCloud2_<ContainerAllocator>  _cloud_in_type;
   ::sensor_msgs::PointCloud2_<ContainerAllocator>  cloud_in;

  typedef  ::std_msgs::String_<ContainerAllocator>  _str_args_type;
   ::std_msgs::String_<ContainerAllocator>  str_args;

  typedef  ::std_msgs::Float32_<ContainerAllocator>  _float_args_type;
   ::std_msgs::Float32_<ContainerAllocator>  float_args;


  typedef boost::shared_ptr< ::snazzy_msgs::ProcessCloudRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::snazzy_msgs::ProcessCloudRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ProcessCloudRequest
typedef  ::snazzy_msgs::ProcessCloudRequest_<std::allocator<void> > ProcessCloudRequest;

typedef boost::shared_ptr< ::snazzy_msgs::ProcessCloudRequest> ProcessCloudRequestPtr;
typedef boost::shared_ptr< ::snazzy_msgs::ProcessCloudRequest const> ProcessCloudRequestConstPtr;


template <class ContainerAllocator>
struct ProcessCloudResponse_ {
  typedef ProcessCloudResponse_<ContainerAllocator> Type;

  ProcessCloudResponse_()
  : cloud_out()
  {
  }

  ProcessCloudResponse_(const ContainerAllocator& _alloc)
  : cloud_out(_alloc)
  {
  }

  typedef  ::sensor_msgs::PointCloud2_<ContainerAllocator>  _cloud_out_type;
   ::sensor_msgs::PointCloud2_<ContainerAllocator>  cloud_out;


  typedef boost::shared_ptr< ::snazzy_msgs::ProcessCloudResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::snazzy_msgs::ProcessCloudResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ProcessCloudResponse
typedef  ::snazzy_msgs::ProcessCloudResponse_<std::allocator<void> > ProcessCloudResponse;

typedef boost::shared_ptr< ::snazzy_msgs::ProcessCloudResponse> ProcessCloudResponsePtr;
typedef boost::shared_ptr< ::snazzy_msgs::ProcessCloudResponse const> ProcessCloudResponseConstPtr;

struct ProcessCloud
{

typedef ProcessCloudRequest Request;
typedef ProcessCloudResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct ProcessCloud
} // namespace snazzy_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::snazzy_msgs::ProcessCloudRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::snazzy_msgs::ProcessCloudRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::snazzy_msgs::ProcessCloudRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "fbcba72803c7ee38c4e565d0ce4aa21b";
  }

  static const char* value(const  ::snazzy_msgs::ProcessCloudRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xfbcba72803c7ee38ULL;
  static const uint64_t static_value2 = 0xc4e565d0ce4aa21bULL;
};

template<class ContainerAllocator>
struct DataType< ::snazzy_msgs::ProcessCloudRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "snazzy_msgs/ProcessCloudRequest";
  }

  static const char* value(const  ::snazzy_msgs::ProcessCloudRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::snazzy_msgs::ProcessCloudRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "sensor_msgs/PointCloud2 cloud_in\n\
std_msgs/String str_args\n\
std_msgs/Float32 float_args\n\
\n\
================================================================================\n\
MSG: sensor_msgs/PointCloud2\n\
# This message holds a collection of N-dimensional points, which may\n\
# contain additional information such as normals, intensity, etc. The\n\
# point data is stored as a binary blob, its layout described by the\n\
# contents of the \"fields\" array.\n\
\n\
# The point cloud data may be organized 2d (image-like) or 1d\n\
# (unordered). Point clouds organized as 2d images may be produced by\n\
# camera depth sensors such as stereo or time-of-flight.\n\
\n\
# Time of sensor data acquisition, and the coordinate frame ID (for 3d\n\
# points).\n\
Header header\n\
\n\
# 2D structure of the point cloud. If the cloud is unordered, height is\n\
# 1 and width is the length of the point cloud.\n\
uint32 height\n\
uint32 width\n\
\n\
# Describes the channels and their layout in the binary data blob.\n\
PointField[] fields\n\
\n\
bool    is_bigendian # Is this data bigendian?\n\
uint32  point_step   # Length of a point in bytes\n\
uint32  row_step     # Length of a row in bytes\n\
uint8[] data         # Actual point data, size is (row_step*height)\n\
\n\
bool is_dense        # True if there are no invalid points\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: sensor_msgs/PointField\n\
# This message holds the description of one point entry in the\n\
# PointCloud2 message format.\n\
uint8 INT8    = 1\n\
uint8 UINT8   = 2\n\
uint8 INT16   = 3\n\
uint8 UINT16  = 4\n\
uint8 INT32   = 5\n\
uint8 UINT32  = 6\n\
uint8 FLOAT32 = 7\n\
uint8 FLOAT64 = 8\n\
\n\
string name      # Name of field\n\
uint32 offset    # Offset from start of point struct\n\
uint8  datatype  # Datatype enumeration, see above\n\
uint32 count     # How many elements in the field\n\
\n\
================================================================================\n\
MSG: std_msgs/String\n\
string data\n\
\n\
================================================================================\n\
MSG: std_msgs/Float32\n\
float32 data\n\
";
  }

  static const char* value(const  ::snazzy_msgs::ProcessCloudRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::snazzy_msgs::ProcessCloudResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::snazzy_msgs::ProcessCloudResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::snazzy_msgs::ProcessCloudResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d638895a709be2cef85df359cc39f0dc";
  }

  static const char* value(const  ::snazzy_msgs::ProcessCloudResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd638895a709be2ceULL;
  static const uint64_t static_value2 = 0xf85df359cc39f0dcULL;
};

template<class ContainerAllocator>
struct DataType< ::snazzy_msgs::ProcessCloudResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "snazzy_msgs/ProcessCloudResponse";
  }

  static const char* value(const  ::snazzy_msgs::ProcessCloudResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::snazzy_msgs::ProcessCloudResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "sensor_msgs/PointCloud2 cloud_out\n\
\n\
\n\
================================================================================\n\
MSG: sensor_msgs/PointCloud2\n\
# This message holds a collection of N-dimensional points, which may\n\
# contain additional information such as normals, intensity, etc. The\n\
# point data is stored as a binary blob, its layout described by the\n\
# contents of the \"fields\" array.\n\
\n\
# The point cloud data may be organized 2d (image-like) or 1d\n\
# (unordered). Point clouds organized as 2d images may be produced by\n\
# camera depth sensors such as stereo or time-of-flight.\n\
\n\
# Time of sensor data acquisition, and the coordinate frame ID (for 3d\n\
# points).\n\
Header header\n\
\n\
# 2D structure of the point cloud. If the cloud is unordered, height is\n\
# 1 and width is the length of the point cloud.\n\
uint32 height\n\
uint32 width\n\
\n\
# Describes the channels and their layout in the binary data blob.\n\
PointField[] fields\n\
\n\
bool    is_bigendian # Is this data bigendian?\n\
uint32  point_step   # Length of a point in bytes\n\
uint32  row_step     # Length of a row in bytes\n\
uint8[] data         # Actual point data, size is (row_step*height)\n\
\n\
bool is_dense        # True if there are no invalid points\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: sensor_msgs/PointField\n\
# This message holds the description of one point entry in the\n\
# PointCloud2 message format.\n\
uint8 INT8    = 1\n\
uint8 UINT8   = 2\n\
uint8 INT16   = 3\n\
uint8 UINT16  = 4\n\
uint8 INT32   = 5\n\
uint8 UINT32  = 6\n\
uint8 FLOAT32 = 7\n\
uint8 FLOAT64 = 8\n\
\n\
string name      # Name of field\n\
uint32 offset    # Offset from start of point struct\n\
uint8  datatype  # Datatype enumeration, see above\n\
uint32 count     # How many elements in the field\n\
\n\
";
  }

  static const char* value(const  ::snazzy_msgs::ProcessCloudResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::snazzy_msgs::ProcessCloudRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.cloud_in);
    stream.next(m.str_args);
    stream.next(m.float_args);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ProcessCloudRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::snazzy_msgs::ProcessCloudResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.cloud_out);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ProcessCloudResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<snazzy_msgs::ProcessCloud> {
  static const char* value() 
  {
    return "62372c233a3d22e82d88cc898c7261e6";
  }

  static const char* value(const snazzy_msgs::ProcessCloud&) { return value(); } 
};

template<>
struct DataType<snazzy_msgs::ProcessCloud> {
  static const char* value() 
  {
    return "snazzy_msgs/ProcessCloud";
  }

  static const char* value(const snazzy_msgs::ProcessCloud&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<snazzy_msgs::ProcessCloudRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "62372c233a3d22e82d88cc898c7261e6";
  }

  static const char* value(const snazzy_msgs::ProcessCloudRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<snazzy_msgs::ProcessCloudRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "snazzy_msgs/ProcessCloud";
  }

  static const char* value(const snazzy_msgs::ProcessCloudRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<snazzy_msgs::ProcessCloudResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "62372c233a3d22e82d88cc898c7261e6";
  }

  static const char* value(const snazzy_msgs::ProcessCloudResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<snazzy_msgs::ProcessCloudResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "snazzy_msgs/ProcessCloud";
  }

  static const char* value(const snazzy_msgs::ProcessCloudResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // SNAZZY_MSGS_SERVICE_PROCESSCLOUD_H

