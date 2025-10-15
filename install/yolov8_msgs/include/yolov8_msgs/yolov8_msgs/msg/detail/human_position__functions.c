// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yolov8_msgs:msg/HumanPosition.idl
// generated code does not contain a copyright notice
#include "yolov8_msgs/msg/detail/human_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
yolov8_msgs__msg__HumanPosition__init(yolov8_msgs__msg__HumanPosition * msg)
{
  if (!msg) {
    return false;
  }
  // x_center
  // y_center
  // width
  // height
  // confidence
  return true;
}

void
yolov8_msgs__msg__HumanPosition__fini(yolov8_msgs__msg__HumanPosition * msg)
{
  if (!msg) {
    return;
  }
  // x_center
  // y_center
  // width
  // height
  // confidence
}

bool
yolov8_msgs__msg__HumanPosition__are_equal(const yolov8_msgs__msg__HumanPosition * lhs, const yolov8_msgs__msg__HumanPosition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x_center
  if (lhs->x_center != rhs->x_center) {
    return false;
  }
  // y_center
  if (lhs->y_center != rhs->y_center) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  return true;
}

bool
yolov8_msgs__msg__HumanPosition__copy(
  const yolov8_msgs__msg__HumanPosition * input,
  yolov8_msgs__msg__HumanPosition * output)
{
  if (!input || !output) {
    return false;
  }
  // x_center
  output->x_center = input->x_center;
  // y_center
  output->y_center = input->y_center;
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // confidence
  output->confidence = input->confidence;
  return true;
}

yolov8_msgs__msg__HumanPosition *
yolov8_msgs__msg__HumanPosition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolov8_msgs__msg__HumanPosition * msg = (yolov8_msgs__msg__HumanPosition *)allocator.allocate(sizeof(yolov8_msgs__msg__HumanPosition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yolov8_msgs__msg__HumanPosition));
  bool success = yolov8_msgs__msg__HumanPosition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yolov8_msgs__msg__HumanPosition__destroy(yolov8_msgs__msg__HumanPosition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yolov8_msgs__msg__HumanPosition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yolov8_msgs__msg__HumanPosition__Sequence__init(yolov8_msgs__msg__HumanPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolov8_msgs__msg__HumanPosition * data = NULL;

  if (size) {
    data = (yolov8_msgs__msg__HumanPosition *)allocator.zero_allocate(size, sizeof(yolov8_msgs__msg__HumanPosition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yolov8_msgs__msg__HumanPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yolov8_msgs__msg__HumanPosition__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
yolov8_msgs__msg__HumanPosition__Sequence__fini(yolov8_msgs__msg__HumanPosition__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      yolov8_msgs__msg__HumanPosition__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

yolov8_msgs__msg__HumanPosition__Sequence *
yolov8_msgs__msg__HumanPosition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolov8_msgs__msg__HumanPosition__Sequence * array = (yolov8_msgs__msg__HumanPosition__Sequence *)allocator.allocate(sizeof(yolov8_msgs__msg__HumanPosition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yolov8_msgs__msg__HumanPosition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yolov8_msgs__msg__HumanPosition__Sequence__destroy(yolov8_msgs__msg__HumanPosition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yolov8_msgs__msg__HumanPosition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yolov8_msgs__msg__HumanPosition__Sequence__are_equal(const yolov8_msgs__msg__HumanPosition__Sequence * lhs, const yolov8_msgs__msg__HumanPosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yolov8_msgs__msg__HumanPosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yolov8_msgs__msg__HumanPosition__Sequence__copy(
  const yolov8_msgs__msg__HumanPosition__Sequence * input,
  yolov8_msgs__msg__HumanPosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yolov8_msgs__msg__HumanPosition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yolov8_msgs__msg__HumanPosition * data =
      (yolov8_msgs__msg__HumanPosition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yolov8_msgs__msg__HumanPosition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yolov8_msgs__msg__HumanPosition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yolov8_msgs__msg__HumanPosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
