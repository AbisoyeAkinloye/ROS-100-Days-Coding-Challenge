// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from battery_interface:srv/SetLed.idl
// generated code does not contain a copyright notice
#include "battery_interface/srv/detail/set_led__rosidl_typesupport_fastrtps_cpp.hpp"
#include "battery_interface/srv/detail/set_led__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace battery_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_interface
cdr_serialize(
  const battery_interface::srv::SetLed_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: battery_state
  cdr << ros_message.battery_state;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  battery_interface::srv::SetLed_Request & ros_message)
{
  // Member: battery_state
  cdr >> ros_message.battery_state;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_interface
get_serialized_size(
  const battery_interface::srv::SetLed_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: battery_state
  {
    size_t item_size = sizeof(ros_message.battery_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_interface
max_serialized_size_SetLed_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: battery_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SetLed_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const battery_interface::srv::SetLed_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetLed_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<battery_interface::srv::SetLed_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetLed_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const battery_interface::srv::SetLed_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetLed_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SetLed_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _SetLed_Request__callbacks = {
  "battery_interface::srv",
  "SetLed_Request",
  _SetLed_Request__cdr_serialize,
  _SetLed_Request__cdr_deserialize,
  _SetLed_Request__get_serialized_size,
  _SetLed_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetLed_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetLed_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace battery_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_battery_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<battery_interface::srv::SetLed_Request>()
{
  return &battery_interface::srv::typesupport_fastrtps_cpp::_SetLed_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, battery_interface, srv, SetLed_Request)() {
  return &battery_interface::srv::typesupport_fastrtps_cpp::_SetLed_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace battery_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_interface
cdr_serialize(
  const battery_interface::srv::SetLed_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: led_state
  {
    cdr << ros_message.led_state;
  }
  // Member: success
  cdr << (ros_message.success ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  battery_interface::srv::SetLed_Response & ros_message)
{
  // Member: led_state
  {
    cdr >> ros_message.led_state;
  }

  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_interface
get_serialized_size(
  const battery_interface::srv::SetLed_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: led_state
  {
    size_t array_size = ros_message.led_state.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.led_state[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_interface
max_serialized_size_SetLed_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: led_state
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _SetLed_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const battery_interface::srv::SetLed_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetLed_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<battery_interface::srv::SetLed_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetLed_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const battery_interface::srv::SetLed_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetLed_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SetLed_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _SetLed_Response__callbacks = {
  "battery_interface::srv",
  "SetLed_Response",
  _SetLed_Response__cdr_serialize,
  _SetLed_Response__cdr_deserialize,
  _SetLed_Response__get_serialized_size,
  _SetLed_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetLed_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetLed_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace battery_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_battery_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<battery_interface::srv::SetLed_Response>()
{
  return &battery_interface::srv::typesupport_fastrtps_cpp::_SetLed_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, battery_interface, srv, SetLed_Response)() {
  return &battery_interface::srv::typesupport_fastrtps_cpp::_SetLed_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace battery_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SetLed__callbacks = {
  "battery_interface::srv",
  "SetLed",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, battery_interface, srv, SetLed_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, battery_interface, srv, SetLed_Response)(),
};

static rosidl_service_type_support_t _SetLed__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetLed__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace battery_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_battery_interface
const rosidl_service_type_support_t *
get_service_type_support_handle<battery_interface::srv::SetLed>()
{
  return &battery_interface::srv::typesupport_fastrtps_cpp::_SetLed__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, battery_interface, srv, SetLed)() {
  return &battery_interface::srv::typesupport_fastrtps_cpp::_SetLed__handle;
}

#ifdef __cplusplus
}
#endif
