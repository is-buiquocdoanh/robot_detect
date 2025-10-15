// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yolov8_msgs:msg/HumanPositionArray.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__HUMAN_POSITION_ARRAY__STRUCT_HPP_
#define YOLOV8_MSGS__MSG__DETAIL__HUMAN_POSITION_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'humans'
#include "yolov8_msgs/msg/detail/human_position__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__yolov8_msgs__msg__HumanPositionArray __attribute__((deprecated))
#else
# define DEPRECATED__yolov8_msgs__msg__HumanPositionArray __declspec(deprecated)
#endif

namespace yolov8_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HumanPositionArray_
{
  using Type = HumanPositionArray_<ContainerAllocator>;

  explicit HumanPositionArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit HumanPositionArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _humans_type =
    std::vector<yolov8_msgs::msg::HumanPosition_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<yolov8_msgs::msg::HumanPosition_<ContainerAllocator>>>;
  _humans_type humans;

  // setters for named parameter idiom
  Type & set__humans(
    const std::vector<yolov8_msgs::msg::HumanPosition_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<yolov8_msgs::msg::HumanPosition_<ContainerAllocator>>> & _arg)
  {
    this->humans = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yolov8_msgs::msg::HumanPositionArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const yolov8_msgs::msg::HumanPositionArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yolov8_msgs::msg::HumanPositionArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yolov8_msgs::msg::HumanPositionArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yolov8_msgs::msg::HumanPositionArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yolov8_msgs::msg::HumanPositionArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yolov8_msgs::msg::HumanPositionArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yolov8_msgs::msg::HumanPositionArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yolov8_msgs::msg::HumanPositionArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yolov8_msgs::msg::HumanPositionArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yolov8_msgs__msg__HumanPositionArray
    std::shared_ptr<yolov8_msgs::msg::HumanPositionArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yolov8_msgs__msg__HumanPositionArray
    std::shared_ptr<yolov8_msgs::msg::HumanPositionArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HumanPositionArray_ & other) const
  {
    if (this->humans != other.humans) {
      return false;
    }
    return true;
  }
  bool operator!=(const HumanPositionArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HumanPositionArray_

// alias to use template instance with default allocator
using HumanPositionArray =
  yolov8_msgs::msg::HumanPositionArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yolov8_msgs

#endif  // YOLOV8_MSGS__MSG__DETAIL__HUMAN_POSITION_ARRAY__STRUCT_HPP_
