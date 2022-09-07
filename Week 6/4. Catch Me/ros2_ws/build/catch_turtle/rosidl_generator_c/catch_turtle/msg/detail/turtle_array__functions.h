// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from catch_turtle:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#ifndef CATCH_TURTLE__MSG__DETAIL__TURTLE_ARRAY__FUNCTIONS_H_
#define CATCH_TURTLE__MSG__DETAIL__TURTLE_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "catch_turtle/msg/rosidl_generator_c__visibility_control.h"

#include "catch_turtle/msg/detail/turtle_array__struct.h"

/// Initialize msg/TurtleArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * catch_turtle__msg__TurtleArray
 * )) before or use
 * catch_turtle__msg__TurtleArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_catch_turtle
bool
catch_turtle__msg__TurtleArray__init(catch_turtle__msg__TurtleArray * msg);

/// Finalize msg/TurtleArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_catch_turtle
void
catch_turtle__msg__TurtleArray__fini(catch_turtle__msg__TurtleArray * msg);

/// Create msg/TurtleArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * catch_turtle__msg__TurtleArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_catch_turtle
catch_turtle__msg__TurtleArray *
catch_turtle__msg__TurtleArray__create();

/// Destroy msg/TurtleArray message.
/**
 * It calls
 * catch_turtle__msg__TurtleArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_catch_turtle
void
catch_turtle__msg__TurtleArray__destroy(catch_turtle__msg__TurtleArray * msg);


/// Initialize array of msg/TurtleArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * catch_turtle__msg__TurtleArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_catch_turtle
bool
catch_turtle__msg__TurtleArray__Sequence__init(catch_turtle__msg__TurtleArray__Sequence * array, size_t size);

/// Finalize array of msg/TurtleArray messages.
/**
 * It calls
 * catch_turtle__msg__TurtleArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_catch_turtle
void
catch_turtle__msg__TurtleArray__Sequence__fini(catch_turtle__msg__TurtleArray__Sequence * array);

/// Create array of msg/TurtleArray messages.
/**
 * It allocates the memory for the array and calls
 * catch_turtle__msg__TurtleArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_catch_turtle
catch_turtle__msg__TurtleArray__Sequence *
catch_turtle__msg__TurtleArray__Sequence__create(size_t size);

/// Destroy array of msg/TurtleArray messages.
/**
 * It calls
 * catch_turtle__msg__TurtleArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_catch_turtle
void
catch_turtle__msg__TurtleArray__Sequence__destroy(catch_turtle__msg__TurtleArray__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CATCH_TURTLE__MSG__DETAIL__TURTLE_ARRAY__FUNCTIONS_H_
