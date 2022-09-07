// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from catch_turtle:msg/Turtle.idl
// generated code does not contain a copyright notice

#ifndef CATCH_TURTLE__MSG__DETAIL__TURTLE__STRUCT_H_
#define CATCH_TURTLE__MSG__DETAIL__TURTLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Turtle in the package catch_turtle.
typedef struct catch_turtle__msg__Turtle
{
  rosidl_runtime_c__String name;
  double x;
  double y;
  double theta;
} catch_turtle__msg__Turtle;

// Struct for a sequence of catch_turtle__msg__Turtle.
typedef struct catch_turtle__msg__Turtle__Sequence
{
  catch_turtle__msg__Turtle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} catch_turtle__msg__Turtle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CATCH_TURTLE__MSG__DETAIL__TURTLE__STRUCT_H_
