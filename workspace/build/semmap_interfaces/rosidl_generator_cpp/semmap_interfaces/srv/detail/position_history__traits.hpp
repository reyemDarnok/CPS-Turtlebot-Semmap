// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from semmap_interfaces:srv/PositionHistory.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__SRV__DETAIL__POSITION_HISTORY__TRAITS_HPP_
#define SEMMAP_INTERFACES__SRV__DETAIL__POSITION_HISTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "semmap_interfaces/srv/detail/position_history__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace semmap_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PositionHistory_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PositionHistory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PositionHistory_Request & msg, bool use_flow_style = false)
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
  const semmap_interfaces::srv::PositionHistory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  semmap_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use semmap_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const semmap_interfaces::srv::PositionHistory_Request & msg)
{
  return semmap_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<semmap_interfaces::srv::PositionHistory_Request>()
{
  return "semmap_interfaces::srv::PositionHistory_Request";
}

template<>
inline const char * name<semmap_interfaces::srv::PositionHistory_Request>()
{
  return "semmap_interfaces/srv/PositionHistory_Request";
}

template<>
struct has_fixed_size<semmap_interfaces::srv::PositionHistory_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<semmap_interfaces::srv::PositionHistory_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<semmap_interfaces::srv::PositionHistory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace semmap_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PositionHistory_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    if (msg.x.size() == 0) {
      out << "x: []";
    } else {
      out << "x: [";
      size_t pending_items = msg.x.size();
      for (auto item : msg.x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: y
  {
    if (msg.y.size() == 0) {
      out << "y: []";
    } else {
      out << "y: [";
      size_t pending_items = msg.y.size();
      for (auto item : msg.y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rotation
  {
    if (msg.rotation.size() == 0) {
      out << "rotation: []";
    } else {
      out << "rotation: [";
      size_t pending_items = msg.rotation.size();
      for (auto item : msg.rotation) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: timestamp
  {
    if (msg.timestamp.size() == 0) {
      out << "timestamp: []";
    } else {
      out << "timestamp: [";
      size_t pending_items = msg.timestamp.size();
      for (auto item : msg.timestamp) {
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
  const PositionHistory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x.size() == 0) {
      out << "x: []\n";
    } else {
      out << "x:\n";
      for (auto item : msg.x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.y.size() == 0) {
      out << "y: []\n";
    } else {
      out << "y:\n";
      for (auto item : msg.y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rotation.size() == 0) {
      out << "rotation: []\n";
    } else {
      out << "rotation:\n";
      for (auto item : msg.rotation) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.timestamp.size() == 0) {
      out << "timestamp: []\n";
    } else {
      out << "timestamp:\n";
      for (auto item : msg.timestamp) {
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

inline std::string to_yaml(const PositionHistory_Response & msg, bool use_flow_style = false)
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
  const semmap_interfaces::srv::PositionHistory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  semmap_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use semmap_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const semmap_interfaces::srv::PositionHistory_Response & msg)
{
  return semmap_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<semmap_interfaces::srv::PositionHistory_Response>()
{
  return "semmap_interfaces::srv::PositionHistory_Response";
}

template<>
inline const char * name<semmap_interfaces::srv::PositionHistory_Response>()
{
  return "semmap_interfaces/srv/PositionHistory_Response";
}

template<>
struct has_fixed_size<semmap_interfaces::srv::PositionHistory_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<semmap_interfaces::srv::PositionHistory_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<semmap_interfaces::srv::PositionHistory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<semmap_interfaces::srv::PositionHistory>()
{
  return "semmap_interfaces::srv::PositionHistory";
}

template<>
inline const char * name<semmap_interfaces::srv::PositionHistory>()
{
  return "semmap_interfaces/srv/PositionHistory";
}

template<>
struct has_fixed_size<semmap_interfaces::srv::PositionHistory>
  : std::integral_constant<
    bool,
    has_fixed_size<semmap_interfaces::srv::PositionHistory_Request>::value &&
    has_fixed_size<semmap_interfaces::srv::PositionHistory_Response>::value
  >
{
};

template<>
struct has_bounded_size<semmap_interfaces::srv::PositionHistory>
  : std::integral_constant<
    bool,
    has_bounded_size<semmap_interfaces::srv::PositionHistory_Request>::value &&
    has_bounded_size<semmap_interfaces::srv::PositionHistory_Response>::value
  >
{
};

template<>
struct is_service<semmap_interfaces::srv::PositionHistory>
  : std::true_type
{
};

template<>
struct is_service_request<semmap_interfaces::srv::PositionHistory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<semmap_interfaces::srv::PositionHistory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SEMMAP_INTERFACES__SRV__DETAIL__POSITION_HISTORY__TRAITS_HPP_
