/* Auto-generated by genmsg_cpp for file /home/danpierce/devel/ublox_test_ws/src/ublox/ublox_msgs/msg/NavDOP.msg */
#ifndef UBLOX_MSGS_MESSAGE_NAVDOP_H
#define UBLOX_MSGS_MESSAGE_NAVDOP_H
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
struct NavDOP_ {
  typedef NavDOP_<ContainerAllocator> Type;

  NavDOP_()
  : iTOW(0)
  , gDOP(0)
  , pDOP(0)
  , tDOP(0)
  , vDOP(0)
  , hDOP(0)
  , nDOP(0)
  , eDOP(0)
  {
  }

  NavDOP_(const ContainerAllocator& _alloc)
  : iTOW(0)
  , gDOP(0)
  , pDOP(0)
  , tDOP(0)
  , vDOP(0)
  , hDOP(0)
  , nDOP(0)
  , eDOP(0)
  {
  }

  typedef uint32_t _iTOW_type;
  uint32_t iTOW;

  typedef uint16_t _gDOP_type;
  uint16_t gDOP;

  typedef uint16_t _pDOP_type;
  uint16_t pDOP;

  typedef uint16_t _tDOP_type;
  uint16_t tDOP;

  typedef uint16_t _vDOP_type;
  uint16_t vDOP;

  typedef uint16_t _hDOP_type;
  uint16_t hDOP;

  typedef uint16_t _nDOP_type;
  uint16_t nDOP;

  typedef uint16_t _eDOP_type;
  uint16_t eDOP;

  enum { CLASS_ID = 1 };
  enum { MESSAGE_ID = 4 };

  typedef boost::shared_ptr< ::ublox_msgs::NavDOP_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::NavDOP_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct NavDOP
typedef  ::ublox_msgs::NavDOP_<std::allocator<void> > NavDOP;

typedef boost::shared_ptr< ::ublox_msgs::NavDOP> NavDOPPtr;
typedef boost::shared_ptr< ::ublox_msgs::NavDOP const> NavDOPConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::ublox_msgs::NavDOP_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::ublox_msgs::NavDOP_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace ublox_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ublox_msgs::NavDOP_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ublox_msgs::NavDOP_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::NavDOP_<ContainerAllocator> > {
  static const char* value() 
  {
    return "19fe2210fc48e52c1c14b7d2c567407f";
  }

  static const char* value(const  ::ublox_msgs::NavDOP_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x19fe2210fc48e52cULL;
  static const uint64_t static_value2 = 0x1c14b7d2c567407fULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::NavDOP_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ublox_msgs/NavDOP";
  }

  static const char* value(const  ::ublox_msgs::NavDOP_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::NavDOP_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# NAV-DOP (0x01 0x04)\n\
# Dilution of precision\n\
#\n\
# - DOP values are dimensionless.\n\
# - All DOP values are scaled by a factor of 100. If the unit transmits a value of e.g. 156, the\n\
#   DOP value is 1.56.\n\
#\n\
\n\
uint8 CLASS_ID = 1\n\
uint8 MESSAGE_ID = 4\n\
\n\
uint32 iTOW             # GPS Millisecond Time of Week [ms]\n\
\n\
uint16 gDOP             # Geometric DOP\n\
uint16 pDOP             # Position DOP\n\
uint16 tDOP             # Time DOP\n\
uint16 vDOP             # Vertical DOP\n\
uint16 hDOP             # Horizontal DOP\n\
uint16 nDOP             # Northing DOP\n\
uint16 eDOP             # Easting DOP\n\
\n\
";
  }

  static const char* value(const  ::ublox_msgs::NavDOP_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::ublox_msgs::NavDOP_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ublox_msgs::NavDOP_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.iTOW);
    stream.next(m.gDOP);
    stream.next(m.pDOP);
    stream.next(m.tDOP);
    stream.next(m.vDOP);
    stream.next(m.hDOP);
    stream.next(m.nDOP);
    stream.next(m.eDOP);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct NavDOP_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::NavDOP_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::ublox_msgs::NavDOP_<ContainerAllocator> & v) 
  {
    s << indent << "iTOW: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.iTOW);
    s << indent << "gDOP: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.gDOP);
    s << indent << "pDOP: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.pDOP);
    s << indent << "tDOP: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.tDOP);
    s << indent << "vDOP: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.vDOP);
    s << indent << "hDOP: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.hDOP);
    s << indent << "nDOP: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.nDOP);
    s << indent << "eDOP: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.eDOP);
  }
};


} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_NAVDOP_H

