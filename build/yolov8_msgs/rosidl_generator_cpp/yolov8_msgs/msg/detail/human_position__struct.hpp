// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yolov8_msgs:msg/HumanPosition.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__HUMAN_POSITION__STRUCT_HPP_
#define YOLOV8_MSGS__MSG__DETAIL__HUMAN_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__yolov8_msgs__msg__HumanPosition __attribute__((deprecated))
#else
# define DEPRECATED__yolov8_msgs__msg__HumanPosition __declspec(deprecated)
#endif

namespace yolov8_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HumanPosition_
{
  using Type = HumanPosition_<ContainerAllocator>;

  explicit HumanPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_center = 0.0f;
      this->y_center = 0.0f;
      this->width = 0.0f;
      this->height = 0.0f;
      this->confidence = 0.0f;
    }
  }

  explicit HumanPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_center = 0.0f;
      this->y_center = 0.0f;
      this->width = 0.0f;
      this->height = 0.0f;
      this->confidence = 0.0f;
    }
  }

  // field types and members
  using _x_center_type =
    float;
  _x_center_type x_center;
  using _y_center_type =
    float;
  _y_center_type y_center;
  using _width_type =
    float;
  _width_type width;
  using _height_type =
    float;
  _height_type height;
  using _confidence_type =
    float;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__x_center(
    const float & _arg)
  {
    this->x_center = _arg;
    return *this;
  }
  Type & set__y_center(
    const float & _arg)
  {
    this->y_center = _arg;
    return *this;
  }
  Type & set__width(
    const float & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yolov8_msgs::msg::HumanPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const yolov8_msgs::msg::HumanPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yolov8_msgs::msg::HumanPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yolov8_msgs::msg::HumanPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yolov8_msgs::msg::HumanPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yolov8_msgs::msg::HumanPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yolov8_msgs::msg::HumanPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yolov8_msgs::msg::HumanPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yolov8_msgs::msg::HumanPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yolov8_msgs::msg::HumanPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yolov8_msgs__msg__HumanPosition
    std::shared_ptr<yolov8_msgs::msg::HumanPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yolov8_msgs__msg__HumanPosition
    std::shared_ptr<yolov8_msgs::msg::HumanPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HumanPosition_ & other) const
  {
    if (this->x_center != other.x_center) {
      return false;
    }
    if (this->y_center != other.y_center) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const HumanPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HumanPosition_

// alias to use template instance with default allocator
using HumanPosition =
  yolov8_msgs::msg::HumanPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yolov8_msgs

#endif  // YOLOV8_MSGS__MSG__DETAIL__HUMAN_POSITION__STRUCT_HPP_
