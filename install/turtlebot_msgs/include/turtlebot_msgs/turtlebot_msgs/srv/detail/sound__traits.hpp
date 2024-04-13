// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlebot_msgs:srv/Sound.idl
// generated code does not contain a copyright notice

#ifndef TURTLEBOT_MSGS__SRV__DETAIL__SOUND__TRAITS_HPP_
#define TURTLEBOT_MSGS__SRV__DETAIL__SOUND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtlebot_msgs/srv/detail/sound__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtlebot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Sound_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Sound_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Sound_Request & msg, bool use_flow_style = false)
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

}  // namespace turtlebot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use turtlebot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlebot_msgs::srv::Sound_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlebot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlebot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtlebot_msgs::srv::Sound_Request & msg)
{
  return turtlebot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtlebot_msgs::srv::Sound_Request>()
{
  return "turtlebot_msgs::srv::Sound_Request";
}

template<>
inline const char * name<turtlebot_msgs::srv::Sound_Request>()
{
  return "turtlebot_msgs/srv/Sound_Request";
}

template<>
struct has_fixed_size<turtlebot_msgs::srv::Sound_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlebot_msgs::srv::Sound_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlebot_msgs::srv::Sound_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace turtlebot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Sound_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Sound_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Sound_Response & msg, bool use_flow_style = false)
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

}  // namespace turtlebot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use turtlebot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlebot_msgs::srv::Sound_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlebot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlebot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtlebot_msgs::srv::Sound_Response & msg)
{
  return turtlebot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtlebot_msgs::srv::Sound_Response>()
{
  return "turtlebot_msgs::srv::Sound_Response";
}

template<>
inline const char * name<turtlebot_msgs::srv::Sound_Response>()
{
  return "turtlebot_msgs/srv/Sound_Response";
}

template<>
struct has_fixed_size<turtlebot_msgs::srv::Sound_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtlebot_msgs::srv::Sound_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtlebot_msgs::srv::Sound_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlebot_msgs::srv::Sound>()
{
  return "turtlebot_msgs::srv::Sound";
}

template<>
inline const char * name<turtlebot_msgs::srv::Sound>()
{
  return "turtlebot_msgs/srv/Sound";
}

template<>
struct has_fixed_size<turtlebot_msgs::srv::Sound>
  : std::integral_constant<
    bool,
    has_fixed_size<turtlebot_msgs::srv::Sound_Request>::value &&
    has_fixed_size<turtlebot_msgs::srv::Sound_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtlebot_msgs::srv::Sound>
  : std::integral_constant<
    bool,
    has_bounded_size<turtlebot_msgs::srv::Sound_Request>::value &&
    has_bounded_size<turtlebot_msgs::srv::Sound_Response>::value
  >
{
};

template<>
struct is_service<turtlebot_msgs::srv::Sound>
  : std::true_type
{
};

template<>
struct is_service_request<turtlebot_msgs::srv::Sound_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtlebot_msgs::srv::Sound_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLEBOT_MSGS__SRV__DETAIL__SOUND__TRAITS_HPP_
