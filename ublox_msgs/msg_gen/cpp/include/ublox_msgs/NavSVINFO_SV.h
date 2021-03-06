/* Auto-generated by genmsg_cpp for file /home/danpierce/devel/ublox_test_ws/src/ublox/ublox_msgs/msg/NavSVINFO_SV.msg */
#ifndef UBLOX_MSGS_MESSAGE_NAVSVINFO_SV_H
#define UBLOX_MSGS_MESSAGE_NAVSVINFO_SV_H
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
struct NavSVINFO_SV_ {
  typedef NavSVINFO_SV_<ContainerAllocator> Type;

  NavSVINFO_SV_()
  : chn(0)
  , svid(0)
  , flags(0)
  , quality(0)
  , cno(0)
  , elev(0)
  , azim(0)
  , prRes(0)
  {
  }

  NavSVINFO_SV_(const ContainerAllocator& _alloc)
  : chn(0)
  , svid(0)
  , flags(0)
  , quality(0)
  , cno(0)
  , elev(0)
  , azim(0)
  , prRes(0)
  {
  }

  typedef uint8_t _chn_type;
  uint8_t chn;

  typedef uint8_t _svid_type;
  uint8_t svid;

  typedef uint8_t _flags_type;
  uint8_t flags;

  typedef uint8_t _quality_type;
  uint8_t quality;

  typedef uint8_t _cno_type;
  uint8_t cno;

  typedef int8_t _elev_type;
  int8_t elev;

  typedef int16_t _azim_type;
  int16_t azim;

  typedef int32_t _prRes_type;
  int32_t prRes;

  enum { FLAGS_SVUSED = 1 };
  enum { FLAGS_DIFFCORR = 2 };
  enum { FLAGS_ORBITAVAIL = 4 };
  enum { FLAGS_ORBITEPH = 8 };
  enum { FLAGS_UNHEALTHY = 16 };
  enum { FLAGS_ORBIT_ALM = 32 };
  enum { FLAGS_ORBIT_AOP = 64 };
  enum { FLAGS_SMOOTHED = 128 };
  enum { QUALITY_IDLE = 0 };
  enum { QUALITY_SEARCHING = 1 };
  enum { QUALITY_AQUIRED = 2 };
  enum { QUALITY_DETECTED = 3 };
  enum { QUALITY_CODE_LOCK = 4 };
  enum { QUALITY_CODE_AND_CARRIER_LOCKED1 = 5 };
  enum { QUALITY_CODE_AND_CARRIER_LOCKED2 = 6 };
  enum { QUALITY_CODE_AND_CARRIER_LOCKED3 = 7 };

  typedef boost::shared_ptr< ::ublox_msgs::NavSVINFO_SV_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::NavSVINFO_SV_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct NavSVINFO_SV
typedef  ::ublox_msgs::NavSVINFO_SV_<std::allocator<void> > NavSVINFO_SV;

typedef boost::shared_ptr< ::ublox_msgs::NavSVINFO_SV> NavSVINFO_SVPtr;
typedef boost::shared_ptr< ::ublox_msgs::NavSVINFO_SV const> NavSVINFO_SVConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::ublox_msgs::NavSVINFO_SV_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::ublox_msgs::NavSVINFO_SV_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace ublox_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ublox_msgs::NavSVINFO_SV_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ublox_msgs::NavSVINFO_SV_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::NavSVINFO_SV_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b29c45854d86b34347aac679c246b6c7";
  }

  static const char* value(const  ::ublox_msgs::NavSVINFO_SV_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb29c45854d86b343ULL;
  static const uint64_t static_value2 = 0x47aac679c246b6c7ULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::NavSVINFO_SV_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ublox_msgs/NavSVINFO_SV";
  }

  static const char* value(const  ::ublox_msgs::NavSVINFO_SV_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::NavSVINFO_SV_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# see message NavSVINFO\n\
#\n\
\n\
uint8 chn             # Channel number, 255 for SVs not assigned to a channel\n\
uint8 svid            # Satellite ID\n\
\n\
uint8 flags           # Bitmask\n\
uint8 FLAGS_SVUSED = 1                      # SV is used for navigation\n\
uint8 FLAGS_DIFFCORR = 2                    # Differential correction data is available for this SV\n\
uint8 FLAGS_ORBITAVAIL = 4                  # Orbit information is available for this SV (Ephemeris or Almanach)\n\
uint8 FLAGS_ORBITEPH = 8                    # Orbit information is Ephemeris\n\
uint8 FLAGS_UNHEALTHY = 16                  # SV is unhealthy / shall not be used\n\
uint8 FLAGS_ORBIT_ALM = 32                  # Orbit information is Almanac Plus\n\
uint8 FLAGS_ORBIT_AOP = 64                  # Orbit information is AssistNow Autonomous\n\
uint8 FLAGS_SMOOTHED = 128                  # Carrier smoothed pseudorange used\n\
\n\
uint8 quality         # Bitfield\n\
# qualityInd: Signal Quality indicator (range 0..7). The following list shows the meaning of the different QI values:\n\
uint8 QUALITY_IDLE = 0                      # This channel is idle\n\
uint8 QUALITY_SEARCHING = 1                 # Channel is searching\n\
uint8 QUALITY_AQUIRED = 2                   # Signal aquired\n\
uint8 QUALITY_DETECTED = 3                  # Signal detected but unusable\n\
uint8 QUALITY_CODE_LOCK = 4                 # Code Lock on Signal\n\
uint8 QUALITY_CODE_AND_CARRIER_LOCKED1 = 5  # Code and Carrier locked\n\
uint8 QUALITY_CODE_AND_CARRIER_LOCKED2 = 6  # Code and Carrier locked\n\
uint8 QUALITY_CODE_AND_CARRIER_LOCKED3 = 7  # Code and Carrier locked\n\
\n\
uint8 cno             # Carrier to Noise Ratio (Signal Strength) [dbHz]\n\
int8 elev             # Elevation in integer degrees [deg]\n\
int16 azim            # Azimuth in integer degrees [deg]\n\
int32 prRes           # Pseudo range residual in centimetres [cm]\n\
\n\
";
  }

  static const char* value(const  ::ublox_msgs::NavSVINFO_SV_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::ublox_msgs::NavSVINFO_SV_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ublox_msgs::NavSVINFO_SV_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.chn);
    stream.next(m.svid);
    stream.next(m.flags);
    stream.next(m.quality);
    stream.next(m.cno);
    stream.next(m.elev);
    stream.next(m.azim);
    stream.next(m.prRes);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct NavSVINFO_SV_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::NavSVINFO_SV_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::ublox_msgs::NavSVINFO_SV_<ContainerAllocator> & v) 
  {
    s << indent << "chn: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.chn);
    s << indent << "svid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.svid);
    s << indent << "flags: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.flags);
    s << indent << "quality: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.quality);
    s << indent << "cno: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cno);
    s << indent << "elev: ";
    Printer<int8_t>::stream(s, indent + "  ", v.elev);
    s << indent << "azim: ";
    Printer<int16_t>::stream(s, indent + "  ", v.azim);
    s << indent << "prRes: ";
    Printer<int32_t>::stream(s, indent + "  ", v.prRes);
  }
};


} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_NAVSVINFO_SV_H

