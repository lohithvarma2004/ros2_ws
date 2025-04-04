# generated from rosidl_generator_py/resource/_idl.py.em
# with input from uuv_world_ros_plugins_msgs:srv/GetOriginSphericalCoord.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetOriginSphericalCoord_Request(type):
    """Metaclass of message 'GetOriginSphericalCoord_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('uuv_world_ros_plugins_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uuv_world_ros_plugins_msgs.srv.GetOriginSphericalCoord_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_origin_spherical_coord__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_origin_spherical_coord__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_origin_spherical_coord__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_origin_spherical_coord__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_origin_spherical_coord__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetOriginSphericalCoord_Request(metaclass=Metaclass_GetOriginSphericalCoord_Request):
    """Message class 'GetOriginSphericalCoord_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetOriginSphericalCoord_Response(type):
    """Metaclass of message 'GetOriginSphericalCoord_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('uuv_world_ros_plugins_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uuv_world_ros_plugins_msgs.srv.GetOriginSphericalCoord_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_origin_spherical_coord__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_origin_spherical_coord__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_origin_spherical_coord__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_origin_spherical_coord__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_origin_spherical_coord__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetOriginSphericalCoord_Response(metaclass=Metaclass_GetOriginSphericalCoord_Response):
    """Message class 'GetOriginSphericalCoord_Response'."""

    __slots__ = [
        '_latitude_deg',
        '_longitude_deg',
        '_altitude',
    ]

    _fields_and_field_types = {
        'latitude_deg': 'double',
        'longitude_deg': 'double',
        'altitude': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.latitude_deg = kwargs.get('latitude_deg', float())
        self.longitude_deg = kwargs.get('longitude_deg', float())
        self.altitude = kwargs.get('altitude', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.latitude_deg != other.latitude_deg:
            return False
        if self.longitude_deg != other.longitude_deg:
            return False
        if self.altitude != other.altitude:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def latitude_deg(self):
        """Message field 'latitude_deg'."""
        return self._latitude_deg

    @latitude_deg.setter
    def latitude_deg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latitude_deg' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latitude_deg' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latitude_deg = value

    @builtins.property
    def longitude_deg(self):
        """Message field 'longitude_deg'."""
        return self._longitude_deg

    @longitude_deg.setter
    def longitude_deg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitude_deg' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitude_deg' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitude_deg = value

    @builtins.property
    def altitude(self):
        """Message field 'altitude'."""
        return self._altitude

    @altitude.setter
    def altitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'altitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'altitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._altitude = value


class Metaclass_GetOriginSphericalCoord(type):
    """Metaclass of service 'GetOriginSphericalCoord'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('uuv_world_ros_plugins_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uuv_world_ros_plugins_msgs.srv.GetOriginSphericalCoord')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_origin_spherical_coord

            from uuv_world_ros_plugins_msgs.srv import _get_origin_spherical_coord
            if _get_origin_spherical_coord.Metaclass_GetOriginSphericalCoord_Request._TYPE_SUPPORT is None:
                _get_origin_spherical_coord.Metaclass_GetOriginSphericalCoord_Request.__import_type_support__()
            if _get_origin_spherical_coord.Metaclass_GetOriginSphericalCoord_Response._TYPE_SUPPORT is None:
                _get_origin_spherical_coord.Metaclass_GetOriginSphericalCoord_Response.__import_type_support__()


class GetOriginSphericalCoord(metaclass=Metaclass_GetOriginSphericalCoord):
    from uuv_world_ros_plugins_msgs.srv._get_origin_spherical_coord import GetOriginSphericalCoord_Request as Request
    from uuv_world_ros_plugins_msgs.srv._get_origin_spherical_coord import GetOriginSphericalCoord_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
