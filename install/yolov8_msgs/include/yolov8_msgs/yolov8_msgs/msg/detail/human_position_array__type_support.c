// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from yolov8_msgs:msg/HumanPositionArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "yolov8_msgs/msg/detail/human_position_array__rosidl_typesupport_introspection_c.h"
#include "yolov8_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "yolov8_msgs/msg/detail/human_position_array__functions.h"
#include "yolov8_msgs/msg/detail/human_position_array__struct.h"


// Include directives for member types
// Member `humans`
#include "yolov8_msgs/msg/human_position.h"
// Member `humans`
#include "yolov8_msgs/msg/detail/human_position__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__HumanPositionArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yolov8_msgs__msg__HumanPositionArray__init(message_memory);
}

void yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__HumanPositionArray_fini_function(void * message_memory)
{
  yolov8_msgs__msg__HumanPositionArray__fini(message_memory);
}

size_t yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__size_function__HumanPositionArray__humans(
  const void * untyped_member)
{
  const yolov8_msgs__msg__HumanPosition__Sequence * member =
    (const yolov8_msgs__msg__HumanPosition__Sequence *)(untyped_member);
  return member->size;
}

const void * yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__get_const_function__HumanPositionArray__humans(
  const void * untyped_member, size_t index)
{
  const yolov8_msgs__msg__HumanPosition__Sequence * member =
    (const yolov8_msgs__msg__HumanPosition__Sequence *)(untyped_member);
  return &member->data[index];
}

void * yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__get_function__HumanPositionArray__humans(
  void * untyped_member, size_t index)
{
  yolov8_msgs__msg__HumanPosition__Sequence * member =
    (yolov8_msgs__msg__HumanPosition__Sequence *)(untyped_member);
  return &member->data[index];
}

void yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__fetch_function__HumanPositionArray__humans(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const yolov8_msgs__msg__HumanPosition * item =
    ((const yolov8_msgs__msg__HumanPosition *)
    yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__get_const_function__HumanPositionArray__humans(untyped_member, index));
  yolov8_msgs__msg__HumanPosition * value =
    (yolov8_msgs__msg__HumanPosition *)(untyped_value);
  *value = *item;
}

void yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__assign_function__HumanPositionArray__humans(
  void * untyped_member, size_t index, const void * untyped_value)
{
  yolov8_msgs__msg__HumanPosition * item =
    ((yolov8_msgs__msg__HumanPosition *)
    yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__get_function__HumanPositionArray__humans(untyped_member, index));
  const yolov8_msgs__msg__HumanPosition * value =
    (const yolov8_msgs__msg__HumanPosition *)(untyped_value);
  *item = *value;
}

bool yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__resize_function__HumanPositionArray__humans(
  void * untyped_member, size_t size)
{
  yolov8_msgs__msg__HumanPosition__Sequence * member =
    (yolov8_msgs__msg__HumanPosition__Sequence *)(untyped_member);
  yolov8_msgs__msg__HumanPosition__Sequence__fini(member);
  return yolov8_msgs__msg__HumanPosition__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__HumanPositionArray_message_member_array[1] = {
  {
    "humans",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolov8_msgs__msg__HumanPositionArray, humans),  // bytes offset in struct
    NULL,  // default value
    yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__size_function__HumanPositionArray__humans,  // size() function pointer
    yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__get_const_function__HumanPositionArray__humans,  // get_const(index) function pointer
    yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__get_function__HumanPositionArray__humans,  // get(index) function pointer
    yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__fetch_function__HumanPositionArray__humans,  // fetch(index, &value) function pointer
    yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__assign_function__HumanPositionArray__humans,  // assign(index, value) function pointer
    yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__resize_function__HumanPositionArray__humans  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__HumanPositionArray_message_members = {
  "yolov8_msgs__msg",  // message namespace
  "HumanPositionArray",  // message name
  1,  // number of fields
  sizeof(yolov8_msgs__msg__HumanPositionArray),
  yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__HumanPositionArray_message_member_array,  // message members
  yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__HumanPositionArray_init_function,  // function to initialize message memory (memory has to be allocated)
  yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__HumanPositionArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__HumanPositionArray_message_type_support_handle = {
  0,
  &yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__HumanPositionArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yolov8_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolov8_msgs, msg, HumanPositionArray)() {
  yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__HumanPositionArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolov8_msgs, msg, HumanPosition)();
  if (!yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__HumanPositionArray_message_type_support_handle.typesupport_identifier) {
    yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__HumanPositionArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &yolov8_msgs__msg__HumanPositionArray__rosidl_typesupport_introspection_c__HumanPositionArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
