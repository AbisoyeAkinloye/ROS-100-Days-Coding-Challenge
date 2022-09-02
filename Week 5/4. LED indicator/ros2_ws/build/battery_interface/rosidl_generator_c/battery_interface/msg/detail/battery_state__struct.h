// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from battery_interface:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_INTERFACE__MSG__DETAIL__BATTERY_STATE__STRUCT_H_
#define BATTERY_INTERFACE__MSG__DETAIL__BATTERY_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/BatteryState in the package battery_interface.
typedef struct battery_interface__msg__BatteryState
{
  int64_t battery_state;
} battery_interface__msg__BatteryState;

// Struct for a sequence of battery_interface__msg__BatteryState.
typedef struct battery_interface__msg__BatteryState__Sequence
{
  battery_interface__msg__BatteryState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} battery_interface__msg__BatteryState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BATTERY_INTERFACE__MSG__DETAIL__BATTERY_STATE__STRUCT_H_
