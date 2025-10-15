// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolov8_msgs:msg/InferenceResult.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__INFERENCE_RESULT__BUILDER_HPP_
#define YOLOV8_MSGS__MSG__DETAIL__INFERENCE_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yolov8_msgs/msg/detail/inference_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yolov8_msgs
{

namespace msg
{

namespace builder
{

class Init_InferenceResult_right
{
public:
  explicit Init_InferenceResult_right(::yolov8_msgs::msg::InferenceResult & msg)
  : msg_(msg)
  {}
  ::yolov8_msgs::msg::InferenceResult right(::yolov8_msgs::msg::InferenceResult::_right_type arg)
  {
    msg_.right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolov8_msgs::msg::InferenceResult msg_;
};

class Init_InferenceResult_bottom
{
public:
  explicit Init_InferenceResult_bottom(::yolov8_msgs::msg::InferenceResult & msg)
  : msg_(msg)
  {}
  Init_InferenceResult_right bottom(::yolov8_msgs::msg::InferenceResult::_bottom_type arg)
  {
    msg_.bottom = std::move(arg);
    return Init_InferenceResult_right(msg_);
  }

private:
  ::yolov8_msgs::msg::InferenceResult msg_;
};

class Init_InferenceResult_left
{
public:
  explicit Init_InferenceResult_left(::yolov8_msgs::msg::InferenceResult & msg)
  : msg_(msg)
  {}
  Init_InferenceResult_bottom left(::yolov8_msgs::msg::InferenceResult::_left_type arg)
  {
    msg_.left = std::move(arg);
    return Init_InferenceResult_bottom(msg_);
  }

private:
  ::yolov8_msgs::msg::InferenceResult msg_;
};

class Init_InferenceResult_top
{
public:
  explicit Init_InferenceResult_top(::yolov8_msgs::msg::InferenceResult & msg)
  : msg_(msg)
  {}
  Init_InferenceResult_left top(::yolov8_msgs::msg::InferenceResult::_top_type arg)
  {
    msg_.top = std::move(arg);
    return Init_InferenceResult_left(msg_);
  }

private:
  ::yolov8_msgs::msg::InferenceResult msg_;
};

class Init_InferenceResult_class_name
{
public:
  Init_InferenceResult_class_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InferenceResult_top class_name(::yolov8_msgs::msg::InferenceResult::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_InferenceResult_top(msg_);
  }

private:
  ::yolov8_msgs::msg::InferenceResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolov8_msgs::msg::InferenceResult>()
{
  return yolov8_msgs::msg::builder::Init_InferenceResult_class_name();
}

}  // namespace yolov8_msgs

#endif  // YOLOV8_MSGS__MSG__DETAIL__INFERENCE_RESULT__BUILDER_HPP_
