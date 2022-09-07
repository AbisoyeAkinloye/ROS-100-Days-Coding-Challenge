// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from catch_turtle:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

#ifndef CATCH_TURTLE__SRV__DETAIL__CATCH_TURTLE__FUNCTIONS_H_
#define CATCH_TURTLE__SRV__DETAIL__CATCH_TURTLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "catch_turtle/msg/rosidl_generator_c__visibility_control.h"

#include "catch_turtle/srv/detail/catch_turtle__struct.h"

/// Initialize srv/CatchTurtle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * catch_turtle__srv__CatchTurtle_Request
 * )) before or use
 * catch_turtle__srv__CatchTurtle_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_catch_turtle
bool
catch_turtle__srv__CatchTurtle_Request__init(catch_turtle__srv__CatchTurtle_Request * msg);

/// Finalize srv/CatchTurtle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_catch_turtle
void
catch_turtle__srv__CatchTurtle_Request__fini(catch_turtle__srv__CatchTurtle_Request * msg);

/// Create srv/CatchTurtle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * catch_turtle__srv__CatchTurtle_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_catch_turtle
catch_turtle__srv__CatchTurtle_Request *
catch_turtle__srv__CatchTurtle_Request__create();

/// Destroy srv/CatchTurtle message.
/**
 * It calls
 * catch_turtle__srv__CatchTurtle_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_catch_turtle
void
catch_turtle__srv__CatchTurtle_Request__destroy(catch_turtle__srv__CatchTurtle_Request * msg);


/// Initialize array of srv/CatchTurtle messages.
/**
 * It allocates the memory for the number of elements and calls
 * catch_turtle__srv__CatchTurtle_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_catch_turtle
bool
catch_turtle__srv__CatchTurtle_Request__Sequence__init(catch_turtle__srv__CatchTurtle_Request__Sequence * array, size_t size);

/// Finalize array of srv/CatchTurtle messages.
/**
 * It calls
 * catch_turtle__srv__CatchTurtle_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_catch_turtle
void
catch_turtle__srv__CatchTurtle_Request__Sequence__fini(catch_turtle__srv__CatchTurtle_Request__Sequence * array);

/// Create array of srv/CatchTurtle messages.
/**
 * It allocates the memory for the array and calls
 * catch_turtle__srv__CatchTurtle_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_catch_turtle
catch_turtle__srv__CatchTurtle_Request__Sequence *
catch_turtle__srv__CatchTurtle_Request__Sequence__create(size_t size);

/// Destroy array of srv/CatchTurtle messages.
/**
 * It calls
 * catch_turtle__srv__CatchTurtle_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_catch_turtle
void
catch_turtle__srv__CatchTurtle_Request__Sequence__destroy(catch_turtle__srv__CatchTurtle_Request__Sequence * array);

/// Initialize srv/CatchTurtle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * catch_turtle__srv__CatchTurtle_Response
 * )) before or use
 * catch_turtle__srv__CatchTurtle_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_catch_turtle
bool
catch_turtle__srv__CatchTurtle_Response__init(catch_turtle__srv__CatchTurtle_Response * msg);

/// Finalize srv/CatchTurtle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_catch_turtle
void
catch_turtle__srv__CatchTurtle_Response__fini(catch_turtle__srv__CatchTurtle_Response * msg);

/// Create srv/CatchTurtle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * catch_turtle__srv__CatchTurtle_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_catch_turtle
catch_turtle__srv__CatchTurtle_Response *
catch_turtle__srv__CatchTurtle_Response__create();

/// Destroy srv/CatchTurtle message.
/**
 * It calls
 * catch_turtle__srv__CatchTurtle_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_catch_turtle
void
catch_turtle__srv__CatchTurtle_Response__destroy(catch_turtle__srv__CatchTurtle_Response * msg);


/// Initialize array of srv/CatchTurtle messages.
/**
 * It allocates the memory for the number of elements and calls
 * catch_turtle__srv__CatchTurtle_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_catch_turtle
bool
catch_turtle__srv__CatchTurtle_Response__Sequence__init(catch_turtle__srv__CatchTurtle_Response__Sequence * array, size_t size);

/// Finalize array of srv/CatchTurtle messages.
/**
 * It calls
 * catch_turtle__srv__CatchTurtle_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_catch_turtle
void
catch_turtle__srv__CatchTurtle_Response__Sequence__fini(catch_turtle__srv__CatchTurtle_Response__Sequence * array);

/// Create array of srv/CatchTurtle messages.
/**
 * It allocates the memory for the array and calls
 * catch_turtle__srv__CatchTurtle_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_catch_turtle
catch_turtle__srv__CatchTurtle_Response__Sequence *
catch_turtle__srv__CatchTurtle_Response__Sequence__create(size_t size);

/// Destroy array of srv/CatchTurtle messages.
/**
 * It calls
 * catch_turtle__srv__CatchTurtle_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_catch_turtle
void
catch_turtle__srv__CatchTurtle_Response__Sequence__destroy(catch_turtle__srv__CatchTurtle_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CATCH_TURTLE__SRV__DETAIL__CATCH_TURTLE__FUNCTIONS_H_
