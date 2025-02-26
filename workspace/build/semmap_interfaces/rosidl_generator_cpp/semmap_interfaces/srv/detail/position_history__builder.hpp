// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from semmap_interfaces:srv/PositionHistory.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__SRV__DETAIL__POSITION_HISTORY__BUILDER_HPP_
#define SEMMAP_INTERFACES__SRV__DETAIL__POSITION_HISTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "semmap_interfaces/srv/detail/position_history__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace semmap_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::semmap_interfaces::srv::PositionHistory_Request>()
{
  return ::semmap_interfaces::srv::PositionHistory_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace semmap_interfaces


namespace semmap_interfaces
{

namespace srv
{

namespace builder
{

class Init_PositionHistory_Response_timestamp
{
public:
  explicit Init_PositionHistory_Response_timestamp(::semmap_interfaces::srv::PositionHistory_Response & msg)
  : msg_(msg)
  {}
  ::semmap_interfaces::srv::PositionHistory_Response timestamp(::semmap_interfaces::srv::PositionHistory_Response::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::semmap_interfaces::srv::PositionHistory_Response msg_;
};

class Init_PositionHistory_Response_rotation
{
public:
  explicit Init_PositionHistory_Response_rotation(::semmap_interfaces::srv::PositionHistory_Response & msg)
  : msg_(msg)
  {}
  Init_PositionHistory_Response_timestamp rotation(::semmap_interfaces::srv::PositionHistory_Response::_rotation_type arg)
  {
    msg_.rotation = std::move(arg);
    return Init_PositionHistory_Response_timestamp(msg_);
  }

private:
  ::semmap_interfaces::srv::PositionHistory_Response msg_;
};

class Init_PositionHistory_Response_y
{
public:
  explicit Init_PositionHistory_Response_y(::semmap_interfaces::srv::PositionHistory_Response & msg)
  : msg_(msg)
  {}
  Init_PositionHistory_Response_rotation y(::semmap_interfaces::srv::PositionHistory_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PositionHistory_Response_rotation(msg_);
  }

private:
  ::semmap_interfaces::srv::PositionHistory_Response msg_;
};

class Init_PositionHistory_Response_x
{
public:
  Init_PositionHistory_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionHistory_Response_y x(::semmap_interfaces::srv::PositionHistory_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PositionHistory_Response_y(msg_);
  }

private:
  ::semmap_interfaces::srv::PositionHistory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::semmap_interfaces::srv::PositionHistory_Response>()
{
  return semmap_interfaces::srv::builder::Init_PositionHistory_Response_x();
}

}  // namespace semmap_interfaces

#endif  // SEMMAP_INTERFACES__SRV__DETAIL__POSITION_HISTORY__BUILDER_HPP_
