// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aisd_msgs:msg/Hand.idl
// generated code does not contain a copyright notice

#ifndef AISD_MSGS__MSG__DETAIL__HAND__BUILDER_HPP_
#define AISD_MSGS__MSG__DETAIL__HAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aisd_msgs/msg/detail/hand__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aisd_msgs
{

namespace msg
{

namespace builder
{

class Init_Hand_xindex
{
public:
  explicit Init_Hand_xindex(::aisd_msgs::msg::Hand & msg)
  : msg_(msg)
  {}
  ::aisd_msgs::msg::Hand xindex(::aisd_msgs::msg::Hand::_xindex_type arg)
  {
    msg_.xindex = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aisd_msgs::msg::Hand msg_;
};

class Init_Hand_xpinky
{
public:
  Init_Hand_xpinky()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Hand_xindex xpinky(::aisd_msgs::msg::Hand::_xpinky_type arg)
  {
    msg_.xpinky = std::move(arg);
    return Init_Hand_xindex(msg_);
  }

private:
  ::aisd_msgs::msg::Hand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aisd_msgs::msg::Hand>()
{
  return aisd_msgs::msg::builder::Init_Hand_xpinky();
}

}  // namespace aisd_msgs

#endif  // AISD_MSGS__MSG__DETAIL__HAND__BUILDER_HPP_
