// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from semmap_interfaces:srv/SemanticMap.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__SRV__DETAIL__SEMANTIC_MAP__TRAITS_HPP_
#define SEMMAP_INTERFACES__SRV__DETAIL__SEMANTIC_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "semmap_interfaces/srv/detail/semantic_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace semmap_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SemanticMap_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: request_priority
  {
    out << "request_priority: ";
    rosidl_generator_traits::value_to_yaml(msg.request_priority, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SemanticMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request_priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_priority: ";
    rosidl_generator_traits::value_to_yaml(msg.request_priority, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SemanticMap_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace semmap_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use semmap_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const semmap_interfaces::srv::SemanticMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  semmap_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use semmap_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const semmap_interfaces::srv::SemanticMap_Request & msg)
{
  return semmap_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<semmap_interfaces::srv::SemanticMap_Request>()
{
  return "semmap_interfaces::srv::SemanticMap_Request";
}

template<>
inline const char * name<semmap_interfaces::srv::SemanticMap_Request>()
{
  return "semmap_interfaces/srv/SemanticMap_Request";
}

template<>
struct has_fixed_size<semmap_interfaces::srv::SemanticMap_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<semmap_interfaces::srv::SemanticMap_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<semmap_interfaces::srv::SemanticMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace semmap_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SemanticMap_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: positive_and0_x
  {
    if (msg.positive_and0_x.size() == 0) {
      out << "positive_and0_x: []";
    } else {
      out << "positive_and0_x: [";
      size_t pending_items = msg.positive_and0_x.size();
      for (auto item : msg.positive_and0_x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: negative_x
  {
    if (msg.negative_x.size() == 0) {
      out << "negative_x: []";
    } else {
      out << "negative_x: [";
      size_t pending_items = msg.negative_x.size();
      for (auto item : msg.negative_x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: positive_and0_y
  {
    if (msg.positive_and0_y.size() == 0) {
      out << "positive_and0_y: []";
    } else {
      out << "positive_and0_y: [";
      size_t pending_items = msg.positive_and0_y.size();
      for (auto item : msg.positive_and0_y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: negative_y
  {
    if (msg.negative_y.size() == 0) {
      out << "negative_y: []";
    } else {
      out << "negative_y: [";
      size_t pending_items = msg.negative_y.size();
      for (auto item : msg.negative_y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: object_tags
  {
    if (msg.object_tags.size() == 0) {
      out << "object_tags: []";
    } else {
      out << "object_tags: [";
      size_t pending_items = msg.object_tags.size();
      for (auto item : msg.object_tags) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: object_x
  {
    if (msg.object_x.size() == 0) {
      out << "object_x: []";
    } else {
      out << "object_x: [";
      size_t pending_items = msg.object_x.size();
      for (auto item : msg.object_x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: object_y
  {
    if (msg.object_y.size() == 0) {
      out << "object_y: []";
    } else {
      out << "object_y: [";
      size_t pending_items = msg.object_y.size();
      for (auto item : msg.object_y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: object_elevation
  {
    if (msg.object_elevation.size() == 0) {
      out << "object_elevation: []";
    } else {
      out << "object_elevation: [";
      size_t pending_items = msg.object_elevation.size();
      for (auto item : msg.object_elevation) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SemanticMap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: positive_and0_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.positive_and0_x.size() == 0) {
      out << "positive_and0_x: []\n";
    } else {
      out << "positive_and0_x:\n";
      for (auto item : msg.positive_and0_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: negative_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.negative_x.size() == 0) {
      out << "negative_x: []\n";
    } else {
      out << "negative_x:\n";
      for (auto item : msg.negative_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: positive_and0_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.positive_and0_y.size() == 0) {
      out << "positive_and0_y: []\n";
    } else {
      out << "positive_and0_y:\n";
      for (auto item : msg.positive_and0_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: negative_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.negative_y.size() == 0) {
      out << "negative_y: []\n";
    } else {
      out << "negative_y:\n";
      for (auto item : msg.negative_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: object_tags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_tags.size() == 0) {
      out << "object_tags: []\n";
    } else {
      out << "object_tags:\n";
      for (auto item : msg.object_tags) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: object_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_x.size() == 0) {
      out << "object_x: []\n";
    } else {
      out << "object_x:\n";
      for (auto item : msg.object_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: object_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_y.size() == 0) {
      out << "object_y: []\n";
    } else {
      out << "object_y:\n";
      for (auto item : msg.object_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: object_elevation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_elevation.size() == 0) {
      out << "object_elevation: []\n";
    } else {
      out << "object_elevation:\n";
      for (auto item : msg.object_elevation) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SemanticMap_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace semmap_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use semmap_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const semmap_interfaces::srv::SemanticMap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  semmap_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use semmap_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const semmap_interfaces::srv::SemanticMap_Response & msg)
{
  return semmap_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<semmap_interfaces::srv::SemanticMap_Response>()
{
  return "semmap_interfaces::srv::SemanticMap_Response";
}

template<>
inline const char * name<semmap_interfaces::srv::SemanticMap_Response>()
{
  return "semmap_interfaces/srv/SemanticMap_Response";
}

template<>
struct has_fixed_size<semmap_interfaces::srv::SemanticMap_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<semmap_interfaces::srv::SemanticMap_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<semmap_interfaces::srv::SemanticMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<semmap_interfaces::srv::SemanticMap>()
{
  return "semmap_interfaces::srv::SemanticMap";
}

template<>
inline const char * name<semmap_interfaces::srv::SemanticMap>()
{
  return "semmap_interfaces/srv/SemanticMap";
}

template<>
struct has_fixed_size<semmap_interfaces::srv::SemanticMap>
  : std::integral_constant<
    bool,
    has_fixed_size<semmap_interfaces::srv::SemanticMap_Request>::value &&
    has_fixed_size<semmap_interfaces::srv::SemanticMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<semmap_interfaces::srv::SemanticMap>
  : std::integral_constant<
    bool,
    has_bounded_size<semmap_interfaces::srv::SemanticMap_Request>::value &&
    has_bounded_size<semmap_interfaces::srv::SemanticMap_Response>::value
  >
{
};

template<>
struct is_service<semmap_interfaces::srv::SemanticMap>
  : std::true_type
{
};

template<>
struct is_service_request<semmap_interfaces::srv::SemanticMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<semmap_interfaces::srv::SemanticMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SEMMAP_INTERFACES__SRV__DETAIL__SEMANTIC_MAP__TRAITS_HPP_
