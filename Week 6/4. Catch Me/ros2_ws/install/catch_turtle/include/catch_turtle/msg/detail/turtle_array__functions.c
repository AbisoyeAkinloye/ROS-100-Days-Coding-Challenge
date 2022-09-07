// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from catch_turtle:msg/TurtleArray.idl
// generated code does not contain a copyright notice
#include "catch_turtle/msg/detail/turtle_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `turtles`
#include "catch_turtle/msg/detail/turtle__functions.h"

bool
catch_turtle__msg__TurtleArray__init(catch_turtle__msg__TurtleArray * msg)
{
  if (!msg) {
    return false;
  }
  // turtles
  if (!catch_turtle__msg__Turtle__Sequence__init(&msg->turtles, 0)) {
    catch_turtle__msg__TurtleArray__fini(msg);
    return false;
  }
  return true;
}

void
catch_turtle__msg__TurtleArray__fini(catch_turtle__msg__TurtleArray * msg)
{
  if (!msg) {
    return;
  }
  // turtles
  catch_turtle__msg__Turtle__Sequence__fini(&msg->turtles);
}

catch_turtle__msg__TurtleArray *
catch_turtle__msg__TurtleArray__create()
{
  catch_turtle__msg__TurtleArray * msg = (catch_turtle__msg__TurtleArray *)malloc(sizeof(catch_turtle__msg__TurtleArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(catch_turtle__msg__TurtleArray));
  bool success = catch_turtle__msg__TurtleArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
catch_turtle__msg__TurtleArray__destroy(catch_turtle__msg__TurtleArray * msg)
{
  if (msg) {
    catch_turtle__msg__TurtleArray__fini(msg);
  }
  free(msg);
}


bool
catch_turtle__msg__TurtleArray__Sequence__init(catch_turtle__msg__TurtleArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  catch_turtle__msg__TurtleArray * data = NULL;
  if (size) {
    data = (catch_turtle__msg__TurtleArray *)calloc(size, sizeof(catch_turtle__msg__TurtleArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = catch_turtle__msg__TurtleArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        catch_turtle__msg__TurtleArray__fini(&data[i - 1]);
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
catch_turtle__msg__TurtleArray__Sequence__fini(catch_turtle__msg__TurtleArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      catch_turtle__msg__TurtleArray__fini(&array->data[i]);
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

catch_turtle__msg__TurtleArray__Sequence *
catch_turtle__msg__TurtleArray__Sequence__create(size_t size)
{
  catch_turtle__msg__TurtleArray__Sequence * array = (catch_turtle__msg__TurtleArray__Sequence *)malloc(sizeof(catch_turtle__msg__TurtleArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = catch_turtle__msg__TurtleArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
catch_turtle__msg__TurtleArray__Sequence__destroy(catch_turtle__msg__TurtleArray__Sequence * array)
{
  if (array) {
    catch_turtle__msg__TurtleArray__Sequence__fini(array);
  }
  free(array);
}
