// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtlebot_msgs:srv/Goal.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtlebot_msgs/srv/detail/goal__rosidl_typesupport_introspection_c.h"
#include "turtlebot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtlebot_msgs/srv/detail/goal__functions.h"
#include "turtlebot_msgs/srv/detail/goal__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void turtlebot_msgs__srv__Goal_Request__rosidl_typesupport_introspection_c__Goal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtlebot_msgs__srv__Goal_Request__init(message_memory);
}

void turtlebot_msgs__srv__Goal_Request__rosidl_typesupport_introspection_c__Goal_Request_fini_function(void * message_memory)
{
  turtlebot_msgs__srv__Goal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember turtlebot_msgs__srv__Goal_Request__rosidl_typesupport_introspection_c__Goal_Request_message_member_array[1] = {
  {
    "empty",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot_msgs__srv__Goal_Request, empty),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers turtlebot_msgs__srv__Goal_Request__rosidl_typesupport_introspection_c__Goal_Request_message_members = {
  "turtlebot_msgs__srv",  // message namespace
  "Goal_Request",  // message name
  1,  // number of fields
  sizeof(turtlebot_msgs__srv__Goal_Request),
  turtlebot_msgs__srv__Goal_Request__rosidl_typesupport_introspection_c__Goal_Request_message_member_array,  // message members
  turtlebot_msgs__srv__Goal_Request__rosidl_typesupport_introspection_c__Goal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  turtlebot_msgs__srv__Goal_Request__rosidl_typesupport_introspection_c__Goal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t turtlebot_msgs__srv__Goal_Request__rosidl_typesupport_introspection_c__Goal_Request_message_type_support_handle = {
  0,
  &turtlebot_msgs__srv__Goal_Request__rosidl_typesupport_introspection_c__Goal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlebot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot_msgs, srv, Goal_Request)() {
  if (!turtlebot_msgs__srv__Goal_Request__rosidl_typesupport_introspection_c__Goal_Request_message_type_support_handle.typesupport_identifier) {
    turtlebot_msgs__srv__Goal_Request__rosidl_typesupport_introspection_c__Goal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &turtlebot_msgs__srv__Goal_Request__rosidl_typesupport_introspection_c__Goal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "turtlebot_msgs/srv/detail/goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "turtlebot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "turtlebot_msgs/srv/detail/goal__functions.h"
// already included above
// #include "turtlebot_msgs/srv/detail/goal__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void turtlebot_msgs__srv__Goal_Response__rosidl_typesupport_introspection_c__Goal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtlebot_msgs__srv__Goal_Response__init(message_memory);
}

void turtlebot_msgs__srv__Goal_Response__rosidl_typesupport_introspection_c__Goal_Response_fini_function(void * message_memory)
{
  turtlebot_msgs__srv__Goal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember turtlebot_msgs__srv__Goal_Response__rosidl_typesupport_introspection_c__Goal_Response_message_member_array[1] = {
  {
    "new_goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot_msgs__srv__Goal_Response, new_goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers turtlebot_msgs__srv__Goal_Response__rosidl_typesupport_introspection_c__Goal_Response_message_members = {
  "turtlebot_msgs__srv",  // message namespace
  "Goal_Response",  // message name
  1,  // number of fields
  sizeof(turtlebot_msgs__srv__Goal_Response),
  turtlebot_msgs__srv__Goal_Response__rosidl_typesupport_introspection_c__Goal_Response_message_member_array,  // message members
  turtlebot_msgs__srv__Goal_Response__rosidl_typesupport_introspection_c__Goal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  turtlebot_msgs__srv__Goal_Response__rosidl_typesupport_introspection_c__Goal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t turtlebot_msgs__srv__Goal_Response__rosidl_typesupport_introspection_c__Goal_Response_message_type_support_handle = {
  0,
  &turtlebot_msgs__srv__Goal_Response__rosidl_typesupport_introspection_c__Goal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlebot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot_msgs, srv, Goal_Response)() {
  if (!turtlebot_msgs__srv__Goal_Response__rosidl_typesupport_introspection_c__Goal_Response_message_type_support_handle.typesupport_identifier) {
    turtlebot_msgs__srv__Goal_Response__rosidl_typesupport_introspection_c__Goal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &turtlebot_msgs__srv__Goal_Response__rosidl_typesupport_introspection_c__Goal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "turtlebot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "turtlebot_msgs/srv/detail/goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers turtlebot_msgs__srv__detail__goal__rosidl_typesupport_introspection_c__Goal_service_members = {
  "turtlebot_msgs__srv",  // service namespace
  "Goal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // turtlebot_msgs__srv__detail__goal__rosidl_typesupport_introspection_c__Goal_Request_message_type_support_handle,
  NULL  // response message
  // turtlebot_msgs__srv__detail__goal__rosidl_typesupport_introspection_c__Goal_Response_message_type_support_handle
};

static rosidl_service_type_support_t turtlebot_msgs__srv__detail__goal__rosidl_typesupport_introspection_c__Goal_service_type_support_handle = {
  0,
  &turtlebot_msgs__srv__detail__goal__rosidl_typesupport_introspection_c__Goal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot_msgs, srv, Goal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot_msgs, srv, Goal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlebot_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot_msgs, srv, Goal)() {
  if (!turtlebot_msgs__srv__detail__goal__rosidl_typesupport_introspection_c__Goal_service_type_support_handle.typesupport_identifier) {
    turtlebot_msgs__srv__detail__goal__rosidl_typesupport_introspection_c__Goal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)turtlebot_msgs__srv__detail__goal__rosidl_typesupport_introspection_c__Goal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot_msgs, srv, Goal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot_msgs, srv, Goal_Response)()->data;
  }

  return &turtlebot_msgs__srv__detail__goal__rosidl_typesupport_introspection_c__Goal_service_type_support_handle;
}
