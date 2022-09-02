// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from battery_interface:srv/SetLed.idl
// generated code does not contain a copyright notice
#include "battery_interface/srv/detail/set_led__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "battery_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "battery_interface/srv/detail/set_led__struct.h"
#include "battery_interface/srv/detail/set_led__functions.h"
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


// forward declare type support functions


using _SetLed_Request__ros_msg_type = battery_interface__srv__SetLed_Request;

static bool _SetLed_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetLed_Request__ros_msg_type * ros_message = static_cast<const _SetLed_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: battery_state
  {
    cdr << ros_message->battery_state;
  }

  return true;
}

static bool _SetLed_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetLed_Request__ros_msg_type * ros_message = static_cast<_SetLed_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: battery_state
  {
    cdr >> ros_message->battery_state;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_battery_interface
size_t get_serialized_size_battery_interface__srv__SetLed_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetLed_Request__ros_msg_type * ros_message = static_cast<const _SetLed_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name battery_state
  {
    size_t item_size = sizeof(ros_message->battery_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetLed_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_battery_interface__srv__SetLed_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_battery_interface
size_t max_serialized_size_battery_interface__srv__SetLed_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: battery_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SetLed_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_battery_interface__srv__SetLed_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetLed_Request = {
  "battery_interface::srv",
  "SetLed_Request",
  _SetLed_Request__cdr_serialize,
  _SetLed_Request__cdr_deserialize,
  _SetLed_Request__get_serialized_size,
  _SetLed_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetLed_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetLed_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, battery_interface, srv, SetLed_Request)() {
  return &_SetLed_Request__type_support;
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
// #include "battery_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "battery_interface/srv/detail/set_led__struct.h"
// already included above
// #include "battery_interface/srv/detail/set_led__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // led_state
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // led_state

// forward declare type support functions


using _SetLed_Response__ros_msg_type = battery_interface__srv__SetLed_Response;

static bool _SetLed_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetLed_Response__ros_msg_type * ros_message = static_cast<const _SetLed_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: led_state
  {
    size_t size = ros_message->led_state.size;
    auto array_ptr = ros_message->led_state.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _SetLed_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetLed_Response__ros_msg_type * ros_message = static_cast<_SetLed_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: led_state
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->led_state.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->led_state);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->led_state, size)) {
      return "failed to create array for field 'led_state'";
    }
    auto array_ptr = ros_message->led_state.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_battery_interface
size_t get_serialized_size_battery_interface__srv__SetLed_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetLed_Response__ros_msg_type * ros_message = static_cast<const _SetLed_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name led_state
  {
    size_t array_size = ros_message->led_state.size;
    auto array_ptr = ros_message->led_state.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetLed_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_battery_interface__srv__SetLed_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_battery_interface
size_t max_serialized_size_battery_interface__srv__SetLed_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: led_state
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetLed_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_battery_interface__srv__SetLed_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetLed_Response = {
  "battery_interface::srv",
  "SetLed_Response",
  _SetLed_Response__cdr_serialize,
  _SetLed_Response__cdr_deserialize,
  _SetLed_Response__get_serialized_size,
  _SetLed_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetLed_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetLed_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, battery_interface, srv, SetLed_Response)() {
  return &_SetLed_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "battery_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "battery_interface/srv/set_led.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetLed__callbacks = {
  "battery_interface::srv",
  "SetLed",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, battery_interface, srv, SetLed_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, battery_interface, srv, SetLed_Response)(),
};

static rosidl_service_type_support_t SetLed__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetLed__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, battery_interface, srv, SetLed)() {
  return &SetLed__handle;
}

#if defined(__cplusplus)
}
#endif
