// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from battery_interface:srv/SetLed.idl
// generated code does not contain a copyright notice
#include "battery_interface/srv/detail/set_led__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
battery_interface__srv__SetLed_Request__init(battery_interface__srv__SetLed_Request * msg)
{
  if (!msg) {
    return false;
  }
  // battery_state
  return true;
}

void
battery_interface__srv__SetLed_Request__fini(battery_interface__srv__SetLed_Request * msg)
{
  if (!msg) {
    return;
  }
  // battery_state
}

battery_interface__srv__SetLed_Request *
battery_interface__srv__SetLed_Request__create()
{
  battery_interface__srv__SetLed_Request * msg = (battery_interface__srv__SetLed_Request *)malloc(sizeof(battery_interface__srv__SetLed_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(battery_interface__srv__SetLed_Request));
  bool success = battery_interface__srv__SetLed_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
battery_interface__srv__SetLed_Request__destroy(battery_interface__srv__SetLed_Request * msg)
{
  if (msg) {
    battery_interface__srv__SetLed_Request__fini(msg);
  }
  free(msg);
}


bool
battery_interface__srv__SetLed_Request__Sequence__init(battery_interface__srv__SetLed_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  battery_interface__srv__SetLed_Request * data = NULL;
  if (size) {
    data = (battery_interface__srv__SetLed_Request *)calloc(size, sizeof(battery_interface__srv__SetLed_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = battery_interface__srv__SetLed_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        battery_interface__srv__SetLed_Request__fini(&data[i - 1]);
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
battery_interface__srv__SetLed_Request__Sequence__fini(battery_interface__srv__SetLed_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      battery_interface__srv__SetLed_Request__fini(&array->data[i]);
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

battery_interface__srv__SetLed_Request__Sequence *
battery_interface__srv__SetLed_Request__Sequence__create(size_t size)
{
  battery_interface__srv__SetLed_Request__Sequence * array = (battery_interface__srv__SetLed_Request__Sequence *)malloc(sizeof(battery_interface__srv__SetLed_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = battery_interface__srv__SetLed_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
battery_interface__srv__SetLed_Request__Sequence__destroy(battery_interface__srv__SetLed_Request__Sequence * array)
{
  if (array) {
    battery_interface__srv__SetLed_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `led_state`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
battery_interface__srv__SetLed_Response__init(battery_interface__srv__SetLed_Response * msg)
{
  if (!msg) {
    return false;
  }
  // led_state
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->led_state, 0)) {
    battery_interface__srv__SetLed_Response__fini(msg);
    return false;
  }
  // success
  return true;
}

void
battery_interface__srv__SetLed_Response__fini(battery_interface__srv__SetLed_Response * msg)
{
  if (!msg) {
    return;
  }
  // led_state
  rosidl_runtime_c__int64__Sequence__fini(&msg->led_state);
  // success
}

battery_interface__srv__SetLed_Response *
battery_interface__srv__SetLed_Response__create()
{
  battery_interface__srv__SetLed_Response * msg = (battery_interface__srv__SetLed_Response *)malloc(sizeof(battery_interface__srv__SetLed_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(battery_interface__srv__SetLed_Response));
  bool success = battery_interface__srv__SetLed_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
battery_interface__srv__SetLed_Response__destroy(battery_interface__srv__SetLed_Response * msg)
{
  if (msg) {
    battery_interface__srv__SetLed_Response__fini(msg);
  }
  free(msg);
}


bool
battery_interface__srv__SetLed_Response__Sequence__init(battery_interface__srv__SetLed_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  battery_interface__srv__SetLed_Response * data = NULL;
  if (size) {
    data = (battery_interface__srv__SetLed_Response *)calloc(size, sizeof(battery_interface__srv__SetLed_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = battery_interface__srv__SetLed_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        battery_interface__srv__SetLed_Response__fini(&data[i - 1]);
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
battery_interface__srv__SetLed_Response__Sequence__fini(battery_interface__srv__SetLed_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      battery_interface__srv__SetLed_Response__fini(&array->data[i]);
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

battery_interface__srv__SetLed_Response__Sequence *
battery_interface__srv__SetLed_Response__Sequence__create(size_t size)
{
  battery_interface__srv__SetLed_Response__Sequence * array = (battery_interface__srv__SetLed_Response__Sequence *)malloc(sizeof(battery_interface__srv__SetLed_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = battery_interface__srv__SetLed_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
battery_interface__srv__SetLed_Response__Sequence__destroy(battery_interface__srv__SetLed_Response__Sequence * array)
{
  if (array) {
    battery_interface__srv__SetLed_Response__Sequence__fini(array);
  }
  free(array);
}
