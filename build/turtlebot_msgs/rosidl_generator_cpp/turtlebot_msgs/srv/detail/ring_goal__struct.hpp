// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtlebot_msgs:srv/RingGoal.idl
// generated code does not contain a copyright notice

#ifndef TURTLEBOT_MSGS__SRV__DETAIL__RING_GOAL__STRUCT_HPP_
#define TURTLEBOT_MSGS__SRV__DETAIL__RING_GOAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__turtlebot_msgs__srv__RingGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtlebot_msgs__srv__RingGoal_Request __declspec(deprecated)
#endif

namespace turtlebot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RingGoal_Request_
{
  using Type = RingGoal_Request_<ContainerAllocator>;

  explicit RingGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_pose_x = 0.0f;
      this->robot_pose_y = 0.0f;
      this->radius = 0.0f;
    }
  }

  explicit RingGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_pose_x = 0.0f;
      this->robot_pose_y = 0.0f;
      this->radius = 0.0f;
    }
  }

  // field types and members
  using _robot_pose_x_type =
    float;
  _robot_pose_x_type robot_pose_x;
  using _robot_pose_y_type =
    float;
  _robot_pose_y_type robot_pose_y;
  using _radius_type =
    float;
  _radius_type radius;

  // setters for named parameter idiom
  Type & set__robot_pose_x(
    const float & _arg)
  {
    this->robot_pose_x = _arg;
    return *this;
  }
  Type & set__robot_pose_y(
    const float & _arg)
  {
    this->robot_pose_y = _arg;
    return *this;
  }
  Type & set__radius(
    const float & _arg)
  {
    this->radius = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlebot_msgs::srv::RingGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlebot_msgs::srv::RingGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlebot_msgs::srv::RingGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlebot_msgs::srv::RingGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlebot_msgs::srv::RingGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlebot_msgs::srv::RingGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlebot_msgs::srv::RingGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlebot_msgs::srv::RingGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlebot_msgs::srv::RingGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlebot_msgs::srv::RingGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlebot_msgs__srv__RingGoal_Request
    std::shared_ptr<turtlebot_msgs::srv::RingGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlebot_msgs__srv__RingGoal_Request
    std::shared_ptr<turtlebot_msgs::srv::RingGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RingGoal_Request_ & other) const
  {
    if (this->robot_pose_x != other.robot_pose_x) {
      return false;
    }
    if (this->robot_pose_y != other.robot_pose_y) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    return true;
  }
  bool operator!=(const RingGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RingGoal_Request_

// alias to use template instance with default allocator
using RingGoal_Request =
  turtlebot_msgs::srv::RingGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtlebot_msgs


#ifndef _WIN32
# define DEPRECATED__turtlebot_msgs__srv__RingGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtlebot_msgs__srv__RingGoal_Response __declspec(deprecated)
#endif

namespace turtlebot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RingGoal_Response_
{
  using Type = RingGoal_Response_<ContainerAllocator>;

  explicit RingGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit RingGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    turtlebot_msgs::srv::RingGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlebot_msgs::srv::RingGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlebot_msgs::srv::RingGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlebot_msgs::srv::RingGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlebot_msgs::srv::RingGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlebot_msgs::srv::RingGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlebot_msgs::srv::RingGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlebot_msgs::srv::RingGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlebot_msgs::srv::RingGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlebot_msgs::srv::RingGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlebot_msgs__srv__RingGoal_Response
    std::shared_ptr<turtlebot_msgs::srv::RingGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlebot_msgs__srv__RingGoal_Response
    std::shared_ptr<turtlebot_msgs::srv::RingGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RingGoal_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const RingGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RingGoal_Response_

// alias to use template instance with default allocator
using RingGoal_Response =
  turtlebot_msgs::srv::RingGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtlebot_msgs

namespace turtlebot_msgs
{

namespace srv
{

struct RingGoal
{
  using Request = turtlebot_msgs::srv::RingGoal_Request;
  using Response = turtlebot_msgs::srv::RingGoal_Response;
};

}  // namespace srv

}  // namespace turtlebot_msgs

#endif  // TURTLEBOT_MSGS__SRV__DETAIL__RING_GOAL__STRUCT_HPP_
