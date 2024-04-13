// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from turtlebot_msgs:srv/DrlStep.idl
// generated code does not contain a copyright notice
#include "turtlebot_msgs/srv/detail/drl_step__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "turtlebot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtlebot_msgs/srv/detail/drl_step__struct.h"
#include "turtlebot_msgs/srv/detail/drl_step__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // action, previous_action
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // action, previous_action

// forward declare type support functions


using _DrlStep_Request__ros_msg_type = turtlebot_msgs__srv__DrlStep_Request;

static bool _DrlStep_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DrlStep_Request__ros_msg_type * ros_message = static_cast<const _DrlStep_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: action
  {
    size_t size = ros_message->action.size;
    auto array_ptr = ros_message->action.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: previous_action
  {
    size_t size = ros_message->previous_action.size;
    auto array_ptr = ros_message->previous_action.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _DrlStep_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DrlStep_Request__ros_msg_type * ros_message = static_cast<_DrlStep_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: action
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->action.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->action);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->action, size)) {
      fprintf(stderr, "failed to create array for field 'action'");
      return false;
    }
    auto array_ptr = ros_message->action.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: previous_action
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->previous_action.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->previous_action);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->previous_action, size)) {
      fprintf(stderr, "failed to create array for field 'previous_action'");
      return false;
    }
    auto array_ptr = ros_message->previous_action.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlebot_msgs
size_t get_serialized_size_turtlebot_msgs__srv__DrlStep_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DrlStep_Request__ros_msg_type * ros_message = static_cast<const _DrlStep_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name action
  {
    size_t array_size = ros_message->action.size;
    auto array_ptr = ros_message->action.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name previous_action
  {
    size_t array_size = ros_message->previous_action.size;
    auto array_ptr = ros_message->previous_action.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DrlStep_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtlebot_msgs__srv__DrlStep_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlebot_msgs
size_t max_serialized_size_turtlebot_msgs__srv__DrlStep_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: action
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: previous_action
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = turtlebot_msgs__srv__DrlStep_Request;
    is_plain =
      (
      offsetof(DataType, previous_action) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DrlStep_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_turtlebot_msgs__srv__DrlStep_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DrlStep_Request = {
  "turtlebot_msgs::srv",
  "DrlStep_Request",
  _DrlStep_Request__cdr_serialize,
  _DrlStep_Request__cdr_deserialize,
  _DrlStep_Request__get_serialized_size,
  _DrlStep_Request__max_serialized_size
};

static rosidl_message_type_support_t _DrlStep_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DrlStep_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlebot_msgs, srv, DrlStep_Request)() {
  return &_DrlStep_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "turtlebot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "turtlebot_msgs/srv/detail/drl_step__struct.h"
// already included above
// #include "turtlebot_msgs/srv/detail/drl_step__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"  // state
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"  // state

// forward declare type support functions


using _DrlStep_Response__ros_msg_type = turtlebot_msgs__srv__DrlStep_Response;

static bool _DrlStep_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DrlStep_Response__ros_msg_type * ros_message = static_cast<const _DrlStep_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: state
  {
    size_t size = ros_message->state.size;
    auto array_ptr = ros_message->state.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: reward
  {
    cdr << ros_message->reward;
  }

  // Field name: done
  {
    cdr << (ros_message->done ? true : false);
  }

  // Field name: success
  {
    cdr << ros_message->success;
  }

  // Field name: distance_traveled
  {
    cdr << ros_message->distance_traveled;
  }

  return true;
}

static bool _DrlStep_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DrlStep_Response__ros_msg_type * ros_message = static_cast<_DrlStep_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: state
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->state.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->state);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->state, size)) {
      fprintf(stderr, "failed to create array for field 'state'");
      return false;
    }
    auto array_ptr = ros_message->state.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: reward
  {
    cdr >> ros_message->reward;
  }

  // Field name: done
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->done = tmp ? true : false;
  }

  // Field name: success
  {
    cdr >> ros_message->success;
  }

  // Field name: distance_traveled
  {
    cdr >> ros_message->distance_traveled;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlebot_msgs
size_t get_serialized_size_turtlebot_msgs__srv__DrlStep_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DrlStep_Response__ros_msg_type * ros_message = static_cast<const _DrlStep_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name state
  {
    size_t array_size = ros_message->state.size;
    auto array_ptr = ros_message->state.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reward
  {
    size_t item_size = sizeof(ros_message->reward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name done
  {
    size_t item_size = sizeof(ros_message->done);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance_traveled
  {
    size_t item_size = sizeof(ros_message->distance_traveled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DrlStep_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtlebot_msgs__srv__DrlStep_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlebot_msgs
size_t max_serialized_size_turtlebot_msgs__srv__DrlStep_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: state
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: reward
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: done
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: distance_traveled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = turtlebot_msgs__srv__DrlStep_Response;
    is_plain =
      (
      offsetof(DataType, distance_traveled) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DrlStep_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_turtlebot_msgs__srv__DrlStep_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DrlStep_Response = {
  "turtlebot_msgs::srv",
  "DrlStep_Response",
  _DrlStep_Response__cdr_serialize,
  _DrlStep_Response__cdr_deserialize,
  _DrlStep_Response__get_serialized_size,
  _DrlStep_Response__max_serialized_size
};

static rosidl_message_type_support_t _DrlStep_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DrlStep_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlebot_msgs, srv, DrlStep_Response)() {
  return &_DrlStep_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "turtlebot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtlebot_msgs/srv/drl_step.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t DrlStep__callbacks = {
  "turtlebot_msgs::srv",
  "DrlStep",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlebot_msgs, srv, DrlStep_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlebot_msgs, srv, DrlStep_Response)(),
};

static rosidl_service_type_support_t DrlStep__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &DrlStep__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlebot_msgs, srv, DrlStep)() {
  return &DrlStep__handle;
}

#if defined(__cplusplus)
}
#endif
