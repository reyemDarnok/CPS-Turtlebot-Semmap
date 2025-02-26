// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from semmap_interfaces:srv/SemanticMap.idl
// generated code does not contain a copyright notice
#include "semmap_interfaces/srv/detail/semantic_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
semmap_interfaces__srv__SemanticMap_Request__init(semmap_interfaces__srv__SemanticMap_Request * msg)
{
  if (!msg) {
    return false;
  }
  // request_priority
  return true;
}

void
semmap_interfaces__srv__SemanticMap_Request__fini(semmap_interfaces__srv__SemanticMap_Request * msg)
{
  if (!msg) {
    return;
  }
  // request_priority
}

bool
semmap_interfaces__srv__SemanticMap_Request__are_equal(const semmap_interfaces__srv__SemanticMap_Request * lhs, const semmap_interfaces__srv__SemanticMap_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // request_priority
  if (lhs->request_priority != rhs->request_priority) {
    return false;
  }
  return true;
}

bool
semmap_interfaces__srv__SemanticMap_Request__copy(
  const semmap_interfaces__srv__SemanticMap_Request * input,
  semmap_interfaces__srv__SemanticMap_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // request_priority
  output->request_priority = input->request_priority;
  return true;
}

semmap_interfaces__srv__SemanticMap_Request *
semmap_interfaces__srv__SemanticMap_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semmap_interfaces__srv__SemanticMap_Request * msg = (semmap_interfaces__srv__SemanticMap_Request *)allocator.allocate(sizeof(semmap_interfaces__srv__SemanticMap_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(semmap_interfaces__srv__SemanticMap_Request));
  bool success = semmap_interfaces__srv__SemanticMap_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
semmap_interfaces__srv__SemanticMap_Request__destroy(semmap_interfaces__srv__SemanticMap_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    semmap_interfaces__srv__SemanticMap_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
semmap_interfaces__srv__SemanticMap_Request__Sequence__init(semmap_interfaces__srv__SemanticMap_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semmap_interfaces__srv__SemanticMap_Request * data = NULL;

  if (size) {
    data = (semmap_interfaces__srv__SemanticMap_Request *)allocator.zero_allocate(size, sizeof(semmap_interfaces__srv__SemanticMap_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = semmap_interfaces__srv__SemanticMap_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        semmap_interfaces__srv__SemanticMap_Request__fini(&data[i - 1]);
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
semmap_interfaces__srv__SemanticMap_Request__Sequence__fini(semmap_interfaces__srv__SemanticMap_Request__Sequence * array)
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
      semmap_interfaces__srv__SemanticMap_Request__fini(&array->data[i]);
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

semmap_interfaces__srv__SemanticMap_Request__Sequence *
semmap_interfaces__srv__SemanticMap_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semmap_interfaces__srv__SemanticMap_Request__Sequence * array = (semmap_interfaces__srv__SemanticMap_Request__Sequence *)allocator.allocate(sizeof(semmap_interfaces__srv__SemanticMap_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = semmap_interfaces__srv__SemanticMap_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
semmap_interfaces__srv__SemanticMap_Request__Sequence__destroy(semmap_interfaces__srv__SemanticMap_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    semmap_interfaces__srv__SemanticMap_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
semmap_interfaces__srv__SemanticMap_Request__Sequence__are_equal(const semmap_interfaces__srv__SemanticMap_Request__Sequence * lhs, const semmap_interfaces__srv__SemanticMap_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!semmap_interfaces__srv__SemanticMap_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
semmap_interfaces__srv__SemanticMap_Request__Sequence__copy(
  const semmap_interfaces__srv__SemanticMap_Request__Sequence * input,
  semmap_interfaces__srv__SemanticMap_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(semmap_interfaces__srv__SemanticMap_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    semmap_interfaces__srv__SemanticMap_Request * data =
      (semmap_interfaces__srv__SemanticMap_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!semmap_interfaces__srv__SemanticMap_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          semmap_interfaces__srv__SemanticMap_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!semmap_interfaces__srv__SemanticMap_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `positive_and0_x`
// Member `negative_x`
// Member `positive_and0_y`
// Member `negative_y`
// Member `object_x`
// Member `object_y`
// Member `object_elevation`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `object_tags`
#include "rosidl_runtime_c/string_functions.h"

bool
semmap_interfaces__srv__SemanticMap_Response__init(semmap_interfaces__srv__SemanticMap_Response * msg)
{
  if (!msg) {
    return false;
  }
  // positive_and0_x
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->positive_and0_x, 0)) {
    semmap_interfaces__srv__SemanticMap_Response__fini(msg);
    return false;
  }
  // negative_x
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->negative_x, 0)) {
    semmap_interfaces__srv__SemanticMap_Response__fini(msg);
    return false;
  }
  // positive_and0_y
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->positive_and0_y, 0)) {
    semmap_interfaces__srv__SemanticMap_Response__fini(msg);
    return false;
  }
  // negative_y
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->negative_y, 0)) {
    semmap_interfaces__srv__SemanticMap_Response__fini(msg);
    return false;
  }
  // object_tags
  if (!rosidl_runtime_c__String__Sequence__init(&msg->object_tags, 0)) {
    semmap_interfaces__srv__SemanticMap_Response__fini(msg);
    return false;
  }
  // object_x
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->object_x, 0)) {
    semmap_interfaces__srv__SemanticMap_Response__fini(msg);
    return false;
  }
  // object_y
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->object_y, 0)) {
    semmap_interfaces__srv__SemanticMap_Response__fini(msg);
    return false;
  }
  // object_elevation
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->object_elevation, 0)) {
    semmap_interfaces__srv__SemanticMap_Response__fini(msg);
    return false;
  }
  return true;
}

void
semmap_interfaces__srv__SemanticMap_Response__fini(semmap_interfaces__srv__SemanticMap_Response * msg)
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
  // object_tags
  rosidl_runtime_c__String__Sequence__fini(&msg->object_tags);
  // object_x
  rosidl_runtime_c__int32__Sequence__fini(&msg->object_x);
  // object_y
  rosidl_runtime_c__int32__Sequence__fini(&msg->object_y);
  // object_elevation
  rosidl_runtime_c__int32__Sequence__fini(&msg->object_elevation);
}

bool
semmap_interfaces__srv__SemanticMap_Response__are_equal(const semmap_interfaces__srv__SemanticMap_Response * lhs, const semmap_interfaces__srv__SemanticMap_Response * rhs)
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
  // object_tags
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->object_tags), &(rhs->object_tags)))
  {
    return false;
  }
  // object_x
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->object_x), &(rhs->object_x)))
  {
    return false;
  }
  // object_y
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->object_y), &(rhs->object_y)))
  {
    return false;
  }
  // object_elevation
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->object_elevation), &(rhs->object_elevation)))
  {
    return false;
  }
  return true;
}

bool
semmap_interfaces__srv__SemanticMap_Response__copy(
  const semmap_interfaces__srv__SemanticMap_Response * input,
  semmap_interfaces__srv__SemanticMap_Response * output)
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
  // object_tags
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->object_tags), &(output->object_tags)))
  {
    return false;
  }
  // object_x
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->object_x), &(output->object_x)))
  {
    return false;
  }
  // object_y
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->object_y), &(output->object_y)))
  {
    return false;
  }
  // object_elevation
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->object_elevation), &(output->object_elevation)))
  {
    return false;
  }
  return true;
}

semmap_interfaces__srv__SemanticMap_Response *
semmap_interfaces__srv__SemanticMap_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semmap_interfaces__srv__SemanticMap_Response * msg = (semmap_interfaces__srv__SemanticMap_Response *)allocator.allocate(sizeof(semmap_interfaces__srv__SemanticMap_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(semmap_interfaces__srv__SemanticMap_Response));
  bool success = semmap_interfaces__srv__SemanticMap_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
semmap_interfaces__srv__SemanticMap_Response__destroy(semmap_interfaces__srv__SemanticMap_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    semmap_interfaces__srv__SemanticMap_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
semmap_interfaces__srv__SemanticMap_Response__Sequence__init(semmap_interfaces__srv__SemanticMap_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semmap_interfaces__srv__SemanticMap_Response * data = NULL;

  if (size) {
    data = (semmap_interfaces__srv__SemanticMap_Response *)allocator.zero_allocate(size, sizeof(semmap_interfaces__srv__SemanticMap_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = semmap_interfaces__srv__SemanticMap_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        semmap_interfaces__srv__SemanticMap_Response__fini(&data[i - 1]);
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
semmap_interfaces__srv__SemanticMap_Response__Sequence__fini(semmap_interfaces__srv__SemanticMap_Response__Sequence * array)
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
      semmap_interfaces__srv__SemanticMap_Response__fini(&array->data[i]);
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

semmap_interfaces__srv__SemanticMap_Response__Sequence *
semmap_interfaces__srv__SemanticMap_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semmap_interfaces__srv__SemanticMap_Response__Sequence * array = (semmap_interfaces__srv__SemanticMap_Response__Sequence *)allocator.allocate(sizeof(semmap_interfaces__srv__SemanticMap_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = semmap_interfaces__srv__SemanticMap_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
semmap_interfaces__srv__SemanticMap_Response__Sequence__destroy(semmap_interfaces__srv__SemanticMap_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    semmap_interfaces__srv__SemanticMap_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
semmap_interfaces__srv__SemanticMap_Response__Sequence__are_equal(const semmap_interfaces__srv__SemanticMap_Response__Sequence * lhs, const semmap_interfaces__srv__SemanticMap_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!semmap_interfaces__srv__SemanticMap_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
semmap_interfaces__srv__SemanticMap_Response__Sequence__copy(
  const semmap_interfaces__srv__SemanticMap_Response__Sequence * input,
  semmap_interfaces__srv__SemanticMap_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(semmap_interfaces__srv__SemanticMap_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    semmap_interfaces__srv__SemanticMap_Response * data =
      (semmap_interfaces__srv__SemanticMap_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!semmap_interfaces__srv__SemanticMap_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          semmap_interfaces__srv__SemanticMap_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!semmap_interfaces__srv__SemanticMap_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
