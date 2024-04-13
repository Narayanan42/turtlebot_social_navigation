// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlebot_msgs:srv/Sound.idl
// generated code does not contain a copyright notice

#ifndef TURTLEBOT_MSGS__SRV__DETAIL__SOUND__BUILDER_HPP_
#define TURTLEBOT_MSGS__SRV__DETAIL__SOUND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlebot_msgs/srv/detail/sound__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlebot_msgs
{

namespace srv
{

namespace builder
{

class Init_Sound_Request_value
{
public:
  Init_Sound_Request_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlebot_msgs::srv::Sound_Request value(::turtlebot_msgs::srv::Sound_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlebot_msgs::srv::Sound_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlebot_msgs::srv::Sound_Request>()
{
  return turtlebot_msgs::srv::builder::Init_Sound_Request_value();
}

}  // namespace turtlebot_msgs


namespace turtlebot_msgs
{

namespace srv
{

namespace builder
{

class Init_Sound_Response_message
{
public:
  explicit Init_Sound_Response_message(::turtlebot_msgs::srv::Sound_Response & msg)
  : msg_(msg)
  {}
  ::turtlebot_msgs::srv::Sound_Response message(::turtlebot_msgs::srv::Sound_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlebot_msgs::srv::Sound_Response msg_;
};

class Init_Sound_Response_success
{
public:
  Init_Sound_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sound_Response_message success(::turtlebot_msgs::srv::Sound_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Sound_Response_message(msg_);
  }

private:
  ::turtlebot_msgs::srv::Sound_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlebot_msgs::srv::Sound_Response>()
{
  return turtlebot_msgs::srv::builder::Init_Sound_Response_success();
}

}  // namespace turtlebot_msgs

#endif  // TURTLEBOT_MSGS__SRV__DETAIL__SOUND__BUILDER_HPP_
