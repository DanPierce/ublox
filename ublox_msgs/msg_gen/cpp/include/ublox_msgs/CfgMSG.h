/* Auto-generated by genmsg_cpp for file /home/danpierce/devel/ublox_test_ws/src/ublox/ublox_msgs/msg/CfgMSG.msg */
#ifndef UBLOX_MSGS_MESSAGE_CFGMSG_H
#define UBLOX_MSGS_MESSAGE_CFGMSG_H
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


namespace ublox_msgs
{
template <class ContainerAllocator>
struct CfgMSG_ {
  typedef CfgMSG_<ContainerAllocator> Type;

  CfgMSG_()
  : msgClass(0)
  , msgID(0)
  , rate(0)
  {
  }

  CfgMSG_(const ContainerAllocator& _alloc)
  : msgClass(0)
  , msgID(0)
  , rate(0)
  {
  }

  typedef uint8_t _msgClass_type;
  uint8_t msgClass;

  typedef uint8_t _msgID_type;
  uint8_t msgID;

  typedef uint8_t _rate_type;
  uint8_t rate;

  enum { CLASS_ID = 6 };
  enum { MESSAGE_ID = 1 };

  typedef boost::shared_ptr< ::ublox_msgs::CfgMSG_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::CfgMSG_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct CfgMSG
typedef  ::ublox_msgs::CfgMSG_<std::allocator<void> > CfgMSG;

typedef boost::shared_ptr< ::ublox_msgs::CfgMSG> CfgMSGPtr;
typedef boost::shared_ptr< ::ublox_msgs::CfgMSG const> CfgMSGConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::ublox_msgs::CfgMSG_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::ublox_msgs::CfgMSG_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace ublox_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ublox_msgs::CfgMSG_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ublox_msgs::CfgMSG_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::CfgMSG_<ContainerAllocator> > {
  static const char* value() 
  {
    return "9f2fcd2333c19c76cbfdf6a57fc64a9d";
  }

  static const char* value(const  ::ublox_msgs::CfgMSG_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x9f2fcd2333c19c76ULL;
  static const uint64_t static_value2 = 0xcbfdf6a57fc64a9dULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::CfgMSG_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ublox_msgs/CfgMSG";
  }

  static const char* value(const  ::ublox_msgs::CfgMSG_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::CfgMSG_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# CFG-MSG (0x06 0x01)\n\
# Message Rate(s)\n\
#\n\
\n\
uint8 CLASS_ID = 6\n\
uint8 MESSAGE_ID = 1\n\
\n\
uint8 msgClass            # Message Class\n\
uint8 msgID               # Message Identifier\n\
uint8 rate                # Send rate on current Target\n\
\n\
";
  }

  static const char* value(const  ::ublox_msgs::CfgMSG_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::ublox_msgs::CfgMSG_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ublox_msgs::CfgMSG_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.msgClass);
    stream.next(m.msgID);
    stream.next(m.rate);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct CfgMSG_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::CfgMSG_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::ublox_msgs::CfgMSG_<ContainerAllocator> & v) 
  {
    s << indent << "msgClass: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.msgClass);
    s << indent << "msgID: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.msgID);
    s << indent << "rate: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rate);
  }
};


} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_CFGMSG_H
