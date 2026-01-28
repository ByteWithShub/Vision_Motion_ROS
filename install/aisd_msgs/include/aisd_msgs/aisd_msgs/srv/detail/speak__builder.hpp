// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aisd_msgs:srv/Speak.idl
// generated code does not contain a copyright notice

#ifndef AISD_MSGS__SRV__DETAIL__SPEAK__BUILDER_HPP_
#define AISD_MSGS__SRV__DETAIL__SPEAK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aisd_msgs/srv/detail/speak__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aisd_msgs
{

namespace srv
{

namespace builder
{

class Init_Speak_Request_words
{
public:
  Init_Speak_Request_words()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aisd_msgs::srv::Speak_Request words(::aisd_msgs::srv::Speak_Request::_words_type arg)
  {
    msg_.words = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aisd_msgs::srv::Speak_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aisd_msgs::srv::Speak_Request>()
{
  return aisd_msgs::srv::builder::Init_Speak_Request_words();
}

}  // namespace aisd_msgs


namespace aisd_msgs
{

namespace srv
{

namespace builder
{

class Init_Speak_Response_response
{
public:
  Init_Speak_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aisd_msgs::srv::Speak_Response response(::aisd_msgs::srv::Speak_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aisd_msgs::srv::Speak_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aisd_msgs::srv::Speak_Response>()
{
  return aisd_msgs::srv::builder::Init_Speak_Response_response();
}

}  // namespace aisd_msgs

#endif  // AISD_MSGS__SRV__DETAIL__SPEAK__BUILDER_HPP_
