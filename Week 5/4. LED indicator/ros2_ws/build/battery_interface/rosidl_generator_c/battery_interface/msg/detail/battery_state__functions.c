// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from battery_interface:msg/BatteryState.idl
// generated code does not contain a copyright notice
#include "battery_interface/msg/detail/battery_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
battery_interface__msg__BatteryState__init(battery_interface__msg__BatteryState * msg)
{
  if (!msg) {
    return false;
  }
  // battery_state
  return true;
}

void
battery_interface__msg__BatteryState__fini(battery_interface__msg__BatteryState * msg)
{
  if (!msg) {
    return;
  }
  // battery_state
}

battery_interface__msg__BatteryState *
battery_interface__msg__BatteryState__create()
{
  battery_interface__msg__BatteryState * msg = (battery_interface__msg__BatteryState *)malloc(sizeof(battery_interface__msg__BatteryState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(battery_interface__msg__BatteryState));
  bool success = battery_interface__msg__BatteryState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
battery_interface__msg__BatteryState__destroy(battery_interface__msg__BatteryState * msg)
{
  if (msg) {
    battery_interface__msg__BatteryState__fini(msg);
  }
  free(msg);
}


bool
battery_interface__msg__BatteryState__Sequence__init(battery_interface__msg__BatteryState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  battery_interface__msg__BatteryState * data = NULL;
  if (size) {
    data = (battery_interface__msg__BatteryState *)calloc(size, sizeof(battery_interface__msg__BatteryState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = battery_interface__msg__BatteryState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        battery_interface__msg__BatteryState__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
battery_interface__msg__BatteryState__Sequence__fini(battery_interface__msg__BatteryState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      battery_interface__msg__BatteryState__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

battery_interface__msg__BatteryState__Sequence *
battery_interface__msg__BatteryState__Sequence__create(size_t size)
{
  battery_interface__msg__BatteryState__Sequence * array = (battery_interface__msg__BatteryState__Sequence *)malloc(sizeof(battery_interface__msg__BatteryState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = battery_interface__msg__BatteryState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
battery_interface__msg__BatteryState__Sequence__destroy(battery_interface__msg__BatteryState__Sequence * array)
{
  if (array) {
    battery_interface__msg__BatteryState__Sequence__fini(array);
  }
  free(array);
}
