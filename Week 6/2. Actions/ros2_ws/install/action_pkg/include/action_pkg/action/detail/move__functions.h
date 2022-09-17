// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from action_pkg:action/Move.idl
// generated code does not contain a copyright notice

#ifndef ACTION_PKG__ACTION__DETAIL__MOVE__FUNCTIONS_H_
#define ACTION_PKG__ACTION__DETAIL__MOVE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "action_pkg/msg/rosidl_generator_c__visibility_control.h"

#include "action_pkg/action/detail/move__struct.h"

/// Initialize action/Move message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * action_pkg__action__Move_Goal
 * )) before or use
 * action_pkg__action__Move_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__Move_Goal__init(action_pkg__action__Move_Goal * msg);

/// Finalize action/Move message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_Goal__fini(action_pkg__action__Move_Goal * msg);

/// Create action/Move message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * action_pkg__action__Move_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__Move_Goal *
action_pkg__action__Move_Goal__create();

/// Destroy action/Move message.
/**
 * It calls
 * action_pkg__action__Move_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_Goal__destroy(action_pkg__action__Move_Goal * msg);


/// Initialize array of action/Move messages.
/**
 * It allocates the memory for the number of elements and calls
 * action_pkg__action__Move_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__Move_Goal__Sequence__init(action_pkg__action__Move_Goal__Sequence * array, size_t size);

/// Finalize array of action/Move messages.
/**
 * It calls
 * action_pkg__action__Move_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_Goal__Sequence__fini(action_pkg__action__Move_Goal__Sequence * array);

/// Create array of action/Move messages.
/**
 * It allocates the memory for the array and calls
 * action_pkg__action__Move_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__Move_Goal__Sequence *
action_pkg__action__Move_Goal__Sequence__create(size_t size);

/// Destroy array of action/Move messages.
/**
 * It calls
 * action_pkg__action__Move_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_Goal__Sequence__destroy(action_pkg__action__Move_Goal__Sequence * array);

/// Initialize action/Move message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * action_pkg__action__Move_Result
 * )) before or use
 * action_pkg__action__Move_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__Move_Result__init(action_pkg__action__Move_Result * msg);

/// Finalize action/Move message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_Result__fini(action_pkg__action__Move_Result * msg);

/// Create action/Move message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * action_pkg__action__Move_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__Move_Result *
action_pkg__action__Move_Result__create();

/// Destroy action/Move message.
/**
 * It calls
 * action_pkg__action__Move_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_Result__destroy(action_pkg__action__Move_Result * msg);


/// Initialize array of action/Move messages.
/**
 * It allocates the memory for the number of elements and calls
 * action_pkg__action__Move_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__Move_Result__Sequence__init(action_pkg__action__Move_Result__Sequence * array, size_t size);

/// Finalize array of action/Move messages.
/**
 * It calls
 * action_pkg__action__Move_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_Result__Sequence__fini(action_pkg__action__Move_Result__Sequence * array);

/// Create array of action/Move messages.
/**
 * It allocates the memory for the array and calls
 * action_pkg__action__Move_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__Move_Result__Sequence *
action_pkg__action__Move_Result__Sequence__create(size_t size);

/// Destroy array of action/Move messages.
/**
 * It calls
 * action_pkg__action__Move_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_Result__Sequence__destroy(action_pkg__action__Move_Result__Sequence * array);

/// Initialize action/Move message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * action_pkg__action__Move_Feedback
 * )) before or use
 * action_pkg__action__Move_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__Move_Feedback__init(action_pkg__action__Move_Feedback * msg);

/// Finalize action/Move message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_Feedback__fini(action_pkg__action__Move_Feedback * msg);

/// Create action/Move message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * action_pkg__action__Move_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__Move_Feedback *
action_pkg__action__Move_Feedback__create();

/// Destroy action/Move message.
/**
 * It calls
 * action_pkg__action__Move_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_Feedback__destroy(action_pkg__action__Move_Feedback * msg);


/// Initialize array of action/Move messages.
/**
 * It allocates the memory for the number of elements and calls
 * action_pkg__action__Move_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__Move_Feedback__Sequence__init(action_pkg__action__Move_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Move messages.
/**
 * It calls
 * action_pkg__action__Move_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_Feedback__Sequence__fini(action_pkg__action__Move_Feedback__Sequence * array);

/// Create array of action/Move messages.
/**
 * It allocates the memory for the array and calls
 * action_pkg__action__Move_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__Move_Feedback__Sequence *
action_pkg__action__Move_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Move messages.
/**
 * It calls
 * action_pkg__action__Move_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_Feedback__Sequence__destroy(action_pkg__action__Move_Feedback__Sequence * array);

/// Initialize action/Move message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * action_pkg__action__Move_SendGoal_Request
 * )) before or use
 * action_pkg__action__Move_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__Move_SendGoal_Request__init(action_pkg__action__Move_SendGoal_Request * msg);

/// Finalize action/Move message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_SendGoal_Request__fini(action_pkg__action__Move_SendGoal_Request * msg);

/// Create action/Move message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * action_pkg__action__Move_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__Move_SendGoal_Request *
action_pkg__action__Move_SendGoal_Request__create();

/// Destroy action/Move message.
/**
 * It calls
 * action_pkg__action__Move_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_SendGoal_Request__destroy(action_pkg__action__Move_SendGoal_Request * msg);


/// Initialize array of action/Move messages.
/**
 * It allocates the memory for the number of elements and calls
 * action_pkg__action__Move_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__Move_SendGoal_Request__Sequence__init(action_pkg__action__Move_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Move messages.
/**
 * It calls
 * action_pkg__action__Move_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_SendGoal_Request__Sequence__fini(action_pkg__action__Move_SendGoal_Request__Sequence * array);

/// Create array of action/Move messages.
/**
 * It allocates the memory for the array and calls
 * action_pkg__action__Move_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__Move_SendGoal_Request__Sequence *
action_pkg__action__Move_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Move messages.
/**
 * It calls
 * action_pkg__action__Move_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_SendGoal_Request__Sequence__destroy(action_pkg__action__Move_SendGoal_Request__Sequence * array);

/// Initialize action/Move message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * action_pkg__action__Move_SendGoal_Response
 * )) before or use
 * action_pkg__action__Move_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__Move_SendGoal_Response__init(action_pkg__action__Move_SendGoal_Response * msg);

/// Finalize action/Move message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_SendGoal_Response__fini(action_pkg__action__Move_SendGoal_Response * msg);

/// Create action/Move message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * action_pkg__action__Move_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__Move_SendGoal_Response *
action_pkg__action__Move_SendGoal_Response__create();

/// Destroy action/Move message.
/**
 * It calls
 * action_pkg__action__Move_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_SendGoal_Response__destroy(action_pkg__action__Move_SendGoal_Response * msg);


/// Initialize array of action/Move messages.
/**
 * It allocates the memory for the number of elements and calls
 * action_pkg__action__Move_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__Move_SendGoal_Response__Sequence__init(action_pkg__action__Move_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Move messages.
/**
 * It calls
 * action_pkg__action__Move_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_SendGoal_Response__Sequence__fini(action_pkg__action__Move_SendGoal_Response__Sequence * array);

/// Create array of action/Move messages.
/**
 * It allocates the memory for the array and calls
 * action_pkg__action__Move_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__Move_SendGoal_Response__Sequence *
action_pkg__action__Move_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Move messages.
/**
 * It calls
 * action_pkg__action__Move_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_SendGoal_Response__Sequence__destroy(action_pkg__action__Move_SendGoal_Response__Sequence * array);

/// Initialize action/Move message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * action_pkg__action__Move_GetResult_Request
 * )) before or use
 * action_pkg__action__Move_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__Move_GetResult_Request__init(action_pkg__action__Move_GetResult_Request * msg);

/// Finalize action/Move message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_GetResult_Request__fini(action_pkg__action__Move_GetResult_Request * msg);

/// Create action/Move message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * action_pkg__action__Move_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__Move_GetResult_Request *
action_pkg__action__Move_GetResult_Request__create();

/// Destroy action/Move message.
/**
 * It calls
 * action_pkg__action__Move_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_GetResult_Request__destroy(action_pkg__action__Move_GetResult_Request * msg);


/// Initialize array of action/Move messages.
/**
 * It allocates the memory for the number of elements and calls
 * action_pkg__action__Move_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__Move_GetResult_Request__Sequence__init(action_pkg__action__Move_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Move messages.
/**
 * It calls
 * action_pkg__action__Move_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_GetResult_Request__Sequence__fini(action_pkg__action__Move_GetResult_Request__Sequence * array);

/// Create array of action/Move messages.
/**
 * It allocates the memory for the array and calls
 * action_pkg__action__Move_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__Move_GetResult_Request__Sequence *
action_pkg__action__Move_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Move messages.
/**
 * It calls
 * action_pkg__action__Move_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_GetResult_Request__Sequence__destroy(action_pkg__action__Move_GetResult_Request__Sequence * array);

/// Initialize action/Move message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * action_pkg__action__Move_GetResult_Response
 * )) before or use
 * action_pkg__action__Move_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__Move_GetResult_Response__init(action_pkg__action__Move_GetResult_Response * msg);

/// Finalize action/Move message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_GetResult_Response__fini(action_pkg__action__Move_GetResult_Response * msg);

/// Create action/Move message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * action_pkg__action__Move_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__Move_GetResult_Response *
action_pkg__action__Move_GetResult_Response__create();

/// Destroy action/Move message.
/**
 * It calls
 * action_pkg__action__Move_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_GetResult_Response__destroy(action_pkg__action__Move_GetResult_Response * msg);


/// Initialize array of action/Move messages.
/**
 * It allocates the memory for the number of elements and calls
 * action_pkg__action__Move_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__Move_GetResult_Response__Sequence__init(action_pkg__action__Move_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Move messages.
/**
 * It calls
 * action_pkg__action__Move_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_GetResult_Response__Sequence__fini(action_pkg__action__Move_GetResult_Response__Sequence * array);

/// Create array of action/Move messages.
/**
 * It allocates the memory for the array and calls
 * action_pkg__action__Move_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__Move_GetResult_Response__Sequence *
action_pkg__action__Move_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Move messages.
/**
 * It calls
 * action_pkg__action__Move_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_GetResult_Response__Sequence__destroy(action_pkg__action__Move_GetResult_Response__Sequence * array);

/// Initialize action/Move message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * action_pkg__action__Move_FeedbackMessage
 * )) before or use
 * action_pkg__action__Move_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__Move_FeedbackMessage__init(action_pkg__action__Move_FeedbackMessage * msg);

/// Finalize action/Move message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_FeedbackMessage__fini(action_pkg__action__Move_FeedbackMessage * msg);

/// Create action/Move message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * action_pkg__action__Move_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__Move_FeedbackMessage *
action_pkg__action__Move_FeedbackMessage__create();

/// Destroy action/Move message.
/**
 * It calls
 * action_pkg__action__Move_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_FeedbackMessage__destroy(action_pkg__action__Move_FeedbackMessage * msg);


/// Initialize array of action/Move messages.
/**
 * It allocates the memory for the number of elements and calls
 * action_pkg__action__Move_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
bool
action_pkg__action__Move_FeedbackMessage__Sequence__init(action_pkg__action__Move_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Move messages.
/**
 * It calls
 * action_pkg__action__Move_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_FeedbackMessage__Sequence__fini(action_pkg__action__Move_FeedbackMessage__Sequence * array);

/// Create array of action/Move messages.
/**
 * It allocates the memory for the array and calls
 * action_pkg__action__Move_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
action_pkg__action__Move_FeedbackMessage__Sequence *
action_pkg__action__Move_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Move messages.
/**
 * It calls
 * action_pkg__action__Move_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_pkg
void
action_pkg__action__Move_FeedbackMessage__Sequence__destroy(action_pkg__action__Move_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ACTION_PKG__ACTION__DETAIL__MOVE__FUNCTIONS_H_