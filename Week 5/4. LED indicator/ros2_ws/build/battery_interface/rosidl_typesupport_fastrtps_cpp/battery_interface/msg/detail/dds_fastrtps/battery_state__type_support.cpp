// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from battery_interface:msg/BatteryState.idl
// generated code does not contain a copyright notice
#include "battery_interface/msg/detail/battery_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "battery_interface/msg/detail/battery_state__struct.hpp"

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

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_interface
cdr_serialize(
  const battery_interface::msg::BatteryState & ros_message,
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
  battery_interface::msg::BatteryState & ros_message)
{
  // Member: battery_state
  cdr >> ros_message.battery_state;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_interface
get_serialized_size(
  const battery_interface::msg::BatteryState & ros_message,
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
max_serialized_size_BatteryState(
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

static bool _BatteryState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const battery_interface::msg::BatteryState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BatteryState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<battery_interface::msg::BatteryState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BatteryState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const battery_interface::msg::BatteryState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BatteryState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_BatteryState(full_bounded, 0);
}

static message_type_support_callbacks_t _BatteryState__callbacks = {
  "battery_interface::msg",
  "BatteryState",
  _BatteryState__cdr_serialize,
  _BatteryState__cdr_deserialize,
  _BatteryState__get_serialized_size,
  _BatteryState__max_serialized_size
};

static rosidl_message_type_support_t _BatteryState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BatteryState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace battery_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_battery_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<battery_interface::msg::BatteryState>()
{
  return &battery_interface::msg::typesupport_fastrtps_cpp::_BatteryState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, battery_interface, msg, BatteryState)() {
  return &battery_interface::msg::typesupport_fastrtps_cpp::_BatteryState__handle;
}

#ifdef __cplusplus
}
#endif
