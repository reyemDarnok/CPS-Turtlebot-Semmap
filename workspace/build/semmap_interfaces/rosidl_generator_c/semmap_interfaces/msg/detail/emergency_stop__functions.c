// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from semmap_interfaces:msg/EmergencyStop.idl
// generated code does not contain a copyright notice
#include "semmap_interfaces/msg/detail/emergency_stop__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
semmap_interfaces__msg__EmergencyStop__init(semmap_interfaces__msg__EmergencyStop * msg)
{
  if (!msg) {
    return false;
  }
  // cause
  // solvable_by_backup
  return true;
}

void
semmap_interfaces__msg__EmergencyStop__fini(semmap_interfaces__msg__EmergencyStop * msg)
{
  if (!msg) {
    return;
  }
  // cause
  // solvable_by_backup
}

bool
semmap_interfaces__msg__EmergencyStop__are_equal(const semmap_interfaces__msg__EmergencyStop * lhs, const semmap_interfaces__msg__EmergencyStop * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cause
  if (lhs->cause != rhs->cause) {
    return false;
  }
  // solvable_by_backup
  if (lhs->solvable_by_backup != rhs->solvable_by_backup) {
    return false;
  }
  return true;
}

bool
semmap_interfaces__msg__EmergencyStop__copy(
  const semmap_interfaces__msg__EmergencyStop * input,
  semmap_interfaces__msg__EmergencyStop * output)
{
  if (!input || !output) {
    return false;
  }
  // cause
  output->cause = input->cause;
  // solvable_by_backup
  output->solvable_by_backup = input->solvable_by_backup;
  return true;
}

semmap_interfaces__msg__EmergencyStop *
semmap_interfaces__msg__EmergencyStop__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semmap_interfaces__msg__EmergencyStop * msg = (semmap_interfaces__msg__EmergencyStop *)allocator.allocate(sizeof(semmap_interfaces__msg__EmergencyStop), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(semmap_interfaces__msg__EmergencyStop));
  bool success = semmap_interfaces__msg__EmergencyStop__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
semmap_interfaces__msg__EmergencyStop__destroy(semmap_interfaces__msg__EmergencyStop * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    semmap_interfaces__msg__EmergencyStop__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
semmap_interfaces__msg__EmergencyStop__Sequence__init(semmap_interfaces__msg__EmergencyStop__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semmap_interfaces__msg__EmergencyStop * data = NULL;

  if (size) {
    data = (semmap_interfaces__msg__EmergencyStop *)allocator.zero_allocate(size, sizeof(semmap_interfaces__msg__EmergencyStop), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = semmap_interfaces__msg__EmergencyStop__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        semmap_interfaces__msg__EmergencyStop__fini(&data[i - 1]);
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
semmap_interfaces__msg__EmergencyStop__Sequence__fini(semmap_interfaces__msg__EmergencyStop__Sequence * array)
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
      semmap_interfaces__msg__EmergencyStop__fini(&array->data[i]);
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

semmap_interfaces__msg__EmergencyStop__Sequence *
semmap_interfaces__msg__EmergencyStop__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semmap_interfaces__msg__EmergencyStop__Sequence * array = (semmap_interfaces__msg__EmergencyStop__Sequence *)allocator.allocate(sizeof(semmap_interfaces__msg__EmergencyStop__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = semmap_interfaces__msg__EmergencyStop__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
semmap_interfaces__msg__EmergencyStop__Sequence__destroy(semmap_interfaces__msg__EmergencyStop__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    semmap_interfaces__msg__EmergencyStop__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
semmap_interfaces__msg__EmergencyStop__Sequence__are_equal(const semmap_interfaces__msg__EmergencyStop__Sequence * lhs, const semmap_interfaces__msg__EmergencyStop__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!semmap_interfaces__msg__EmergencyStop__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
semmap_interfaces__msg__EmergencyStop__Sequence__copy(
  const semmap_interfaces__msg__EmergencyStop__Sequence * input,
  semmap_interfaces__msg__EmergencyStop__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(semmap_interfaces__msg__EmergencyStop);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    semmap_interfaces__msg__EmergencyStop * data =
      (semmap_interfaces__msg__EmergencyStop *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!semmap_interfaces__msg__EmergencyStop__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          semmap_interfaces__msg__EmergencyStop__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!semmap_interfaces__msg__EmergencyStop__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
