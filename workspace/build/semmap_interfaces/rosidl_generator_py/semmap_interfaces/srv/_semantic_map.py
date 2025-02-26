# generated from rosidl_generator_py/resource/_idl.py.em
# with input from semmap_interfaces:srv/SemanticMap.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SemanticMap_Request(type):
    """Metaclass of message 'SemanticMap_Request'."""

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
                'semmap_interfaces.srv.SemanticMap_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__semantic_map__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__semantic_map__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__semantic_map__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__semantic_map__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__semantic_map__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SemanticMap_Request(metaclass=Metaclass_SemanticMap_Request):
    """Message class 'SemanticMap_Request'."""

    __slots__ = [
        '_request_priority',
    ]

    _fields_and_field_types = {
        'request_priority': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.request_priority = kwargs.get('request_priority', int())

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
        if self.request_priority != other.request_priority:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def request_priority(self):
        """Message field 'request_priority'."""
        return self._request_priority

    @request_priority.setter
    def request_priority(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'request_priority' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'request_priority' field must be an unsigned integer in [0, 255]"
        self._request_priority = value


# Import statements for member types

# Member 'object_x'
# Member 'object_y'
# Member 'object_elevation'
import array  # noqa: E402, I100

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SemanticMap_Response(type):
    """Metaclass of message 'SemanticMap_Response'."""

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
                'semmap_interfaces.srv.SemanticMap_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__semantic_map__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__semantic_map__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__semantic_map__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__semantic_map__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__semantic_map__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SemanticMap_Response(metaclass=Metaclass_SemanticMap_Response):
    """Message class 'SemanticMap_Response'."""

    __slots__ = [
        '_positive_and0_x',
        '_negative_x',
        '_positive_and0_y',
        '_negative_y',
        '_object_tags',
        '_object_x',
        '_object_y',
        '_object_elevation',
    ]

    _fields_and_field_types = {
        'positive_and0_x': 'sequence<boolean>',
        'negative_x': 'sequence<boolean>',
        'positive_and0_y': 'sequence<boolean>',
        'negative_y': 'sequence<boolean>',
        'object_tags': 'sequence<string>',
        'object_x': 'sequence<int32>',
        'object_y': 'sequence<int32>',
        'object_elevation': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.positive_and0_x = kwargs.get('positive_and0_x', [])
        self.negative_x = kwargs.get('negative_x', [])
        self.positive_and0_y = kwargs.get('positive_and0_y', [])
        self.negative_y = kwargs.get('negative_y', [])
        self.object_tags = kwargs.get('object_tags', [])
        self.object_x = array.array('i', kwargs.get('object_x', []))
        self.object_y = array.array('i', kwargs.get('object_y', []))
        self.object_elevation = array.array('i', kwargs.get('object_elevation', []))

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
        if self.object_tags != other.object_tags:
            return False
        if self.object_x != other.object_x:
            return False
        if self.object_y != other.object_y:
            return False
        if self.object_elevation != other.object_elevation:
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

    @builtins.property
    def object_tags(self):
        """Message field 'object_tags'."""
        return self._object_tags

    @object_tags.setter
    def object_tags(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'object_tags' field must be a set or sequence and each value of type 'str'"
        self._object_tags = value

    @builtins.property
    def object_x(self):
        """Message field 'object_x'."""
        return self._object_x

    @object_x.setter
    def object_x(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'object_x' array.array() must have the type code of 'i'"
            self._object_x = value
            return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'object_x' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._object_x = array.array('i', value)

    @builtins.property
    def object_y(self):
        """Message field 'object_y'."""
        return self._object_y

    @object_y.setter
    def object_y(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'object_y' array.array() must have the type code of 'i'"
            self._object_y = value
            return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'object_y' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._object_y = array.array('i', value)

    @builtins.property
    def object_elevation(self):
        """Message field 'object_elevation'."""
        return self._object_elevation

    @object_elevation.setter
    def object_elevation(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'object_elevation' array.array() must have the type code of 'i'"
            self._object_elevation = value
            return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'object_elevation' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._object_elevation = array.array('i', value)


class Metaclass_SemanticMap(type):
    """Metaclass of service 'SemanticMap'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('semmap_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'semmap_interfaces.srv.SemanticMap')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__semantic_map

            from semmap_interfaces.srv import _semantic_map
            if _semantic_map.Metaclass_SemanticMap_Request._TYPE_SUPPORT is None:
                _semantic_map.Metaclass_SemanticMap_Request.__import_type_support__()
            if _semantic_map.Metaclass_SemanticMap_Response._TYPE_SUPPORT is None:
                _semantic_map.Metaclass_SemanticMap_Response.__import_type_support__()


class SemanticMap(metaclass=Metaclass_SemanticMap):
    from semmap_interfaces.srv._semantic_map import SemanticMap_Request as Request
    from semmap_interfaces.srv._semantic_map import SemanticMap_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
