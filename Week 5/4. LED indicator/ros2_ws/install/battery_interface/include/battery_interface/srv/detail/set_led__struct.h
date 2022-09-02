// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from battery_interface:srv/SetLed.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_INTERFACE__SRV__DETAIL__SET_LED__STRUCT_H_
#define BATTERY_INTERFACE__SRV__DETAIL__SET_LED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SetLed in the package battery_interface.
typedef struct battery_interface__srv__SetLed_Request
{
  int64_t battery_state;
} battery_interface__srv__SetLed_Request;

// Struct for a sequence of battery_interface__srv__SetLed_Request.
typedef struct battery_interface__srv__SetLed_Request__Sequence
{
  battery_interface__srv__SetLed_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} battery_interface__srv__SetLed_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'led_state'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/SetLed in the package battery_interface.
typedef struct battery_interface__srv__SetLed_Response
{
  rosidl_runtime_c__int64__Sequence led_state;
  bool success;
} battery_interface__srv__SetLed_Response;

// Struct for a sequence of battery_interface__srv__SetLed_Response.
typedef struct battery_interface__srv__SetLed_Response__Sequence
{
  battery_interface__srv__SetLed_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} battery_interface__srv__SetLed_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BATTERY_INTERFACE__SRV__DETAIL__SET_LED__STRUCT_H_
