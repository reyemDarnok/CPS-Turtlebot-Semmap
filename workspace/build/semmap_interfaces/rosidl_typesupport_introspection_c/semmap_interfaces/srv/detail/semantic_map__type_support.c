// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from semmap_interfaces:srv/SemanticMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "semmap_interfaces/srv/detail/semantic_map__rosidl_typesupport_introspection_c.h"
#include "semmap_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "semmap_interfaces/srv/detail/semantic_map__functions.h"
#include "semmap_interfaces/srv/detail/semantic_map__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void semmap_interfaces__srv__SemanticMap_Request__rosidl_typesupport_introspection_c__SemanticMap_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  semmap_interfaces__srv__SemanticMap_Request__init(message_memory);
}

void semmap_interfaces__srv__SemanticMap_Request__rosidl_typesupport_introspection_c__SemanticMap_Request_fini_function(void * message_memory)
{
  semmap_interfaces__srv__SemanticMap_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember semmap_interfaces__srv__SemanticMap_Request__rosidl_typesupport_introspection_c__SemanticMap_Request_message_member_array[1] = {
  {
    "request_priority",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces__srv__SemanticMap_Request, request_priority),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers semmap_interfaces__srv__SemanticMap_Request__rosidl_typesupport_introspection_c__SemanticMap_Request_message_members = {
  "semmap_interfaces__srv",  // message namespace
  "SemanticMap_Request",  // message name
  1,  // number of fields
  sizeof(semmap_interfaces__srv__SemanticMap_Request),
  semmap_interfaces__srv__SemanticMap_Request__rosidl_typesupport_introspection_c__SemanticMap_Request_message_member_array,  // message members
  semmap_interfaces__srv__SemanticMap_Request__rosidl_typesupport_introspection_c__SemanticMap_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  semmap_interfaces__srv__SemanticMap_Request__rosidl_typesupport_introspection_c__SemanticMap_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t semmap_interfaces__srv__SemanticMap_Request__rosidl_typesupport_introspection_c__SemanticMap_Request_message_type_support_handle = {
  0,
  &semmap_interfaces__srv__SemanticMap_Request__rosidl_typesupport_introspection_c__SemanticMap_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_semmap_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, semmap_interfaces, srv, SemanticMap_Request)() {
  if (!semmap_interfaces__srv__SemanticMap_Request__rosidl_typesupport_introspection_c__SemanticMap_Request_message_type_support_handle.typesupport_identifier) {
    semmap_interfaces__srv__SemanticMap_Request__rosidl_typesupport_introspection_c__SemanticMap_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &semmap_interfaces__srv__SemanticMap_Request__rosidl_typesupport_introspection_c__SemanticMap_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "semmap_interfaces/srv/detail/semantic_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "semmap_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "semmap_interfaces/srv/detail/semantic_map__functions.h"
// already included above
// #include "semmap_interfaces/srv/detail/semantic_map__struct.h"


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

#ifdef __cplusplus
extern "C"
{
#endif

void semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__SemanticMap_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  semmap_interfaces__srv__SemanticMap_Response__init(message_memory);
}

void semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__SemanticMap_Response_fini_function(void * message_memory)
{
  semmap_interfaces__srv__SemanticMap_Response__fini(message_memory);
}

size_t semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__size_function__SemanticMap_Response__positive_and0_x(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_const_function__SemanticMap_Response__positive_and0_x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_function__SemanticMap_Response__positive_and0_x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__fetch_function__SemanticMap_Response__positive_and0_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_const_function__SemanticMap_Response__positive_and0_x(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__assign_function__SemanticMap_Response__positive_and0_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_function__SemanticMap_Response__positive_and0_x(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__resize_function__SemanticMap_Response__positive_and0_x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__size_function__SemanticMap_Response__negative_x(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_const_function__SemanticMap_Response__negative_x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_function__SemanticMap_Response__negative_x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__fetch_function__SemanticMap_Response__negative_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_const_function__SemanticMap_Response__negative_x(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__assign_function__SemanticMap_Response__negative_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_function__SemanticMap_Response__negative_x(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__resize_function__SemanticMap_Response__negative_x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__size_function__SemanticMap_Response__positive_and0_y(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_const_function__SemanticMap_Response__positive_and0_y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_function__SemanticMap_Response__positive_and0_y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__fetch_function__SemanticMap_Response__positive_and0_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_const_function__SemanticMap_Response__positive_and0_y(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__assign_function__SemanticMap_Response__positive_and0_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_function__SemanticMap_Response__positive_and0_y(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__resize_function__SemanticMap_Response__positive_and0_y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__size_function__SemanticMap_Response__negative_y(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_const_function__SemanticMap_Response__negative_y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_function__SemanticMap_Response__negative_y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__fetch_function__SemanticMap_Response__negative_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_const_function__SemanticMap_Response__negative_y(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__assign_function__SemanticMap_Response__negative_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_function__SemanticMap_Response__negative_y(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__resize_function__SemanticMap_Response__negative_y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__size_function__SemanticMap_Response__object_tags(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_const_function__SemanticMap_Response__object_tags(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_function__SemanticMap_Response__object_tags(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__fetch_function__SemanticMap_Response__object_tags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_const_function__SemanticMap_Response__object_tags(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__assign_function__SemanticMap_Response__object_tags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_function__SemanticMap_Response__object_tags(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__resize_function__SemanticMap_Response__object_tags(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__size_function__SemanticMap_Response__object_x(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_const_function__SemanticMap_Response__object_x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_function__SemanticMap_Response__object_x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__fetch_function__SemanticMap_Response__object_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_const_function__SemanticMap_Response__object_x(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__assign_function__SemanticMap_Response__object_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_function__SemanticMap_Response__object_x(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__resize_function__SemanticMap_Response__object_x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__size_function__SemanticMap_Response__object_y(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_const_function__SemanticMap_Response__object_y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_function__SemanticMap_Response__object_y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__fetch_function__SemanticMap_Response__object_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_const_function__SemanticMap_Response__object_y(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__assign_function__SemanticMap_Response__object_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_function__SemanticMap_Response__object_y(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__resize_function__SemanticMap_Response__object_y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__size_function__SemanticMap_Response__object_elevation(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_const_function__SemanticMap_Response__object_elevation(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_function__SemanticMap_Response__object_elevation(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__fetch_function__SemanticMap_Response__object_elevation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_const_function__SemanticMap_Response__object_elevation(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__assign_function__SemanticMap_Response__object_elevation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_function__SemanticMap_Response__object_elevation(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__resize_function__SemanticMap_Response__object_elevation(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__SemanticMap_Response_message_member_array[8] = {
  {
    "positive_and0_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces__srv__SemanticMap_Response, positive_and0_x),  // bytes offset in struct
    NULL,  // default value
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__size_function__SemanticMap_Response__positive_and0_x,  // size() function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_const_function__SemanticMap_Response__positive_and0_x,  // get_const(index) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_function__SemanticMap_Response__positive_and0_x,  // get(index) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__fetch_function__SemanticMap_Response__positive_and0_x,  // fetch(index, &value) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__assign_function__SemanticMap_Response__positive_and0_x,  // assign(index, value) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__resize_function__SemanticMap_Response__positive_and0_x  // resize(index) function pointer
  },
  {
    "negative_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces__srv__SemanticMap_Response, negative_x),  // bytes offset in struct
    NULL,  // default value
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__size_function__SemanticMap_Response__negative_x,  // size() function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_const_function__SemanticMap_Response__negative_x,  // get_const(index) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_function__SemanticMap_Response__negative_x,  // get(index) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__fetch_function__SemanticMap_Response__negative_x,  // fetch(index, &value) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__assign_function__SemanticMap_Response__negative_x,  // assign(index, value) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__resize_function__SemanticMap_Response__negative_x  // resize(index) function pointer
  },
  {
    "positive_and0_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces__srv__SemanticMap_Response, positive_and0_y),  // bytes offset in struct
    NULL,  // default value
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__size_function__SemanticMap_Response__positive_and0_y,  // size() function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_const_function__SemanticMap_Response__positive_and0_y,  // get_const(index) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_function__SemanticMap_Response__positive_and0_y,  // get(index) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__fetch_function__SemanticMap_Response__positive_and0_y,  // fetch(index, &value) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__assign_function__SemanticMap_Response__positive_and0_y,  // assign(index, value) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__resize_function__SemanticMap_Response__positive_and0_y  // resize(index) function pointer
  },
  {
    "negative_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces__srv__SemanticMap_Response, negative_y),  // bytes offset in struct
    NULL,  // default value
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__size_function__SemanticMap_Response__negative_y,  // size() function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_const_function__SemanticMap_Response__negative_y,  // get_const(index) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_function__SemanticMap_Response__negative_y,  // get(index) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__fetch_function__SemanticMap_Response__negative_y,  // fetch(index, &value) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__assign_function__SemanticMap_Response__negative_y,  // assign(index, value) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__resize_function__SemanticMap_Response__negative_y  // resize(index) function pointer
  },
  {
    "object_tags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces__srv__SemanticMap_Response, object_tags),  // bytes offset in struct
    NULL,  // default value
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__size_function__SemanticMap_Response__object_tags,  // size() function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_const_function__SemanticMap_Response__object_tags,  // get_const(index) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_function__SemanticMap_Response__object_tags,  // get(index) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__fetch_function__SemanticMap_Response__object_tags,  // fetch(index, &value) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__assign_function__SemanticMap_Response__object_tags,  // assign(index, value) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__resize_function__SemanticMap_Response__object_tags  // resize(index) function pointer
  },
  {
    "object_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces__srv__SemanticMap_Response, object_x),  // bytes offset in struct
    NULL,  // default value
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__size_function__SemanticMap_Response__object_x,  // size() function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_const_function__SemanticMap_Response__object_x,  // get_const(index) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_function__SemanticMap_Response__object_x,  // get(index) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__fetch_function__SemanticMap_Response__object_x,  // fetch(index, &value) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__assign_function__SemanticMap_Response__object_x,  // assign(index, value) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__resize_function__SemanticMap_Response__object_x  // resize(index) function pointer
  },
  {
    "object_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces__srv__SemanticMap_Response, object_y),  // bytes offset in struct
    NULL,  // default value
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__size_function__SemanticMap_Response__object_y,  // size() function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_const_function__SemanticMap_Response__object_y,  // get_const(index) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_function__SemanticMap_Response__object_y,  // get(index) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__fetch_function__SemanticMap_Response__object_y,  // fetch(index, &value) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__assign_function__SemanticMap_Response__object_y,  // assign(index, value) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__resize_function__SemanticMap_Response__object_y  // resize(index) function pointer
  },
  {
    "object_elevation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces__srv__SemanticMap_Response, object_elevation),  // bytes offset in struct
    NULL,  // default value
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__size_function__SemanticMap_Response__object_elevation,  // size() function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_const_function__SemanticMap_Response__object_elevation,  // get_const(index) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__get_function__SemanticMap_Response__object_elevation,  // get(index) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__fetch_function__SemanticMap_Response__object_elevation,  // fetch(index, &value) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__assign_function__SemanticMap_Response__object_elevation,  // assign(index, value) function pointer
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__resize_function__SemanticMap_Response__object_elevation  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__SemanticMap_Response_message_members = {
  "semmap_interfaces__srv",  // message namespace
  "SemanticMap_Response",  // message name
  8,  // number of fields
  sizeof(semmap_interfaces__srv__SemanticMap_Response),
  semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__SemanticMap_Response_message_member_array,  // message members
  semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__SemanticMap_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__SemanticMap_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__SemanticMap_Response_message_type_support_handle = {
  0,
  &semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__SemanticMap_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_semmap_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, semmap_interfaces, srv, SemanticMap_Response)() {
  if (!semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__SemanticMap_Response_message_type_support_handle.typesupport_identifier) {
    semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__SemanticMap_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &semmap_interfaces__srv__SemanticMap_Response__rosidl_typesupport_introspection_c__SemanticMap_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "semmap_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "semmap_interfaces/srv/detail/semantic_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers semmap_interfaces__srv__detail__semantic_map__rosidl_typesupport_introspection_c__SemanticMap_service_members = {
  "semmap_interfaces__srv",  // service namespace
  "SemanticMap",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // semmap_interfaces__srv__detail__semantic_map__rosidl_typesupport_introspection_c__SemanticMap_Request_message_type_support_handle,
  NULL  // response message
  // semmap_interfaces__srv__detail__semantic_map__rosidl_typesupport_introspection_c__SemanticMap_Response_message_type_support_handle
};

static rosidl_service_type_support_t semmap_interfaces__srv__detail__semantic_map__rosidl_typesupport_introspection_c__SemanticMap_service_type_support_handle = {
  0,
  &semmap_interfaces__srv__detail__semantic_map__rosidl_typesupport_introspection_c__SemanticMap_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, semmap_interfaces, srv, SemanticMap_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, semmap_interfaces, srv, SemanticMap_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_semmap_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, semmap_interfaces, srv, SemanticMap)() {
  if (!semmap_interfaces__srv__detail__semantic_map__rosidl_typesupport_introspection_c__SemanticMap_service_type_support_handle.typesupport_identifier) {
    semmap_interfaces__srv__detail__semantic_map__rosidl_typesupport_introspection_c__SemanticMap_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)semmap_interfaces__srv__detail__semantic_map__rosidl_typesupport_introspection_c__SemanticMap_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, semmap_interfaces, srv, SemanticMap_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, semmap_interfaces, srv, SemanticMap_Response)()->data;
  }

  return &semmap_interfaces__srv__detail__semantic_map__rosidl_typesupport_introspection_c__SemanticMap_service_type_support_handle;
}
