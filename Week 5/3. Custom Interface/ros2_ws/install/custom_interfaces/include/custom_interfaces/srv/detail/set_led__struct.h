// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:srv/SetLed.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__SET_LED__STRUCT_H_
#define CUSTOM_INTERFACES__SRV__DETAIL__SET_LED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SetLed in the package custom_interfaces.
typedef struct custom_interfaces__srv__SetLed_Request
{
  int64_t battery_state;
} custom_interfaces__srv__SetLed_Request;

// Struct for a sequence of custom_interfaces__srv__SetLed_Request.
typedef struct custom_interfaces__srv__SetLed_Request__Sequence
{
  custom_interfaces__srv__SetLed_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__SetLed_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'led_state'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/SetLed in the package custom_interfaces.
typedef struct custom_interfaces__srv__SetLed_Response
{
  rosidl_runtime_c__int64__Sequence led_state;
  bool success;
} custom_interfaces__srv__SetLed_Response;

// Struct for a sequence of custom_interfaces__srv__SetLed_Response.
typedef struct custom_interfaces__srv__SetLed_Response__Sequence
{
  custom_interfaces__srv__SetLed_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__SetLed_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__SET_LED__STRUCT_H_