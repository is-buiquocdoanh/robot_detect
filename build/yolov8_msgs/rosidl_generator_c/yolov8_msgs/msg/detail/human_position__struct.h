// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolov8_msgs:msg/HumanPosition.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__HUMAN_POSITION__STRUCT_H_
#define YOLOV8_MSGS__MSG__DETAIL__HUMAN_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/HumanPosition in the package yolov8_msgs.
typedef struct yolov8_msgs__msg__HumanPosition
{
  float x_center;
  float y_center;
  float width;
  float height;
  float confidence;
} yolov8_msgs__msg__HumanPosition;

// Struct for a sequence of yolov8_msgs__msg__HumanPosition.
typedef struct yolov8_msgs__msg__HumanPosition__Sequence
{
  yolov8_msgs__msg__HumanPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolov8_msgs__msg__HumanPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLOV8_MSGS__MSG__DETAIL__HUMAN_POSITION__STRUCT_H_
