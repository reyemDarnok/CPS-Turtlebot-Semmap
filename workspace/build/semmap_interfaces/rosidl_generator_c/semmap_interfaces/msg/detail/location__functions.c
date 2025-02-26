// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from semmap_interfaces:msg/Location.idl
// generated code does not contain a copyright notice
#include "semmap_interfaces/msg/detail/location__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
semmap_interfaces__msg__Location__init(semmap_interfaces__msg__Location * msg)
{
  if (!msg) {
    return false;
  }
  // orientation
  // x
  // y
  return true;
}

void
semmap_interfaces__msg__Location__fini(semmap_interfaces__msg__Location * msg)
{
  if (!msg) {
    return;
  }
  // orientation
  // x
  // y
}

bool
semmap_interfaces__msg__Location__are_equal(const semmap_interfaces__msg__Location * lhs, const semmap_interfaces__msg__Location * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // orientation
  if (lhs->orientation != rhs->orientation) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
semmap_interfaces__msg__Location__copy(
  const semmap_interfaces__msg__Location * input,
  semmap_interfaces__msg__Location * output)
{
  if (!input || !output) {
    return false;
  }
  // orientation
  output->orientation = input->orientation;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

semmap_interfaces__msg__Location *
semmap_interfaces__msg__Location__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semmap_interfaces__msg__Location * msg = (semmap_interfaces__msg__Location *)allocator.allocate(sizeof(semmap_interfaces__msg__Location), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(semmap_interfaces__msg__Location));
  bool success = semmap_interfaces__msg__Location__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
semmap_interfaces__msg__Location__destroy(semmap_interfaces__msg__Location * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    semmap_interfaces__msg__Location__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
semmap_interfaces__msg__Location__Sequence__init(semmap_interfaces__msg__Location__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semmap_interfaces__msg__Location * data = NULL;

  if (size) {
    data = (semmap_interfaces__msg__Location *)allocator.zero_allocate(size, sizeof(semmap_interfaces__msg__Location), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = semmap_interfaces__msg__Location__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        semmap_interfaces__msg__Location__fini(&data[i - 1]);
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
semmap_interfaces__msg__Location__Sequence__fini(semmap_interfaces__msg__Location__Sequence * array)
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
      semmap_interfaces__msg__Location__fini(&array->data[i]);
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

semmap_interfaces__msg__Location__Sequence *
semmap_interfaces__msg__Location__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semmap_interfaces__msg__Location__Sequence * array = (semmap_interfaces__msg__Location__Sequence *)allocator.allocate(sizeof(semmap_interfaces__msg__Location__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = semmap_interfaces__msg__Location__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
semmap_interfaces__msg__Location__Sequence__destroy(semmap_interfaces__msg__Location__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    semmap_interfaces__msg__Location__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
semmap_interfaces__msg__Location__Sequence__are_equal(const semmap_interfaces__msg__Location__Sequence * lhs, const semmap_interfaces__msg__Location__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!semmap_interfaces__msg__Location__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
semmap_interfaces__msg__Location__Sequence__copy(
  const semmap_interfaces__msg__Location__Sequence * input,
  semmap_interfaces__msg__Location__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(semmap_interfaces__msg__Location);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    semmap_interfaces__msg__Location * data =
      (semmap_interfaces__msg__Location *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!semmap_interfaces__msg__Location__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          semmap_interfaces__msg__Location__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!semmap_interfaces__msg__Location__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
