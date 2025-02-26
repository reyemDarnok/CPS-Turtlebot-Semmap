// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from semmap_interfaces:msg/SlamMap.idl
// generated code does not contain a copyright notice
#include "semmap_interfaces/msg/detail/slam_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `positive_and0_x`
// Member `negative_x`
// Member `positive_and0_y`
// Member `negative_y`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
semmap_interfaces__msg__SlamMap__init(semmap_interfaces__msg__SlamMap * msg)
{
  if (!msg) {
    return false;
  }
  // positive_and0_x
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->positive_and0_x, 0)) {
    semmap_interfaces__msg__SlamMap__fini(msg);
    return false;
  }
  // negative_x
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->negative_x, 0)) {
    semmap_interfaces__msg__SlamMap__fini(msg);
    return false;
  }
  // positive_and0_y
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->positive_and0_y, 0)) {
    semmap_interfaces__msg__SlamMap__fini(msg);
    return false;
  }
  // negative_y
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->negative_y, 0)) {
    semmap_interfaces__msg__SlamMap__fini(msg);
    return false;
  }
  return true;
}

void
semmap_interfaces__msg__SlamMap__fini(semmap_interfaces__msg__SlamMap * msg)
{
  if (!msg) {
    return;
  }
  // positive_and0_x
  rosidl_runtime_c__boolean__Sequence__fini(&msg->positive_and0_x);
  // negative_x
  rosidl_runtime_c__boolean__Sequence__fini(&msg->negative_x);
  // positive_and0_y
  rosidl_runtime_c__boolean__Sequence__fini(&msg->positive_and0_y);
  // negative_y
  rosidl_runtime_c__boolean__Sequence__fini(&msg->negative_y);
}

bool
semmap_interfaces__msg__SlamMap__are_equal(const semmap_interfaces__msg__SlamMap * lhs, const semmap_interfaces__msg__SlamMap * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // positive_and0_x
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->positive_and0_x), &(rhs->positive_and0_x)))
  {
    return false;
  }
  // negative_x
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->negative_x), &(rhs->negative_x)))
  {
    return false;
  }
  // positive_and0_y
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->positive_and0_y), &(rhs->positive_and0_y)))
  {
    return false;
  }
  // negative_y
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->negative_y), &(rhs->negative_y)))
  {
    return false;
  }
  return true;
}

bool
semmap_interfaces__msg__SlamMap__copy(
  const semmap_interfaces__msg__SlamMap * input,
  semmap_interfaces__msg__SlamMap * output)
{
  if (!input || !output) {
    return false;
  }
  // positive_and0_x
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->positive_and0_x), &(output->positive_and0_x)))
  {
    return false;
  }
  // negative_x
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->negative_x), &(output->negative_x)))
  {
    return false;
  }
  // positive_and0_y
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->positive_and0_y), &(output->positive_and0_y)))
  {
    return false;
  }
  // negative_y
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->negative_y), &(output->negative_y)))
  {
    return false;
  }
  return true;
}

semmap_interfaces__msg__SlamMap *
semmap_interfaces__msg__SlamMap__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semmap_interfaces__msg__SlamMap * msg = (semmap_interfaces__msg__SlamMap *)allocator.allocate(sizeof(semmap_interfaces__msg__SlamMap), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(semmap_interfaces__msg__SlamMap));
  bool success = semmap_interfaces__msg__SlamMap__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
semmap_interfaces__msg__SlamMap__destroy(semmap_interfaces__msg__SlamMap * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    semmap_interfaces__msg__SlamMap__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
semmap_interfaces__msg__SlamMap__Sequence__init(semmap_interfaces__msg__SlamMap__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semmap_interfaces__msg__SlamMap * data = NULL;

  if (size) {
    data = (semmap_interfaces__msg__SlamMap *)allocator.zero_allocate(size, sizeof(semmap_interfaces__msg__SlamMap), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = semmap_interfaces__msg__SlamMap__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        semmap_interfaces__msg__SlamMap__fini(&data[i - 1]);
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
semmap_interfaces__msg__SlamMap__Sequence__fini(semmap_interfaces__msg__SlamMap__Sequence * array)
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
      semmap_interfaces__msg__SlamMap__fini(&array->data[i]);
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

semmap_interfaces__msg__SlamMap__Sequence *
semmap_interfaces__msg__SlamMap__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semmap_interfaces__msg__SlamMap__Sequence * array = (semmap_interfaces__msg__SlamMap__Sequence *)allocator.allocate(sizeof(semmap_interfaces__msg__SlamMap__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = semmap_interfaces__msg__SlamMap__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
semmap_interfaces__msg__SlamMap__Sequence__destroy(semmap_interfaces__msg__SlamMap__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    semmap_interfaces__msg__SlamMap__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
semmap_interfaces__msg__SlamMap__Sequence__are_equal(const semmap_interfaces__msg__SlamMap__Sequence * lhs, const semmap_interfaces__msg__SlamMap__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!semmap_interfaces__msg__SlamMap__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
semmap_interfaces__msg__SlamMap__Sequence__copy(
  const semmap_interfaces__msg__SlamMap__Sequence * input,
  semmap_interfaces__msg__SlamMap__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(semmap_interfaces__msg__SlamMap);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    semmap_interfaces__msg__SlamMap * data =
      (semmap_interfaces__msg__SlamMap *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!semmap_interfaces__msg__SlamMap__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          semmap_interfaces__msg__SlamMap__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!semmap_interfaces__msg__SlamMap__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
