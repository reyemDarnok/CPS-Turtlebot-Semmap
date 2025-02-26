# generated from rosidl_generator_py/resource/_idl.py.em
# with input from semmap_interfaces:msg/SlamMap.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SlamMap(type):
    """Metaclass of message 'SlamMap'."""

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
            module = import_type_support('semmap_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'semmap_interfaces.msg.SlamMap')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__slam_map
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__slam_map
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__slam_map
            cls._TYPE_SUPPORT = module.type_support_msg__msg__slam_map
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__slam_map

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SlamMap(metaclass=Metaclass_SlamMap):
    """Message class 'SlamMap'."""

    __slots__ = [
        '_positive_and0_x',
        '_negative_x',
        '_positive_and0_y',
        '_negative_y',
    ]

    _fields_and_field_types = {
        'positive_and0_x': 'sequence<boolean>',
        'negative_x': 'sequence<boolean>',
        'positive_and0_y': 'sequence<boolean>',
        'negative_y': 'sequence<boolean>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.positive_and0_x = kwargs.get('positive_and0_x', [])
        self.negative_x = kwargs.get('negative_x', [])
        self.positive_and0_y = kwargs.get('positive_and0_y', [])
        self.negative_y = kwargs.get('negative_y', [])

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
        if self.positive_and0_x != other.positive_and0_x:
            return False
        if self.negative_x != other.negative_x:
            return False
        if self.positive_and0_y != other.positive_and0_y:
            return False
        if self.negative_y != other.negative_y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def positive_and0_x(self):
        """Message field 'positive_and0_x'."""
        return self._positive_and0_x

    @positive_and0_x.setter
    def positive_and0_x(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'positive_and0_x' field must be a set or sequence and each value of type 'bool'"
        self._positive_and0_x = value

    @builtins.property
    def negative_x(self):
        """Message field 'negative_x'."""
        return self._negative_x

    @negative_x.setter
    def negative_x(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'negative_x' field must be a set or sequence and each value of type 'bool'"
        self._negative_x = value

    @builtins.property
    def positive_and0_y(self):
        """Message field 'positive_and0_y'."""
        return self._positive_and0_y

    @positive_and0_y.setter
    def positive_and0_y(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'positive_and0_y' field must be a set or sequence and each value of type 'bool'"
        self._positive_and0_y = value

    @builtins.property
    def negative_y(self):
        """Message field 'negative_y'."""
        return self._negative_y

    @negative_y.setter
    def negative_y(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'negative_y' field must be a set or sequence and each value of type 'bool'"
        self._negative_y = value
