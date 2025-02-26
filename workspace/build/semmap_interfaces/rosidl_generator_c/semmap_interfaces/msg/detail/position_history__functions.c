// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from semmap_interfaces:msg/PositionHistory.idl
// generated code does not contain a copyright notice
#include "semmap_interfaces/msg/detail/position_history__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `x`
// Member `y`
// Member `rotation`
// Member `timestamp`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
semmap_interfaces__msg__PositionHistory__init(semmap_interfaces__msg__PositionHistory * msg)
{
  if (!msg) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__float__Sequence__init(&msg->x, 0)) {
    semmap_interfaces__msg__PositionHistory__fini(msg);
    return false;
  }
  // y
  if (!rosidl_runtime_c__float__Sequence__init(&msg->y, 0)) {
    semmap_interfaces__msg__PositionHistory__fini(msg);
    return false;
  }
  // rotation
  if (!rosidl_runtime_c__float__Sequence__init(&msg->rotation, 0)) {
    semmap_interfaces__msg__PositionHistory__fini(msg);
    return false;
  }
  // timestamp
  if (!rosidl_runtime_c__float__Sequence__init(&msg->timestamp, 0)) {
    semmap_interfaces__msg__PositionHistory__fini(msg);
    return false;
  }
  return true;
}

void
semmap_interfaces__msg__PositionHistory__fini(semmap_interfaces__msg__PositionHistory * msg)
{
  if (!msg) {
    return;
  }
  // x
  rosidl_runtime_c__float__Sequence__fini(&msg->x);
  // y
  rosidl_runtime_c__float__Sequence__fini(&msg->y);
  // rotation
  rosidl_runtime_c__float__Sequence__fini(&msg->rotation);
  // timestamp
  rosidl_runtime_c__float__Sequence__fini(&msg->timestamp);
}

bool
semmap_interfaces__msg__PositionHistory__are_equal(const semmap_interfaces__msg__PositionHistory * lhs, const semmap_interfaces__msg__PositionHistory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->x), &(rhs->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->y), &(rhs->y)))
  {
    return false;
  }
  // rotation
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->rotation), &(rhs->rotation)))
  {
    return false;
  }
  // timestamp
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  return true;
}

bool
semmap_interfaces__msg__PositionHistory__copy(
  const semmap_interfaces__msg__PositionHistory * input,
  semmap_interfaces__msg__PositionHistory * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->x), &(output->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->y), &(output->y)))
  {
    return false;
  }
  // rotation
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->rotation), &(output->rotation)))
  {
    return false;
  }
  // timestamp
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  return true;
}

semmap_interfaces__msg__PositionHistory *
semmap_interfaces__msg__PositionHistory__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semmap_interfaces__msg__PositionHistory * msg = (semmap_interfaces__msg__PositionHistory *)allocator.allocate(sizeof(semmap_interfaces__msg__PositionHistory), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(semmap_interfaces__msg__PositionHistory));
  bool success = semmap_interfaces__msg__PositionHistory__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
semmap_interfaces__msg__PositionHistory__destroy(semmap_interfaces__msg__PositionHistory * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    semmap_interfaces__msg__PositionHistory__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
semmap_interfaces__msg__PositionHistory__Sequence__init(semmap_interfaces__msg__PositionHistory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semmap_interfaces__msg__PositionHistory * data = NULL;

  if (size) {
    data = (semmap_interfaces__msg__PositionHistory *)allocator.zero_allocate(size, sizeof(semmap_interfaces__msg__PositionHistory), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = semmap_interfaces__msg__PositionHistory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        semmap_interfaces__msg__PositionHistory__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
semmap_interfaces__msg__PositionHistory__Sequence__fini(semmap_interfaces__msg__PositionHistory__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      semmap_interfaces__msg__PositionHistory__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

semmap_interfaces__msg__PositionHistory__Sequence *
semmap_interfaces__msg__PositionHistory__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semmap_interfaces__msg__PositionHistory__Sequence * array = (semmap_interfaces__msg__PositionHistory__Sequence *)allocator.allocate(sizeof(semmap_interfaces__msg__PositionHistory__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = semmap_interfaces__msg__PositionHistory__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
semmap_interfaces__msg__PositionHistory__Sequence__destroy(semmap_interfaces__msg__PositionHistory__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    semmap_interfaces__msg__PositionHistory__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
semmap_interfaces__msg__PositionHistory__Sequence__are_equal(const semmap_interfaces__msg__PositionHistory__Sequence * lhs, const semmap_interfaces__msg__PositionHistory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!semmap_interfaces__msg__PositionHistory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
semmap_interfaces__msg__PositionHistory__Sequence__copy(
  const semmap_interfaces__msg__PositionHistory__Sequence * input,
  semmap_interfaces__msg__PositionHistory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(semmap_interfaces__msg__PositionHistory);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    semmap_interfaces__msg__PositionHistory * data =
      (semmap_interfaces__msg__PositionHistory *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!semmap_interfaces__msg__PositionHistory__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          semmap_interfaces__msg__PositionHistory__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!semmap_interfaces__msg__PositionHistory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
