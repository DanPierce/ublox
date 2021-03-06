/* Auto-generated by genmsg_cpp for file /home/danpierce/devel/ublox_test_ws/src/ublox/ublox_msgs/msg/CfgRATE.msg */
#ifndef UBLOX_MSGS_MESSAGE_CFGRATE_H
#define UBLOX_MSGS_MESSAGE_CFGRATE_H
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
struct CfgRATE_ {
  typedef CfgRATE_<ContainerAllocator> Type;

  CfgRATE_()
  : measRate(0)
  , navRate(0)
  , timeRef(0)
  {
  }

  CfgRATE_(const ContainerAllocator& _alloc)
  : measRate(0)
  , navRate(0)
  , timeRef(0)
  {
  }

  typedef uint16_t _measRate_type;
  uint16_t measRate;

  typedef uint16_t _navRate_type;
  uint16_t navRate;

  typedef uint16_t _timeRef_type;
  uint16_t timeRef;

  enum { CLASS_ID = 6 };
  enum { MESSAGE_ID = 8 };
  enum { TIME_REF_UTC = 0 };
  enum { TIME_REF_GPS = 1 };

  typedef boost::shared_ptr< ::ublox_msgs::CfgRATE_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::CfgRATE_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct CfgRATE
typedef  ::ublox_msgs::CfgRATE_<std::allocator<void> > CfgRATE;

typedef boost::shared_ptr< ::ublox_msgs::CfgRATE> CfgRATEPtr;
typedef boost::shared_ptr< ::ublox_msgs::CfgRATE const> CfgRATEConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::ublox_msgs::CfgRATE_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::ublox_msgs::CfgRATE_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace ublox_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ublox_msgs::CfgRATE_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ublox_msgs::CfgRATE_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::CfgRATE_<ContainerAllocator> > {
  static const char* value() 
  {
    return "da095554bde2600fd2a774def27fb48e";
  }

  static const char* value(const  ::ublox_msgs::CfgRATE_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xda095554bde2600fULL;
  static const uint64_t static_value2 = 0xd2a774def27fb48eULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::CfgRATE_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ublox_msgs/CfgRATE";
  }

  static const char* value(const  ::ublox_msgs::CfgRATE_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::CfgRATE_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# CFG-RATE (0x06 0x08)\n\
# Navigation/Measurement Rate Settings\n\
#\n\
\n\
uint8 CLASS_ID = 6\n\
uint8 MESSAGE_ID = 8\n\
\n\
uint16 measRate           # Measurement Rate, GPS measurements are\n\
                          # taken every measRate milliseconds [ms]\n\
uint16 navRate            # Navigation Rate, in number of measurement\n\
                          # cycles. On u-blox 5 and u-blox 6, this parameter\n\
                          # cannot be changed, and is always equals 1.\n\
uint16 timeRef            # Alignment to reference time: 0 = UTC time, 1 = GPS time\n\
uint16 TIME_REF_UTC = 0\n\
uint16 TIME_REF_GPS = 1\n\
\n\
";
  }

  static const char* value(const  ::ublox_msgs::CfgRATE_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::ublox_msgs::CfgRATE_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ublox_msgs::CfgRATE_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.measRate);
    stream.next(m.navRate);
    stream.next(m.timeRef);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct CfgRATE_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::CfgRATE_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::ublox_msgs::CfgRATE_<ContainerAllocator> & v) 
  {
    s << indent << "measRate: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.measRate);
    s << indent << "navRate: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.navRate);
    s << indent << "timeRef: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.timeRef);
  }
};


} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_CFGRATE_H

