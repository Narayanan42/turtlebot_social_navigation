// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from turtlebot_msgs:srv/Goal.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "turtlebot_msgs/srv/detail/goal__struct.h"
#include "turtlebot_msgs/srv/detail/goal__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace turtlebot_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Goal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Goal_Request_type_support_ids_t;

static const _Goal_Request_type_support_ids_t _Goal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Goal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Goal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Goal_Request_type_support_symbol_names_t _Goal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlebot_msgs, srv, Goal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot_msgs, srv, Goal_Request)),
  }
};

typedef struct _Goal_Request_type_support_data_t
{
  void * data[2];
} _Goal_Request_type_support_data_t;

static _Goal_Request_type_support_data_t _Goal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Goal_Request_message_typesupport_map = {
  2,
  "turtlebot_msgs",
  &_Goal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Goal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Goal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Goal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Goal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace turtlebot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, turtlebot_msgs, srv, Goal_Request)() {
  return &::turtlebot_msgs::srv::rosidl_typesupport_c::Goal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtlebot_msgs/srv/detail/goal__struct.h"
// already included above
// #include "turtlebot_msgs/srv/detail/goal__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlebot_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Goal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Goal_Response_type_support_ids_t;

static const _Goal_Response_type_support_ids_t _Goal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Goal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Goal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Goal_Response_type_support_symbol_names_t _Goal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlebot_msgs, srv, Goal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot_msgs, srv, Goal_Response)),
  }
};

typedef struct _Goal_Response_type_support_data_t
{
  void * data[2];
} _Goal_Response_type_support_data_t;

static _Goal_Response_type_support_data_t _Goal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Goal_Response_message_typesupport_map = {
  2,
  "turtlebot_msgs",
  &_Goal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Goal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Goal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Goal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Goal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace turtlebot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, turtlebot_msgs, srv, Goal_Response)() {
  return &::turtlebot_msgs::srv::rosidl_typesupport_c::Goal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "turtlebot_msgs/srv/detail/goal__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlebot_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Goal_type_support_ids_t;

static const _Goal_type_support_ids_t _Goal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Goal_type_support_symbol_names_t _Goal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlebot_msgs, srv, Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot_msgs, srv, Goal)),
  }
};

typedef struct _Goal_type_support_data_t
{
  void * data[2];
} _Goal_type_support_data_t;

static _Goal_type_support_data_t _Goal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Goal_service_typesupport_map = {
  2,
  "turtlebot_msgs",
  &_Goal_service_typesupport_ids.typesupport_identifier[0],
  &_Goal_service_typesupport_symbol_names.symbol_name[0],
  &_Goal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Goal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Goal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace turtlebot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, turtlebot_msgs, srv, Goal)() {
  return &::turtlebot_msgs::srv::rosidl_typesupport_c::Goal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
