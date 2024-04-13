// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlebot_msgs:srv/DrlStep.idl
// generated code does not contain a copyright notice

#ifndef TURTLEBOT_MSGS__SRV__DETAIL__DRL_STEP__BUILDER_HPP_
#define TURTLEBOT_MSGS__SRV__DETAIL__DRL_STEP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlebot_msgs/srv/detail/drl_step__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlebot_msgs
{

namespace srv
{

namespace builder
{

class Init_DrlStep_Request_previous_action
{
public:
  explicit Init_DrlStep_Request_previous_action(::turtlebot_msgs::srv::DrlStep_Request & msg)
  : msg_(msg)
  {}
  ::turtlebot_msgs::srv::DrlStep_Request previous_action(::turtlebot_msgs::srv::DrlStep_Request::_previous_action_type arg)
  {
    msg_.previous_action = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlebot_msgs::srv::DrlStep_Request msg_;
};

class Init_DrlStep_Request_action
{
public:
  Init_DrlStep_Request_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrlStep_Request_previous_action action(::turtlebot_msgs::srv::DrlStep_Request::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_DrlStep_Request_previous_action(msg_);
  }

private:
  ::turtlebot_msgs::srv::DrlStep_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlebot_msgs::srv::DrlStep_Request>()
{
  return turtlebot_msgs::srv::builder::Init_DrlStep_Request_action();
}

}  // namespace turtlebot_msgs


namespace turtlebot_msgs
{

namespace srv
{

namespace builder
{

class Init_DrlStep_Response_distance_traveled
{
public:
  explicit Init_DrlStep_Response_distance_traveled(::turtlebot_msgs::srv::DrlStep_Response & msg)
  : msg_(msg)
  {}
  ::turtlebot_msgs::srv::DrlStep_Response distance_traveled(::turtlebot_msgs::srv::DrlStep_Response::_distance_traveled_type arg)
  {
    msg_.distance_traveled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlebot_msgs::srv::DrlStep_Response msg_;
};

class Init_DrlStep_Response_success
{
public:
  explicit Init_DrlStep_Response_success(::turtlebot_msgs::srv::DrlStep_Response & msg)
  : msg_(msg)
  {}
  Init_DrlStep_Response_distance_traveled success(::turtlebot_msgs::srv::DrlStep_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DrlStep_Response_distance_traveled(msg_);
  }

private:
  ::turtlebot_msgs::srv::DrlStep_Response msg_;
};

class Init_DrlStep_Response_done
{
public:
  explicit Init_DrlStep_Response_done(::turtlebot_msgs::srv::DrlStep_Response & msg)
  : msg_(msg)
  {}
  Init_DrlStep_Response_success done(::turtlebot_msgs::srv::DrlStep_Response::_done_type arg)
  {
    msg_.done = std::move(arg);
    return Init_DrlStep_Response_success(msg_);
  }

private:
  ::turtlebot_msgs::srv::DrlStep_Response msg_;
};

class Init_DrlStep_Response_reward
{
public:
  explicit Init_DrlStep_Response_reward(::turtlebot_msgs::srv::DrlStep_Response & msg)
  : msg_(msg)
  {}
  Init_DrlStep_Response_done reward(::turtlebot_msgs::srv::DrlStep_Response::_reward_type arg)
  {
    msg_.reward = std::move(arg);
    return Init_DrlStep_Response_done(msg_);
  }

private:
  ::turtlebot_msgs::srv::DrlStep_Response msg_;
};

class Init_DrlStep_Response_state
{
public:
  Init_DrlStep_Response_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrlStep_Response_reward state(::turtlebot_msgs::srv::DrlStep_Response::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_DrlStep_Response_reward(msg_);
  }

private:
  ::turtlebot_msgs::srv::DrlStep_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlebot_msgs::srv::DrlStep_Response>()
{
  return turtlebot_msgs::srv::builder::Init_DrlStep_Response_state();
}

}  // namespace turtlebot_msgs

#endif  // TURTLEBOT_MSGS__SRV__DETAIL__DRL_STEP__BUILDER_HPP_
