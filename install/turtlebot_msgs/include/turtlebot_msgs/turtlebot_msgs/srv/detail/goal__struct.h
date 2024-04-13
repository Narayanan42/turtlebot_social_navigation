// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlebot_msgs:srv/Goal.idl
// generated code does not contain a copyright notice

#ifndef TURTLEBOT_MSGS__SRV__DETAIL__GOAL__STRUCT_H_
#define TURTLEBOT_MSGS__SRV__DETAIL__GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Goal in the package turtlebot_msgs.
typedef struct turtlebot_msgs__srv__Goal_Request
{
  bool empty;
} turtlebot_msgs__srv__Goal_Request;

// Struct for a sequence of turtlebot_msgs__srv__Goal_Request.
typedef struct turtlebot_msgs__srv__Goal_Request__Sequence
{
  turtlebot_msgs__srv__Goal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlebot_msgs__srv__Goal_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Goal in the package turtlebot_msgs.
typedef struct turtlebot_msgs__srv__Goal_Response
{
  bool new_goal;
} turtlebot_msgs__srv__Goal_Response;

// Struct for a sequence of turtlebot_msgs__srv__Goal_Response.
typedef struct turtlebot_msgs__srv__Goal_Response__Sequence
{
  turtlebot_msgs__srv__Goal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlebot_msgs__srv__Goal_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLEBOT_MSGS__SRV__DETAIL__GOAL__STRUCT_H_
