// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from semmap_interfaces:msg/SlamMap.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__MSG__DETAIL__SLAM_MAP__FUNCTIONS_H_
#define SEMMAP_INTERFACES__MSG__DETAIL__SLAM_MAP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "semmap_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "semmap_interfaces/msg/detail/slam_map__struct.h"

/// Initialize msg/SlamMap message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * semmap_interfaces__msg__SlamMap
 * )) before or use
 * semmap_interfaces__msg__SlamMap__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_semmap_interfaces
bool
semmap_interfaces__msg__SlamMap__init(semmap_interfaces__msg__SlamMap * msg);

/// Finalize msg/SlamMap message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_semmap_interfaces
void
semmap_interfaces__msg__SlamMap__fini(semmap_interfaces__msg__SlamMap * msg);

/// Create msg/SlamMap message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * semmap_interfaces__msg__SlamMap__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_semmap_interfaces
semmap_interfaces__msg__SlamMap *
semmap_interfaces__msg__SlamMap__create();

/// Destroy msg/SlamMap message.
/**
 * It calls
 * semmap_interfaces__msg__SlamMap__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_semmap_interfaces
void
semmap_interfaces__msg__SlamMap__destroy(semmap_interfaces__msg__SlamMap * msg);

/// Check for msg/SlamMap message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_semmap_interfaces
bool
semmap_interfaces__msg__SlamMap__are_equal(const semmap_interfaces__msg__SlamMap * lhs, const semmap_interfaces__msg__SlamMap * rhs);

/// Copy a msg/SlamMap message.
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
ROSIDL_GENERATOR_C_PUBLIC_semmap_interfaces
bool
semmap_interfaces__msg__SlamMap__copy(
  const semmap_interfaces__msg__SlamMap * input,
  semmap_interfaces__msg__SlamMap * output);

/// Initialize array of msg/SlamMap messages.
/**
 * It allocates the memory for the number of elements and calls
 * semmap_interfaces__msg__SlamMap__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_semmap_interfaces
bool
semmap_interfaces__msg__SlamMap__Sequence__init(semmap_interfaces__msg__SlamMap__Sequence * array, size_t size);

/// Finalize array of msg/SlamMap messages.
/**
 * It calls
 * semmap_interfaces__msg__SlamMap__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_semmap_interfaces
void
semmap_interfaces__msg__SlamMap__Sequence__fini(semmap_interfaces__msg__SlamMap__Sequence * array);

/// Create array of msg/SlamMap messages.
/**
 * It allocates the memory for the array and calls
 * semmap_interfaces__msg__SlamMap__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_semmap_interfaces
semmap_interfaces__msg__SlamMap__Sequence *
semmap_interfaces__msg__SlamMap__Sequence__create(size_t size);

/// Destroy array of msg/SlamMap messages.
/**
 * It calls
 * semmap_interfaces__msg__SlamMap__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_semmap_interfaces
void
semmap_interfaces__msg__SlamMap__Sequence__destroy(semmap_interfaces__msg__SlamMap__Sequence * array);

/// Check for msg/SlamMap message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_semmap_interfaces
bool
semmap_interfaces__msg__SlamMap__Sequence__are_equal(const semmap_interfaces__msg__SlamMap__Sequence * lhs, const semmap_interfaces__msg__SlamMap__Sequence * rhs);

/// Copy an array of msg/SlamMap messages.
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
ROSIDL_GENERATOR_C_PUBLIC_semmap_interfaces
bool
semmap_interfaces__msg__SlamMap__Sequence__copy(
  const semmap_interfaces__msg__SlamMap__Sequence * input,
  semmap_interfaces__msg__SlamMap__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SEMMAP_INTERFACES__MSG__DETAIL__SLAM_MAP__FUNCTIONS_H_
