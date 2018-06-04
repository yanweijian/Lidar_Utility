// Generated by gencpp from file rslidar_msgs/rslidarPacket.msg
// DO NOT EDIT!


#ifndef RSLIDAR_MSGS_MESSAGE_RSLIDARPACKET_H
#define RSLIDAR_MSGS_MESSAGE_RSLIDARPACKET_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rslidar_msgs
{
template <class ContainerAllocator>
struct rslidarPacket_
{
  typedef rslidarPacket_<ContainerAllocator> Type;

  rslidarPacket_()
    : stamp()
    , data()  {
      data.assign(0);
  }
  rslidarPacket_(const ContainerAllocator& _alloc)
    : stamp()
    , data()  {
  (void)_alloc;
      data.assign(0);
  }



   typedef ros::Time _stamp_type;
  _stamp_type stamp;

   typedef boost::array<uint8_t, 1248>  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::rslidar_msgs::rslidarPacket_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rslidar_msgs::rslidarPacket_<ContainerAllocator> const> ConstPtr;

}; // struct rslidarPacket_

typedef ::rslidar_msgs::rslidarPacket_<std::allocator<void> > rslidarPacket;

typedef boost::shared_ptr< ::rslidar_msgs::rslidarPacket > rslidarPacketPtr;
typedef boost::shared_ptr< ::rslidar_msgs::rslidarPacket const> rslidarPacketConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rslidar_msgs::rslidarPacket_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rslidar_msgs::rslidarPacket_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rslidar_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'rslidar_msgs': ['/home/pc/catkin_ws/src/rslidar/rslidar_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rslidar_msgs::rslidarPacket_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rslidar_msgs::rslidarPacket_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rslidar_msgs::rslidarPacket_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rslidar_msgs::rslidarPacket_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rslidar_msgs::rslidarPacket_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rslidar_msgs::rslidarPacket_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rslidar_msgs::rslidarPacket_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1e4288e00b9222ea477b73350bf24f51";
  }

  static const char* value(const ::rslidar_msgs::rslidarPacket_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1e4288e00b9222eaULL;
  static const uint64_t static_value2 = 0x477b73350bf24f51ULL;
};

template<class ContainerAllocator>
struct DataType< ::rslidar_msgs::rslidarPacket_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rslidar_msgs/rslidarPacket";
  }

  static const char* value(const ::rslidar_msgs::rslidarPacket_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rslidar_msgs::rslidarPacket_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Raw LIDAR packet.\n\
\n\
time stamp              # packet timestamp\n\
uint8[1248] data        # packet contents\n\
\n\
";
  }

  static const char* value(const ::rslidar_msgs::rslidarPacket_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rslidar_msgs::rslidarPacket_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stamp);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct rslidarPacket_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rslidar_msgs::rslidarPacket_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rslidar_msgs::rslidarPacket_<ContainerAllocator>& v)
  {
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // RSLIDAR_MSGS_MESSAGE_RSLIDARPACKET_H
