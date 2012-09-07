/* Auto-generated by genmsg_cpp for file /home/sibi/sandbox/sandbox444/surgical_msgs/msg/Cut.msg */
#ifndef SURGICAL_MSGS_MESSAGE_CUT_H
#define SURGICAL_MSGS_MESSAGE_CUT_H
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

#include "surgical_msgs/Hole.h"

namespace surgical_msgs
{
template <class ContainerAllocator>
struct Cut_ {
  typedef Cut_<ContainerAllocator> Type;

  Cut_()
  : nodes()
  {
  }

  Cut_(const ContainerAllocator& _alloc)
  : nodes(_alloc)
  {
  }

  typedef std::vector< ::surgical_msgs::Hole_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::surgical_msgs::Hole_<ContainerAllocator> >::other >  _nodes_type;
  std::vector< ::surgical_msgs::Hole_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::surgical_msgs::Hole_<ContainerAllocator> >::other >  nodes;


  typedef boost::shared_ptr< ::surgical_msgs::Cut_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::surgical_msgs::Cut_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Cut
typedef  ::surgical_msgs::Cut_<std::allocator<void> > Cut;

typedef boost::shared_ptr< ::surgical_msgs::Cut> CutPtr;
typedef boost::shared_ptr< ::surgical_msgs::Cut const> CutConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::surgical_msgs::Cut_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::surgical_msgs::Cut_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace surgical_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::surgical_msgs::Cut_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::surgical_msgs::Cut_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::surgical_msgs::Cut_<ContainerAllocator> > {
  static const char* value() 
  {
    return "9df5bac2e65b67663e436bfe4fb0e3e4";
  }

  static const char* value(const  ::surgical_msgs::Cut_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x9df5bac2e65b6766ULL;
  static const uint64_t static_value2 = 0x3e436bfe4fb0e3e4ULL;
};

template<class ContainerAllocator>
struct DataType< ::surgical_msgs::Cut_<ContainerAllocator> > {
  static const char* value() 
  {
    return "surgical_msgs/Cut";
  }

  static const char* value(const  ::surgical_msgs::Cut_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::surgical_msgs::Cut_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# defines an array for 3D points.\n\
Hole[] nodes\n\
\n\
================================================================================\n\
MSG: surgical_msgs/Hole\n\
# Defines the various attributes of a HOLE\n\
# ----------------------------------------\n\
#\n\
# 1. PT : the 3D location of the HOLE\n\
geometry_msgs/Point pt\n\
\n\
# 2. X_IDX : the x-index of the location of the point in the point-cloud\n\
int32 x_idx\n\
\n\
# 3. Y_IDX : the y-index of the location of the point in the point-cloud\n\
int32 y_idx\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
";
  }

  static const char* value(const  ::surgical_msgs::Cut_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::surgical_msgs::Cut_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.nodes);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Cut_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::surgical_msgs::Cut_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::surgical_msgs::Cut_<ContainerAllocator> & v) 
  {
    s << indent << "nodes[]" << std::endl;
    for (size_t i = 0; i < v.nodes.size(); ++i)
    {
      s << indent << "  nodes[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::surgical_msgs::Hole_<ContainerAllocator> >::stream(s, indent + "    ", v.nodes[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // SURGICAL_MSGS_MESSAGE_CUT_H
