// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlebot_msgs:msg/VersionInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLEBOT_MSGS__MSG__DETAIL__VERSION_INFO__STRUCT_H_
#define TURTLEBOT_MSGS__MSG__DETAIL__VERSION_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'hardware'
// Member 'firmware'
// Member 'software'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/VersionInfo in the package turtlebot_msgs.
/**
  * Messages
 */
typedef struct turtlebot_msgs__msg__VersionInfo
{
  /// <yyyy>.<mm>.<dd>        : hardware version of Turtlebot3 (ex. 2017.05.23)
  rosidl_runtime_c__String hardware;
  /// <major>.<minor>.<patch> : firmware version of OpenCR
  rosidl_runtime_c__String firmware;
  /// <major>.<minor>.<patch> : software version of Turtlebot3 ROS packages
  rosidl_runtime_c__String software;
} turtlebot_msgs__msg__VersionInfo;

// Struct for a sequence of turtlebot_msgs__msg__VersionInfo.
typedef struct turtlebot_msgs__msg__VersionInfo__Sequence
{
  turtlebot_msgs__msg__VersionInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlebot_msgs__msg__VersionInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLEBOT_MSGS__MSG__DETAIL__VERSION_INFO__STRUCT_H_
