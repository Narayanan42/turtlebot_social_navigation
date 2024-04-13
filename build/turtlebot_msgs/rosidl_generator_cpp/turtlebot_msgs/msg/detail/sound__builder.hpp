// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlebot_msgs:msg/Sound.idl
// generated code does not contain a copyright notice

#ifndef TURTLEBOT_MSGS__MSG__DETAIL__SOUND__BUILDER_HPP_
#define TURTLEBOT_MSGS__MSG__DETAIL__SOUND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlebot_msgs/msg/detail/sound__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlebot_msgs
{

namespace msg
{

namespace builder
{

class Init_Sound_value
{
public:
  Init_Sound_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlebot_msgs::msg::Sound value(::turtlebot_msgs::msg::Sound::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlebot_msgs::msg::Sound msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlebot_msgs::msg::Sound>()
{
  return turtlebot_msgs::msg::builder::Init_Sound_value();
}

}  // namespace turtlebot_msgs

#endif  // TURTLEBOT_MSGS__MSG__DETAIL__SOUND__BUILDER_HPP_
