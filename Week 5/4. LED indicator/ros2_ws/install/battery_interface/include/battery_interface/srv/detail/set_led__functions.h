// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from battery_interface:srv/SetLed.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_INTERFACE__SRV__DETAIL__SET_LED__FUNCTIONS_H_
#define BATTERY_INTERFACE__SRV__DETAIL__SET_LED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "battery_interface/msg/rosidl_generator_c__visibility_control.h"

#include "battery_interface/srv/detail/set_led__struct.h"

/// Initialize srv/SetLed message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * battery_interface__srv__SetLed_Request
 * )) before or use
 * battery_interface__srv__SetLed_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_interface
bool
battery_interface__srv__SetLed_Request__init(battery_interface__srv__SetLed_Request * msg);

/// Finalize srv/SetLed message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_interface
void
battery_interface__srv__SetLed_Request__fini(battery_interface__srv__SetLed_Request * msg);

/// Create srv/SetLed message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * battery_interface__srv__SetLed_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_interface
battery_interface__srv__SetLed_Request *
battery_interface__srv__SetLed_Request__create();

/// Destroy srv/SetLed message.
/**
 * It calls
 * battery_interface__srv__SetLed_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_interface
void
battery_interface__srv__SetLed_Request__destroy(battery_interface__srv__SetLed_Request * msg);


/// Initialize array of srv/SetLed messages.
/**
 * It allocates the memory for the number of elements and calls
 * battery_interface__srv__SetLed_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_interface
bool
battery_interface__srv__SetLed_Request__Sequence__init(battery_interface__srv__SetLed_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetLed messages.
/**
 * It calls
 * battery_interface__srv__SetLed_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_interface
void
battery_interface__srv__SetLed_Request__Sequence__fini(battery_interface__srv__SetLed_Request__Sequence * array);

/// Create array of srv/SetLed messages.
/**
 * It allocates the memory for the array and calls
 * battery_interface__srv__SetLed_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_interface
battery_interface__srv__SetLed_Request__Sequence *
battery_interface__srv__SetLed_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetLed messages.
/**
 * It calls
 * battery_interface__srv__SetLed_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_interface
void
battery_interface__srv__SetLed_Request__Sequence__destroy(battery_interface__srv__SetLed_Request__Sequence * array);

/// Initialize srv/SetLed message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * battery_interface__srv__SetLed_Response
 * )) before or use
 * battery_interface__srv__SetLed_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_interface
bool
battery_interface__srv__SetLed_Response__init(battery_interface__srv__SetLed_Response * msg);

/// Finalize srv/SetLed message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_interface
void
battery_interface__srv__SetLed_Response__fini(battery_interface__srv__SetLed_Response * msg);

/// Create srv/SetLed message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * battery_interface__srv__SetLed_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_interface
battery_interface__srv__SetLed_Response *
battery_interface__srv__SetLed_Response__create();

/// Destroy srv/SetLed message.
/**
 * It calls
 * battery_interface__srv__SetLed_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_interface
void
battery_interface__srv__SetLed_Response__destroy(battery_interface__srv__SetLed_Response * msg);


/// Initialize array of srv/SetLed messages.
/**
 * It allocates the memory for the number of elements and calls
 * battery_interface__srv__SetLed_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_interface
bool
battery_interface__srv__SetLed_Response__Sequence__init(battery_interface__srv__SetLed_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetLed messages.
/**
 * It calls
 * battery_interface__srv__SetLed_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_interface
void
battery_interface__srv__SetLed_Response__Sequence__fini(battery_interface__srv__SetLed_Response__Sequence * array);

/// Create array of srv/SetLed messages.
/**
 * It allocates the memory for the array and calls
 * battery_interface__srv__SetLed_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_interface
battery_interface__srv__SetLed_Response__Sequence *
battery_interface__srv__SetLed_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetLed messages.
/**
 * It calls
 * battery_interface__srv__SetLed_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_interface
void
battery_interface__srv__SetLed_Response__Sequence__destroy(battery_interface__srv__SetLed_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // BATTERY_INTERFACE__SRV__DETAIL__SET_LED__FUNCTIONS_H_
