"""autogenerated by genpy from ublox_msgs/NavVELNED.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class NavVELNED(genpy.Message):
  _md5sum = "b03402bb86164e74f01e04bff1850150"
  _type = "ublox_msgs/NavVELNED"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# NAV-VELNED (0x01 0x12)
# Velocity Solution in NED
#
# See important comments concerning validity of velocity given in section
# Navigation Output Filters.
#

uint8 CLASS_ID = 1
uint8 MESSAGE_ID = 18

uint32 iTOW             # GPS Millisecond time of week [ms]

int32 velN              # NED north velocity [cm/s]
int32 velE              # NED east velocity [cm/s]
int32 velD              # NED down velocity [cm/s]
uint32 speed            # Speed (3-D) [cm/s]
uint32 gSpeed           # Ground Speed (2-D) [cm/s]
int32 heading           # Heading of motion 2-D [deg / 1e-5]
uint32 sAcc             # Speed Accuracy Estimate [cm/s]
uint32 cAcc             # Course / Heading Accuracy Estimate [deg / 1e-5]

"""
  # Pseudo-constants
  CLASS_ID = 1
  MESSAGE_ID = 18

  __slots__ = ['iTOW','velN','velE','velD','speed','gSpeed','heading','sAcc','cAcc']
  _slot_types = ['uint32','int32','int32','int32','uint32','uint32','int32','uint32','uint32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       iTOW,velN,velE,velD,speed,gSpeed,heading,sAcc,cAcc

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(NavVELNED, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.iTOW is None:
        self.iTOW = 0
      if self.velN is None:
        self.velN = 0
      if self.velE is None:
        self.velE = 0
      if self.velD is None:
        self.velD = 0
      if self.speed is None:
        self.speed = 0
      if self.gSpeed is None:
        self.gSpeed = 0
      if self.heading is None:
        self.heading = 0
      if self.sAcc is None:
        self.sAcc = 0
      if self.cAcc is None:
        self.cAcc = 0
    else:
      self.iTOW = 0
      self.velN = 0
      self.velE = 0
      self.velD = 0
      self.speed = 0
      self.gSpeed = 0
      self.heading = 0
      self.sAcc = 0
      self.cAcc = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_I3i2Ii2I.pack(_x.iTOW, _x.velN, _x.velE, _x.velD, _x.speed, _x.gSpeed, _x.heading, _x.sAcc, _x.cAcc))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 36
      (_x.iTOW, _x.velN, _x.velE, _x.velD, _x.speed, _x.gSpeed, _x.heading, _x.sAcc, _x.cAcc,) = _struct_I3i2Ii2I.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_I3i2Ii2I.pack(_x.iTOW, _x.velN, _x.velE, _x.velD, _x.speed, _x.gSpeed, _x.heading, _x.sAcc, _x.cAcc))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 36
      (_x.iTOW, _x.velN, _x.velE, _x.velD, _x.speed, _x.gSpeed, _x.heading, _x.sAcc, _x.cAcc,) = _struct_I3i2Ii2I.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_I3i2Ii2I = struct.Struct("<I3i2Ii2I")
