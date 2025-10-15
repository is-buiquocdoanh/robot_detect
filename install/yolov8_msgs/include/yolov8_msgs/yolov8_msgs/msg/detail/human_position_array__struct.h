// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolov8_msgs:msg/HumanPositionArray.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__HUMAN_POSITION_ARRAY__STRUCT_H_
#define YOLOV8_MSGS__MSG__DETAIL__HUMAN_POSITION_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'humans'
#include "yolov8_msgs/msg/detail/human_position__struct.h"

/// Struct defined in msg/HumanPositionArray in the package yolov8_msgs.
/**
  * Danh sách nhiều người được YOLO phát hiện
 */
typedef struct yolov8_msgs__msg__HumanPositionArray
{
  yolov8_msgs__msg__HumanPosition__Sequence humans;
} yolov8_msgs__msg__HumanPositionArray;

// Struct for a sequence of yolov8_msgs__msg__HumanPositionArray.
typedef struct yolov8_msgs__msg__HumanPositionArray__Sequence
{
  yolov8_msgs__msg__HumanPositionArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolov8_msgs__msg__HumanPositionArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLOV8_MSGS__MSG__DETAIL__HUMAN_POSITION_ARRAY__STRUCT_H_
