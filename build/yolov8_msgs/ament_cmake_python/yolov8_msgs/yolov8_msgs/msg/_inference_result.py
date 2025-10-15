# generated from rosidl_generator_py/resource/_idl.py.em
# with input from yolov8_msgs:msg/InferenceResult.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InferenceResult(type):
    """Metaclass of message 'InferenceResult'."""

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
            module = import_type_support('yolov8_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'yolov8_msgs.msg.InferenceResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__inference_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__inference_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__inference_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__inference_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__inference_result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InferenceResult(metaclass=Metaclass_InferenceResult):
    """Message class 'InferenceResult'."""

    __slots__ = [
        '_class_name',
        '_top',
        '_left',
        '_bottom',
        '_right',
    ]

    _fields_and_field_types = {
        'class_name': 'string',
        'top': 'int64',
        'left': 'int64',
        'bottom': 'int64',
        'right': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.class_name = kwargs.get('class_name', str())
        self.top = kwargs.get('top', int())
        self.left = kwargs.get('left', int())
        self.bottom = kwargs.get('bottom', int())
        self.right = kwargs.get('right', int())

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
        if self.class_name != other.class_name:
            return False
        if self.top != other.top:
            return False
        if self.left != other.left:
            return False
        if self.bottom != other.bottom:
            return False
        if self.right != other.right:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def class_name(self):
        """Message field 'class_name'."""
        return self._class_name

    @class_name.setter
    def class_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'class_name' field must be of type 'str'"
        self._class_name = value

    @builtins.property
    def top(self):
        """Message field 'top'."""
        return self._top

    @top.setter
    def top(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'top' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'top' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._top = value

    @builtins.property
    def left(self):
        """Message field 'left'."""
        return self._left

    @left.setter
    def left(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'left' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._left = value

    @builtins.property
    def bottom(self):
        """Message field 'bottom'."""
        return self._bottom

    @bottom.setter
    def bottom(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bottom' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'bottom' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._bottom = value

    @builtins.property
    def right(self):
        """Message field 'right'."""
        return self._right

    @right.setter
    def right(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'right' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._right = value
