// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aisd_msgs:msg/Hand.idl
// generated code does not contain a copyright notice

#ifndef AISD_MSGS__MSG__DETAIL__HAND__TRAITS_HPP_
#define AISD_MSGS__MSG__DETAIL__HAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aisd_msgs/msg/detail/hand__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aisd_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Hand & msg,
  std::ostream & out)
{
  out << "{";
  // member: xpinky
  {
    out << "xpinky: ";
    rosidl_generator_traits::value_to_yaml(msg.xpinky, out);
    out << ", ";
  }

  // member: xindex
  {
    out << "xindex: ";
    rosidl_generator_traits::value_to_yaml(msg.xindex, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Hand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: xpinky
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xpinky: ";
    rosidl_generator_traits::value_to_yaml(msg.xpinky, out);
    out << "\n";
  }

  // member: xindex
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xindex: ";
    rosidl_generator_traits::value_to_yaml(msg.xindex, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Hand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace aisd_msgs

namespace rosidl_generator_traits
{

[[deprecated("use aisd_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aisd_msgs::msg::Hand & msg,
  std::ostream & out, size_t indentation = 0)
{
  aisd_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aisd_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aisd_msgs::msg::Hand & msg)
{
  return aisd_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aisd_msgs::msg::Hand>()
{
  return "aisd_msgs::msg::Hand";
}

template<>
inline const char * name<aisd_msgs::msg::Hand>()
{
  return "aisd_msgs/msg/Hand";
}

template<>
struct has_fixed_size<aisd_msgs::msg::Hand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aisd_msgs::msg::Hand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aisd_msgs::msg::Hand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AISD_MSGS__MSG__DETAIL__HAND__TRAITS_HPP_
