// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtlebot_msgs:srv/DrlStep.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtlebot_msgs/srv/detail/drl_step__rosidl_typesupport_introspection_c.h"
#include "turtlebot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtlebot_msgs/srv/detail/drl_step__functions.h"
#include "turtlebot_msgs/srv/detail/drl_step__struct.h"


// Include directives for member types
// Member `action`
// Member `previous_action`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__DrlStep_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtlebot_msgs__srv__DrlStep_Request__init(message_memory);
}

void turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__DrlStep_Request_fini_function(void * message_memory)
{
  turtlebot_msgs__srv__DrlStep_Request__fini(message_memory);
}

size_t turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__size_function__DrlStep_Request__action(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__get_const_function__DrlStep_Request__action(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__get_function__DrlStep_Request__action(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__fetch_function__DrlStep_Request__action(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__get_const_function__DrlStep_Request__action(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__assign_function__DrlStep_Request__action(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__get_function__DrlStep_Request__action(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__resize_function__DrlStep_Request__action(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__size_function__DrlStep_Request__previous_action(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__get_const_function__DrlStep_Request__previous_action(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__get_function__DrlStep_Request__previous_action(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__fetch_function__DrlStep_Request__previous_action(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__get_const_function__DrlStep_Request__previous_action(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__assign_function__DrlStep_Request__previous_action(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__get_function__DrlStep_Request__previous_action(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__resize_function__DrlStep_Request__previous_action(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__DrlStep_Request_message_member_array[2] = {
  {
    "action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot_msgs__srv__DrlStep_Request, action),  // bytes offset in struct
    NULL,  // default value
    turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__size_function__DrlStep_Request__action,  // size() function pointer
    turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__get_const_function__DrlStep_Request__action,  // get_const(index) function pointer
    turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__get_function__DrlStep_Request__action,  // get(index) function pointer
    turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__fetch_function__DrlStep_Request__action,  // fetch(index, &value) function pointer
    turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__assign_function__DrlStep_Request__action,  // assign(index, value) function pointer
    turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__resize_function__DrlStep_Request__action  // resize(index) function pointer
  },
  {
    "previous_action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot_msgs__srv__DrlStep_Request, previous_action),  // bytes offset in struct
    NULL,  // default value
    turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__size_function__DrlStep_Request__previous_action,  // size() function pointer
    turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__get_const_function__DrlStep_Request__previous_action,  // get_const(index) function pointer
    turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__get_function__DrlStep_Request__previous_action,  // get(index) function pointer
    turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__fetch_function__DrlStep_Request__previous_action,  // fetch(index, &value) function pointer
    turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__assign_function__DrlStep_Request__previous_action,  // assign(index, value) function pointer
    turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__resize_function__DrlStep_Request__previous_action  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__DrlStep_Request_message_members = {
  "turtlebot_msgs__srv",  // message namespace
  "DrlStep_Request",  // message name
  2,  // number of fields
  sizeof(turtlebot_msgs__srv__DrlStep_Request),
  turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__DrlStep_Request_message_member_array,  // message members
  turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__DrlStep_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__DrlStep_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__DrlStep_Request_message_type_support_handle = {
  0,
  &turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__DrlStep_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlebot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot_msgs, srv, DrlStep_Request)() {
  if (!turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__DrlStep_Request_message_type_support_handle.typesupport_identifier) {
    turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__DrlStep_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &turtlebot_msgs__srv__DrlStep_Request__rosidl_typesupport_introspection_c__DrlStep_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "turtlebot_msgs/srv/detail/drl_step__rosidl_typesupport_introspection_c.h"
// already included above
// #include "turtlebot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "turtlebot_msgs/srv/detail/drl_step__functions.h"
// already included above
// #include "turtlebot_msgs/srv/detail/drl_step__struct.h"


// Include directives for member types
// Member `state`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__DrlStep_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtlebot_msgs__srv__DrlStep_Response__init(message_memory);
}

void turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__DrlStep_Response_fini_function(void * message_memory)
{
  turtlebot_msgs__srv__DrlStep_Response__fini(message_memory);
}

size_t turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__size_function__DrlStep_Response__state(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__get_const_function__DrlStep_Response__state(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__get_function__DrlStep_Response__state(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__fetch_function__DrlStep_Response__state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__get_const_function__DrlStep_Response__state(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__assign_function__DrlStep_Response__state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__get_function__DrlStep_Response__state(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__resize_function__DrlStep_Response__state(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__DrlStep_Response_message_member_array[5] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot_msgs__srv__DrlStep_Response, state),  // bytes offset in struct
    NULL,  // default value
    turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__size_function__DrlStep_Response__state,  // size() function pointer
    turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__get_const_function__DrlStep_Response__state,  // get_const(index) function pointer
    turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__get_function__DrlStep_Response__state,  // get(index) function pointer
    turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__fetch_function__DrlStep_Response__state,  // fetch(index, &value) function pointer
    turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__assign_function__DrlStep_Response__state,  // assign(index, value) function pointer
    turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__resize_function__DrlStep_Response__state  // resize(index) function pointer
  },
  {
    "reward",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot_msgs__srv__DrlStep_Response, reward),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "done",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot_msgs__srv__DrlStep_Response, done),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot_msgs__srv__DrlStep_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance_traveled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlebot_msgs__srv__DrlStep_Response, distance_traveled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__DrlStep_Response_message_members = {
  "turtlebot_msgs__srv",  // message namespace
  "DrlStep_Response",  // message name
  5,  // number of fields
  sizeof(turtlebot_msgs__srv__DrlStep_Response),
  turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__DrlStep_Response_message_member_array,  // message members
  turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__DrlStep_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__DrlStep_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__DrlStep_Response_message_type_support_handle = {
  0,
  &turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__DrlStep_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlebot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot_msgs, srv, DrlStep_Response)() {
  if (!turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__DrlStep_Response_message_type_support_handle.typesupport_identifier) {
    turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__DrlStep_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &turtlebot_msgs__srv__DrlStep_Response__rosidl_typesupport_introspection_c__DrlStep_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "turtlebot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "turtlebot_msgs/srv/detail/drl_step__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers turtlebot_msgs__srv__detail__drl_step__rosidl_typesupport_introspection_c__DrlStep_service_members = {
  "turtlebot_msgs__srv",  // service namespace
  "DrlStep",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // turtlebot_msgs__srv__detail__drl_step__rosidl_typesupport_introspection_c__DrlStep_Request_message_type_support_handle,
  NULL  // response message
  // turtlebot_msgs__srv__detail__drl_step__rosidl_typesupport_introspection_c__DrlStep_Response_message_type_support_handle
};

static rosidl_service_type_support_t turtlebot_msgs__srv__detail__drl_step__rosidl_typesupport_introspection_c__DrlStep_service_type_support_handle = {
  0,
  &turtlebot_msgs__srv__detail__drl_step__rosidl_typesupport_introspection_c__DrlStep_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot_msgs, srv, DrlStep_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot_msgs, srv, DrlStep_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlebot_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot_msgs, srv, DrlStep)() {
  if (!turtlebot_msgs__srv__detail__drl_step__rosidl_typesupport_introspection_c__DrlStep_service_type_support_handle.typesupport_identifier) {
    turtlebot_msgs__srv__detail__drl_step__rosidl_typesupport_introspection_c__DrlStep_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)turtlebot_msgs__srv__detail__drl_step__rosidl_typesupport_introspection_c__DrlStep_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot_msgs, srv, DrlStep_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot_msgs, srv, DrlStep_Response)()->data;
  }

  return &turtlebot_msgs__srv__detail__drl_step__rosidl_typesupport_introspection_c__DrlStep_service_type_support_handle;
}
