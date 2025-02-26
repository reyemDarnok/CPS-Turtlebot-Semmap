// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from semmap_interfaces:msg/InvalidateMap.idl
// generated code does not contain a copyright notice
#include "semmap_interfaces/msg/detail/invalidate_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
semmap_interfaces__msg__InvalidateMap__init(semmap_interfaces__msg__InvalidateMap * msg)
{
  if (!msg) {
    return false;
  }
  // reason
  return true;
}

void
semmap_interfaces__msg__InvalidateMap__fini(semmap_interfaces__msg__InvalidateMap * msg)
{
  if (!msg) {
    return;
  }
  // reason
}

bool
semmap_interfaces__msg__InvalidateMap__are_equal(const semmap_interfaces__msg__InvalidateMap * lhs, const semmap_interfaces__msg__InvalidateMap * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reason
  if (lhs->reason != rhs->reason) {
    return false;
  }
  return true;
}

bool
semmap_interfaces__msg__InvalidateMap__copy(
  const semmap_interfaces__msg__InvalidateMap * input,
  semmap_interfaces__msg__InvalidateMap * output)
{
  if (!input || !output) {
    return false;
  }
  // reason
  output->reason = input->reason;
  return true;
}

semmap_interfaces__msg__InvalidateMap *
semmap_interfaces__msg__InvalidateMap__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semmap_interfaces__msg__InvalidateMap * msg = (semmap_interfaces__msg__InvalidateMap *)allocator.allocate(sizeof(semmap_interfaces__msg__InvalidateMap), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(semmap_interfaces__msg__InvalidateMap));
  bool success = semmap_interfaces__msg__InvalidateMap__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
semmap_interfaces__msg__InvalidateMap__destroy(semmap_interfaces__msg__InvalidateMap * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    semmap_interfaces__msg__InvalidateMap__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
semmap_interfaces__msg__InvalidateMap__Sequence__init(semmap_interfaces__msg__InvalidateMap__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semmap_interfaces__msg__InvalidateMap * data = NULL;

  if (size) {
    data = (semmap_interfaces__msg__InvalidateMap *)allocator.zero_allocate(size, sizeof(semmap_interfaces__msg__InvalidateMap), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = semmap_interfaces__msg__InvalidateMap__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        semmap_interfaces__msg__InvalidateMap__fini(&data[i - 1]);
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
semmap_interfaces__msg__InvalidateMap__Sequence__fini(semmap_interfaces__msg__InvalidateMap__Sequence * array)
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
      semmap_interfaces__msg__InvalidateMap__fini(&array->data[i]);
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

semmap_interfaces__msg__InvalidateMap__Sequence *
semmap_interfaces__msg__InvalidateMap__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semmap_interfaces__msg__InvalidateMap__Sequence * array = (semmap_interfaces__msg__InvalidateMap__Sequence *)allocator.allocate(sizeof(semmap_interfaces__msg__InvalidateMap__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = semmap_interfaces__msg__InvalidateMap__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
semmap_interfaces__msg__InvalidateMap__Sequence__destroy(semmap_interfaces__msg__InvalidateMap__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    semmap_interfaces__msg__InvalidateMap__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
semmap_interfaces__msg__InvalidateMap__Sequence__are_equal(const semmap_interfaces__msg__InvalidateMap__Sequence * lhs, const semmap_interfaces__msg__InvalidateMap__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!semmap_interfaces__msg__InvalidateMap__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
semmap_interfaces__msg__InvalidateMap__Sequence__copy(
  const semmap_interfaces__msg__InvalidateMap__Sequence * input,
  semmap_interfaces__msg__InvalidateMap__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(semmap_interfaces__msg__InvalidateMap);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    semmap_interfaces__msg__InvalidateMap * data =
      (semmap_interfaces__msg__InvalidateMap *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!semmap_interfaces__msg__InvalidateMap__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          semmap_interfaces__msg__InvalidateMap__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!semmap_interfaces__msg__InvalidateMap__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
