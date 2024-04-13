// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlebot_msgs:srv/RingGoal.idl
// generated code does not contain a copyright notice

#ifndef TURTLEBOT_MSGS__SRV__DETAIL__RING_GOAL__TRAITS_HPP_
#define TURTLEBOT_MSGS__SRV__DETAIL__RING_GOAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtlebot_msgs/srv/detail/ring_goal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtlebot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RingGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_pose_x
  {
    out << "robot_pose_x: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_pose_x, out);
    out << ", ";
  }

  // member: robot_pose_y
  {
    out << "robot_pose_y: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_pose_y, out);
    out << ", ";
  }

  // member: radius
  {
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RingGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_pose_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_pose_x: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_pose_x, out);
    out << "\n";
  }

  // member: robot_pose_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_pose_y: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_pose_y, out);
    out << "\n";
  }

  // member: radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RingGoal_Request & msg, bool use_flow_style = false)
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
  const turtlebot_msgs::srv::RingGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlebot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlebot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtlebot_msgs::srv::RingGoal_Request & msg)
{
  return turtlebot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtlebot_msgs::srv::RingGoal_Request>()
{
  return "turtlebot_msgs::srv::RingGoal_Request";
}

template<>
inline const char * name<turtlebot_msgs::srv::RingGoal_Request>()
{
  return "turtlebot_msgs/srv/RingGoal_Request";
}

template<>
struct has_fixed_size<turtlebot_msgs::srv::RingGoal_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlebot_msgs::srv::RingGoal_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlebot_msgs::srv::RingGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace turtlebot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RingGoal_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RingGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RingGoal_Response & msg, bool use_flow_style = false)
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
  const turtlebot_msgs::srv::RingGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlebot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlebot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtlebot_msgs::srv::RingGoal_Response & msg)
{
  return turtlebot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtlebot_msgs::srv::RingGoal_Response>()
{
  return "turtlebot_msgs::srv::RingGoal_Response";
}

template<>
inline const char * name<turtlebot_msgs::srv::RingGoal_Response>()
{
  return "turtlebot_msgs/srv/RingGoal_Response";
}

template<>
struct has_fixed_size<turtlebot_msgs::srv::RingGoal_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlebot_msgs::srv::RingGoal_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlebot_msgs::srv::RingGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlebot_msgs::srv::RingGoal>()
{
  return "turtlebot_msgs::srv::RingGoal";
}

template<>
inline const char * name<turtlebot_msgs::srv::RingGoal>()
{
  return "turtlebot_msgs/srv/RingGoal";
}

template<>
struct has_fixed_size<turtlebot_msgs::srv::RingGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<turtlebot_msgs::srv::RingGoal_Request>::value &&
    has_fixed_size<turtlebot_msgs::srv::RingGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtlebot_msgs::srv::RingGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<turtlebot_msgs::srv::RingGoal_Request>::value &&
    has_bounded_size<turtlebot_msgs::srv::RingGoal_Response>::value
  >
{
};

template<>
struct is_service<turtlebot_msgs::srv::RingGoal>
  : std::true_type
{
};

template<>
struct is_service_request<turtlebot_msgs::srv::RingGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtlebot_msgs::srv::RingGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLEBOT_MSGS__SRV__DETAIL__RING_GOAL__TRAITS_HPP_
