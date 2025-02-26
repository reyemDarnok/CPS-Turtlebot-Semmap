// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from semmap_interfaces:srv/SemanticMap.idl
// generated code does not contain a copyright notice
#include "semmap_interfaces/srv/detail/semantic_map__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "semmap_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "semmap_interfaces/srv/detail/semantic_map__struct.h"
#include "semmap_interfaces/srv/detail/semantic_map__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SemanticMap_Request__ros_msg_type = semmap_interfaces__srv__SemanticMap_Request;

static bool _SemanticMap_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SemanticMap_Request__ros_msg_type * ros_message = static_cast<const _SemanticMap_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: request_priority
  {
    cdr << ros_message->request_priority;
  }

  return true;
}

static bool _SemanticMap_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SemanticMap_Request__ros_msg_type * ros_message = static_cast<_SemanticMap_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: request_priority
  {
    cdr >> ros_message->request_priority;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_semmap_interfaces
size_t get_serialized_size_semmap_interfaces__srv__SemanticMap_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SemanticMap_Request__ros_msg_type * ros_message = static_cast<const _SemanticMap_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name request_priority
  {
    size_t item_size = sizeof(ros_message->request_priority);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SemanticMap_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_semmap_interfaces__srv__SemanticMap_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_semmap_interfaces
size_t max_serialized_size_semmap_interfaces__srv__SemanticMap_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: request_priority
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = semmap_interfaces__srv__SemanticMap_Request;
    is_plain =
      (
      offsetof(DataType, request_priority) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SemanticMap_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_semmap_interfaces__srv__SemanticMap_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SemanticMap_Request = {
  "semmap_interfaces::srv",
  "SemanticMap_Request",
  _SemanticMap_Request__cdr_serialize,
  _SemanticMap_Request__cdr_deserialize,
  _SemanticMap_Request__get_serialized_size,
  _SemanticMap_Request__max_serialized_size
};

static rosidl_message_type_support_t _SemanticMap_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SemanticMap_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, semmap_interfaces, srv, SemanticMap_Request)() {
  return &_SemanticMap_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "semmap_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "semmap_interfaces/srv/detail/semantic_map__struct.h"
// already included above
// #include "semmap_interfaces/srv/detail/semantic_map__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // negative_x, negative_y, object_elevation, object_x, object_y, positive_and0_x, positive_and0_y
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // negative_x, negative_y, object_elevation, object_x, object_y, positive_and0_x, positive_and0_y
#include "rosidl_runtime_c/string.h"  // object_tags
#include "rosidl_runtime_c/string_functions.h"  // object_tags

// forward declare type support functions


using _SemanticMap_Response__ros_msg_type = semmap_interfaces__srv__SemanticMap_Response;

static bool _SemanticMap_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SemanticMap_Response__ros_msg_type * ros_message = static_cast<const _SemanticMap_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: positive_and0_x
  {
    size_t size = ros_message->positive_and0_x.size;
    auto array_ptr = ros_message->positive_and0_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: negative_x
  {
    size_t size = ros_message->negative_x.size;
    auto array_ptr = ros_message->negative_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: positive_and0_y
  {
    size_t size = ros_message->positive_and0_y.size;
    auto array_ptr = ros_message->positive_and0_y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: negative_y
  {
    size_t size = ros_message->negative_y.size;
    auto array_ptr = ros_message->negative_y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: object_tags
  {
    size_t size = ros_message->object_tags.size;
    auto array_ptr = ros_message->object_tags.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: object_x
  {
    size_t size = ros_message->object_x.size;
    auto array_ptr = ros_message->object_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: object_y
  {
    size_t size = ros_message->object_y.size;
    auto array_ptr = ros_message->object_y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: object_elevation
  {
    size_t size = ros_message->object_elevation.size;
    auto array_ptr = ros_message->object_elevation.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _SemanticMap_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SemanticMap_Response__ros_msg_type * ros_message = static_cast<_SemanticMap_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: positive_and0_x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->positive_and0_x.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->positive_and0_x);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->positive_and0_x, size)) {
      fprintf(stderr, "failed to create array for field 'positive_and0_x'");
      return false;
    }
    auto array_ptr = ros_message->positive_and0_x.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: negative_x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->negative_x.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->negative_x);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->negative_x, size)) {
      fprintf(stderr, "failed to create array for field 'negative_x'");
      return false;
    }
    auto array_ptr = ros_message->negative_x.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: positive_and0_y
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->positive_and0_y.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->positive_and0_y);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->positive_and0_y, size)) {
      fprintf(stderr, "failed to create array for field 'positive_and0_y'");
      return false;
    }
    auto array_ptr = ros_message->positive_and0_y.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: negative_y
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->negative_y.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->negative_y);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->negative_y, size)) {
      fprintf(stderr, "failed to create array for field 'negative_y'");
      return false;
    }
    auto array_ptr = ros_message->negative_y.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: object_tags
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->object_tags.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->object_tags);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->object_tags, size)) {
      fprintf(stderr, "failed to create array for field 'object_tags'");
      return false;
    }
    auto array_ptr = ros_message->object_tags.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'object_tags'\n");
        return false;
      }
    }
  }

  // Field name: object_x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->object_x.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->object_x);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->object_x, size)) {
      fprintf(stderr, "failed to create array for field 'object_x'");
      return false;
    }
    auto array_ptr = ros_message->object_x.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: object_y
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->object_y.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->object_y);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->object_y, size)) {
      fprintf(stderr, "failed to create array for field 'object_y'");
      return false;
    }
    auto array_ptr = ros_message->object_y.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: object_elevation
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->object_elevation.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->object_elevation);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->object_elevation, size)) {
      fprintf(stderr, "failed to create array for field 'object_elevation'");
      return false;
    }
    auto array_ptr = ros_message->object_elevation.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_semmap_interfaces
size_t get_serialized_size_semmap_interfaces__srv__SemanticMap_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SemanticMap_Response__ros_msg_type * ros_message = static_cast<const _SemanticMap_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name positive_and0_x
  {
    size_t array_size = ros_message->positive_and0_x.size;
    auto array_ptr = ros_message->positive_and0_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name negative_x
  {
    size_t array_size = ros_message->negative_x.size;
    auto array_ptr = ros_message->negative_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name positive_and0_y
  {
    size_t array_size = ros_message->positive_and0_y.size;
    auto array_ptr = ros_message->positive_and0_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name negative_y
  {
    size_t array_size = ros_message->negative_y.size;
    auto array_ptr = ros_message->negative_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_tags
  {
    size_t array_size = ros_message->object_tags.size;
    auto array_ptr = ros_message->object_tags.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name object_x
  {
    size_t array_size = ros_message->object_x.size;
    auto array_ptr = ros_message->object_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_y
  {
    size_t array_size = ros_message->object_y.size;
    auto array_ptr = ros_message->object_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_elevation
  {
    size_t array_size = ros_message->object_elevation.size;
    auto array_ptr = ros_message->object_elevation.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SemanticMap_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_semmap_interfaces__srv__SemanticMap_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_semmap_interfaces
size_t max_serialized_size_semmap_interfaces__srv__SemanticMap_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: positive_and0_x
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: negative_x
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: positive_and0_y
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: negative_y
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: object_tags
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: object_x
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: object_y
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: object_elevation
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = semmap_interfaces__srv__SemanticMap_Response;
    is_plain =
      (
      offsetof(DataType, object_elevation) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SemanticMap_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_semmap_interfaces__srv__SemanticMap_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SemanticMap_Response = {
  "semmap_interfaces::srv",
  "SemanticMap_Response",
  _SemanticMap_Response__cdr_serialize,
  _SemanticMap_Response__cdr_deserialize,
  _SemanticMap_Response__get_serialized_size,
  _SemanticMap_Response__max_serialized_size
};

static rosidl_message_type_support_t _SemanticMap_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SemanticMap_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, semmap_interfaces, srv, SemanticMap_Response)() {
  return &_SemanticMap_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "semmap_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "semmap_interfaces/srv/semantic_map.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SemanticMap__callbacks = {
  "semmap_interfaces::srv",
  "SemanticMap",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, semmap_interfaces, srv, SemanticMap_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, semmap_interfaces, srv, SemanticMap_Response)(),
};

static rosidl_service_type_support_t SemanticMap__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SemanticMap__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, semmap_interfaces, srv, SemanticMap)() {
  return &SemanticMap__handle;
}

#if defined(__cplusplus)
}
#endif
