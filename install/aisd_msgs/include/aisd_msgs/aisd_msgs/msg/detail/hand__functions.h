// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from aisd_msgs:msg/Hand.idl
// generated code does not contain a copyright notice

#ifndef AISD_MSGS__MSG__DETAIL__HAND__FUNCTIONS_H_
#define AISD_MSGS__MSG__DETAIL__HAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "aisd_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "aisd_msgs/msg/detail/hand__struct.h"

/// Initialize msg/Hand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aisd_msgs__msg__Hand
 * )) before or use
 * aisd_msgs__msg__Hand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aisd_msgs
bool
aisd_msgs__msg__Hand__init(aisd_msgs__msg__Hand * msg);

/// Finalize msg/Hand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aisd_msgs
void
aisd_msgs__msg__Hand__fini(aisd_msgs__msg__Hand * msg);

/// Create msg/Hand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aisd_msgs__msg__Hand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aisd_msgs
aisd_msgs__msg__Hand *
aisd_msgs__msg__Hand__create();

/// Destroy msg/Hand message.
/**
 * It calls
 * aisd_msgs__msg__Hand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aisd_msgs
void
aisd_msgs__msg__Hand__destroy(aisd_msgs__msg__Hand * msg);

/// Check for msg/Hand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aisd_msgs
bool
aisd_msgs__msg__Hand__are_equal(const aisd_msgs__msg__Hand * lhs, const aisd_msgs__msg__Hand * rhs);

/// Copy a msg/Hand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aisd_msgs
bool
aisd_msgs__msg__Hand__copy(
  const aisd_msgs__msg__Hand * input,
  aisd_msgs__msg__Hand * output);

/// Initialize array of msg/Hand messages.
/**
 * It allocates the memory for the number of elements and calls
 * aisd_msgs__msg__Hand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aisd_msgs
bool
aisd_msgs__msg__Hand__Sequence__init(aisd_msgs__msg__Hand__Sequence * array, size_t size);

/// Finalize array of msg/Hand messages.
/**
 * It calls
 * aisd_msgs__msg__Hand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aisd_msgs
void
aisd_msgs__msg__Hand__Sequence__fini(aisd_msgs__msg__Hand__Sequence * array);

/// Create array of msg/Hand messages.
/**
 * It allocates the memory for the array and calls
 * aisd_msgs__msg__Hand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aisd_msgs
aisd_msgs__msg__Hand__Sequence *
aisd_msgs__msg__Hand__Sequence__create(size_t size);

/// Destroy array of msg/Hand messages.
/**
 * It calls
 * aisd_msgs__msg__Hand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aisd_msgs
void
aisd_msgs__msg__Hand__Sequence__destroy(aisd_msgs__msg__Hand__Sequence * array);

/// Check for msg/Hand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aisd_msgs
bool
aisd_msgs__msg__Hand__Sequence__are_equal(const aisd_msgs__msg__Hand__Sequence * lhs, const aisd_msgs__msg__Hand__Sequence * rhs);

/// Copy an array of msg/Hand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aisd_msgs
bool
aisd_msgs__msg__Hand__Sequence__copy(
  const aisd_msgs__msg__Hand__Sequence * input,
  aisd_msgs__msg__Hand__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AISD_MSGS__MSG__DETAIL__HAND__FUNCTIONS_H_
