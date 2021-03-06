/* Auto-generated by genmsg_cpp for file /home/danpierce/devel/ublox_test_ws/src/ublox/ublox_msgs/msg/NavTIMEUTC.msg */
#ifndef UBLOX_MSGS_MESSAGE_NAVTIMEUTC_H
#define UBLOX_MSGS_MESSAGE_NAVTIMEUTC_H
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
struct NavTIMEUTC_ {
  typedef NavTIMEUTC_<ContainerAllocator> Type;

  NavTIMEUTC_()
  : iTOW(0)
  , tAcc(0)
  , nano(0)
  , year(0)
  , month(0)
  , day(0)
  , hour(0)
  , min(0)
  , sec(0)
  , valid(0)
  {
  }

  NavTIMEUTC_(const ContainerAllocator& _alloc)
  : iTOW(0)
  , tAcc(0)
  , nano(0)
  , year(0)
  , month(0)
  , day(0)
  , hour(0)
  , min(0)
  , sec(0)
  , valid(0)
  {
  }

  typedef uint32_t _iTOW_type;
  uint32_t iTOW;

  typedef uint32_t _tAcc_type;
  uint32_t tAcc;

  typedef int32_t _nano_type;
  int32_t nano;

  typedef uint16_t _year_type;
  uint16_t year;

  typedef uint8_t _month_type;
  uint8_t month;

  typedef uint8_t _day_type;
  uint8_t day;

  typedef uint8_t _hour_type;
  uint8_t hour;

  typedef uint8_t _min_type;
  uint8_t min;

  typedef uint8_t _sec_type;
  uint8_t sec;

  typedef uint8_t _valid_type;
  uint8_t valid;

  enum { CLASS_ID = 1 };
  enum { MESSAGE_ID = 33 };
  enum { VALID_TOW = 1 };
  enum { VALID_WKN = 2 };
  enum { VALID_UTC = 4 };

  typedef boost::shared_ptr< ::ublox_msgs::NavTIMEUTC_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::NavTIMEUTC_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct NavTIMEUTC
typedef  ::ublox_msgs::NavTIMEUTC_<std::allocator<void> > NavTIMEUTC;

typedef boost::shared_ptr< ::ublox_msgs::NavTIMEUTC> NavTIMEUTCPtr;
typedef boost::shared_ptr< ::ublox_msgs::NavTIMEUTC const> NavTIMEUTCConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::ublox_msgs::NavTIMEUTC_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::ublox_msgs::NavTIMEUTC_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace ublox_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ublox_msgs::NavTIMEUTC_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ublox_msgs::NavTIMEUTC_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::NavTIMEUTC_<ContainerAllocator> > {
  static const char* value() 
  {
    return "0ea9fbec0e54f3dbba61f743936c206a";
  }

  static const char* value(const  ::ublox_msgs::NavTIMEUTC_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x0ea9fbec0e54f3dbULL;
  static const uint64_t static_value2 = 0xba61f743936c206aULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::NavTIMEUTC_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ublox_msgs/NavTIMEUTC";
  }

  static const char* value(const  ::ublox_msgs::NavTIMEUTC_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::NavTIMEUTC_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# NAV-TIMEUTC (0x01 0x21)\n\
# UTC Time Solution\n\
#\n\
\n\
uint8 CLASS_ID = 1\n\
uint8 MESSAGE_ID = 33\n\
\n\
uint32 iTOW             # GPS Millisecond time of week [ms]\n\
\n\
uint32 tAcc             # Time Accuracy Estimate [ns]\n\
int32 nano              # Nanoseconds of second, range -1e9 .. 1e9 (UTC) [ns]\n\
uint16 year             # Year, range 1999..2099 (UTC) [y]\n\
uint8 month             # Month, range 1..12 (UTC) [month]\n\
uint8 day               # Day of Month, range 1..31 (UTC) [d]\n\
uint8 hour              # Hour of Day, range 0..23 (UTC) [h]\n\
uint8 min               # Minute of Hour, range 0..59 (UTC) [min]\n\
uint8 sec               # Seconds of Minute, range 0..59 (UTC) [s]\n\
\n\
uint8 valid             # Validity Flags\n\
uint8 VALID_TOW = 1         # Valid Time of Week\n\
uint8 VALID_WKN = 2         # Valid Week Number\n\
uint8 VALID_UTC = 4         # Valid Leap Seconds, i.e. Leap Seconds already known\n\
\n\
";
  }

  static const char* value(const  ::ublox_msgs::NavTIMEUTC_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::ublox_msgs::NavTIMEUTC_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ublox_msgs::NavTIMEUTC_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.iTOW);
    stream.next(m.tAcc);
    stream.next(m.nano);
    stream.next(m.year);
    stream.next(m.month);
    stream.next(m.day);
    stream.next(m.hour);
    stream.next(m.min);
    stream.next(m.sec);
    stream.next(m.valid);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct NavTIMEUTC_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::NavTIMEUTC_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::ublox_msgs::NavTIMEUTC_<ContainerAllocator> & v) 
  {
    s << indent << "iTOW: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.iTOW);
    s << indent << "tAcc: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.tAcc);
    s << indent << "nano: ";
    Printer<int32_t>::stream(s, indent + "  ", v.nano);
    s << indent << "year: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.year);
    s << indent << "month: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.month);
    s << indent << "day: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.day);
    s << indent << "hour: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.hour);
    s << indent << "min: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.min);
    s << indent << "sec: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sec);
    s << indent << "valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.valid);
  }
};


} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_NAVTIMEUTC_H

