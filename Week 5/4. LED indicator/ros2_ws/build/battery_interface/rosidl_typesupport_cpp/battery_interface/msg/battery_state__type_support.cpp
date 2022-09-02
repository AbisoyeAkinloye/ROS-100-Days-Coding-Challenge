// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from battery_interface:msg/BatteryState.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "battery_interface/msg/detail/battery_state__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace battery_interface
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _BatteryState_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatteryState_type_support_ids_t;

static const _BatteryState_type_support_ids_t _BatteryState_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BatteryState_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatteryState_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatteryState_type_support_symbol_names_t _BatteryState_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, battery_interface, msg, BatteryState)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, battery_interface, msg, BatteryState)),
  }
};

typedef struct _BatteryState_type_support_data_t
{
  void * data[2];
} _BatteryState_type_support_data_t;

static _BatteryState_type_support_data_t _BatteryState_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatteryState_message_typesupport_map = {
  2,
  "battery_interface",
  &_BatteryState_message_typesupport_ids.typesupport_identifier[0],
  &_BatteryState_message_typesupport_symbol_names.symbol_name[0],
  &_BatteryState_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BatteryState_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatteryState_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace battery_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<battery_interface::msg::BatteryState>()
{
  return &::battery_interface::msg::rosidl_typesupport_cpp::BatteryState_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, battery_interface, msg, BatteryState)() {
  return get_message_type_support_handle<battery_interface::msg::BatteryState>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
