// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolov8_msgs:msg/HumanPositionArray.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__HUMAN_POSITION_ARRAY__BUILDER_HPP_
#define YOLOV8_MSGS__MSG__DETAIL__HUMAN_POSITION_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yolov8_msgs/msg/detail/human_position_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yolov8_msgs
{

namespace msg
{

namespace builder
{

class Init_HumanPositionArray_humans
{
public:
  Init_HumanPositionArray_humans()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::yolov8_msgs::msg::HumanPositionArray humans(::yolov8_msgs::msg::HumanPositionArray::_humans_type arg)
  {
    msg_.humans = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolov8_msgs::msg::HumanPositionArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolov8_msgs::msg::HumanPositionArray>()
{
  return yolov8_msgs::msg::builder::Init_HumanPositionArray_humans();
}

}  // namespace yolov8_msgs

#endif  // YOLOV8_MSGS__MSG__DETAIL__HUMAN_POSITION_ARRAY__BUILDER_HPP_
