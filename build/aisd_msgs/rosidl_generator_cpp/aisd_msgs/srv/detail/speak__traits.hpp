// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aisd_msgs:srv/Speak.idl
// generated code does not contain a copyright notice

#ifndef AISD_MSGS__SRV__DETAIL__SPEAK__TRAITS_HPP_
#define AISD_MSGS__SRV__DETAIL__SPEAK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aisd_msgs/srv/detail/speak__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aisd_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Speak_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: words
  {
    out << "words: ";
    rosidl_generator_traits::value_to_yaml(msg.words, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Speak_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: words
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "words: ";
    rosidl_generator_traits::value_to_yaml(msg.words, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Speak_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace aisd_msgs

namespace rosidl_generator_traits
{

[[deprecated("use aisd_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aisd_msgs::srv::Speak_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aisd_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aisd_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aisd_msgs::srv::Speak_Request & msg)
{
  return aisd_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aisd_msgs::srv::Speak_Request>()
{
  return "aisd_msgs::srv::Speak_Request";
}

template<>
inline const char * name<aisd_msgs::srv::Speak_Request>()
{
  return "aisd_msgs/srv/Speak_Request";
}

template<>
struct has_fixed_size<aisd_msgs::srv::Speak_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aisd_msgs::srv::Speak_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aisd_msgs::srv::Speak_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace aisd_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Speak_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Speak_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Speak_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace aisd_msgs

namespace rosidl_generator_traits
{

[[deprecated("use aisd_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aisd_msgs::srv::Speak_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aisd_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aisd_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aisd_msgs::srv::Speak_Response & msg)
{
  return aisd_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aisd_msgs::srv::Speak_Response>()
{
  return "aisd_msgs::srv::Speak_Response";
}

template<>
inline const char * name<aisd_msgs::srv::Speak_Response>()
{
  return "aisd_msgs/srv/Speak_Response";
}

template<>
struct has_fixed_size<aisd_msgs::srv::Speak_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aisd_msgs::srv::Speak_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aisd_msgs::srv::Speak_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aisd_msgs::srv::Speak>()
{
  return "aisd_msgs::srv::Speak";
}

template<>
inline const char * name<aisd_msgs::srv::Speak>()
{
  return "aisd_msgs/srv/Speak";
}

template<>
struct has_fixed_size<aisd_msgs::srv::Speak>
  : std::integral_constant<
    bool,
    has_fixed_size<aisd_msgs::srv::Speak_Request>::value &&
    has_fixed_size<aisd_msgs::srv::Speak_Response>::value
  >
{
};

template<>
struct has_bounded_size<aisd_msgs::srv::Speak>
  : std::integral_constant<
    bool,
    has_bounded_size<aisd_msgs::srv::Speak_Request>::value &&
    has_bounded_size<aisd_msgs::srv::Speak_Response>::value
  >
{
};

template<>
struct is_service<aisd_msgs::srv::Speak>
  : std::true_type
{
};

template<>
struct is_service_request<aisd_msgs::srv::Speak_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aisd_msgs::srv::Speak_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AISD_MSGS__SRV__DETAIL__SPEAK__TRAITS_HPP_
