// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolov8_msgs:msg/HumanPosition.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__HUMAN_POSITION__BUILDER_HPP_
#define YOLOV8_MSGS__MSG__DETAIL__HUMAN_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yolov8_msgs/msg/detail/human_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yolov8_msgs
{

namespace msg
{

namespace builder
{

class Init_HumanPosition_confidence
{
public:
  explicit Init_HumanPosition_confidence(::yolov8_msgs::msg::HumanPosition & msg)
  : msg_(msg)
  {}
  ::yolov8_msgs::msg::HumanPosition confidence(::yolov8_msgs::msg::HumanPosition::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolov8_msgs::msg::HumanPosition msg_;
};

class Init_HumanPosition_height
{
public:
  explicit Init_HumanPosition_height(::yolov8_msgs::msg::HumanPosition & msg)
  : msg_(msg)
  {}
  Init_HumanPosition_confidence height(::yolov8_msgs::msg::HumanPosition::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_HumanPosition_confidence(msg_);
  }

private:
  ::yolov8_msgs::msg::HumanPosition msg_;
};

class Init_HumanPosition_width
{
public:
  explicit Init_HumanPosition_width(::yolov8_msgs::msg::HumanPosition & msg)
  : msg_(msg)
  {}
  Init_HumanPosition_height width(::yolov8_msgs::msg::HumanPosition::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_HumanPosition_height(msg_);
  }

private:
  ::yolov8_msgs::msg::HumanPosition msg_;
};

class Init_HumanPosition_y_center
{
public:
  explicit Init_HumanPosition_y_center(::yolov8_msgs::msg::HumanPosition & msg)
  : msg_(msg)
  {}
  Init_HumanPosition_width y_center(::yolov8_msgs::msg::HumanPosition::_y_center_type arg)
  {
    msg_.y_center = std::move(arg);
    return Init_HumanPosition_width(msg_);
  }

private:
  ::yolov8_msgs::msg::HumanPosition msg_;
};

class Init_HumanPosition_x_center
{
public:
  Init_HumanPosition_x_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HumanPosition_y_center x_center(::yolov8_msgs::msg::HumanPosition::_x_center_type arg)
  {
    msg_.x_center = std::move(arg);
    return Init_HumanPosition_y_center(msg_);
  }

private:
  ::yolov8_msgs::msg::HumanPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolov8_msgs::msg::HumanPosition>()
{
  return yolov8_msgs::msg::builder::Init_HumanPosition_x_center();
}

}  // namespace yolov8_msgs

#endif  // YOLOV8_MSGS__MSG__DETAIL__HUMAN_POSITION__BUILDER_HPP_
