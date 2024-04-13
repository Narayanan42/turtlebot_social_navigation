// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlebot_msgs:msg/VersionInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLEBOT_MSGS__MSG__DETAIL__VERSION_INFO__BUILDER_HPP_
#define TURTLEBOT_MSGS__MSG__DETAIL__VERSION_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlebot_msgs/msg/detail/version_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlebot_msgs
{

namespace msg
{

namespace builder
{

class Init_VersionInfo_software
{
public:
  explicit Init_VersionInfo_software(::turtlebot_msgs::msg::VersionInfo & msg)
  : msg_(msg)
  {}
  ::turtlebot_msgs::msg::VersionInfo software(::turtlebot_msgs::msg::VersionInfo::_software_type arg)
  {
    msg_.software = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlebot_msgs::msg::VersionInfo msg_;
};

class Init_VersionInfo_firmware
{
public:
  explicit Init_VersionInfo_firmware(::turtlebot_msgs::msg::VersionInfo & msg)
  : msg_(msg)
  {}
  Init_VersionInfo_software firmware(::turtlebot_msgs::msg::VersionInfo::_firmware_type arg)
  {
    msg_.firmware = std::move(arg);
    return Init_VersionInfo_software(msg_);
  }

private:
  ::turtlebot_msgs::msg::VersionInfo msg_;
};

class Init_VersionInfo_hardware
{
public:
  Init_VersionInfo_hardware()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VersionInfo_firmware hardware(::turtlebot_msgs::msg::VersionInfo::_hardware_type arg)
  {
    msg_.hardware = std::move(arg);
    return Init_VersionInfo_firmware(msg_);
  }

private:
  ::turtlebot_msgs::msg::VersionInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlebot_msgs::msg::VersionInfo>()
{
  return turtlebot_msgs::msg::builder::Init_VersionInfo_hardware();
}

}  // namespace turtlebot_msgs

#endif  // TURTLEBOT_MSGS__MSG__DETAIL__VERSION_INFO__BUILDER_HPP_
