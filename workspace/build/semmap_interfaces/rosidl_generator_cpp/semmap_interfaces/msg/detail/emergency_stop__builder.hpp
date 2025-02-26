// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from semmap_interfaces:msg/EmergencyStop.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__MSG__DETAIL__EMERGENCY_STOP__BUILDER_HPP_
#define SEMMAP_INTERFACES__MSG__DETAIL__EMERGENCY_STOP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "semmap_interfaces/msg/detail/emergency_stop__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace semmap_interfaces
{

namespace msg
{

namespace builder
{

class Init_EmergencyStop_solvable_by_backup
{
public:
  explicit Init_EmergencyStop_solvable_by_backup(::semmap_interfaces::msg::EmergencyStop & msg)
  : msg_(msg)
  {}
  ::semmap_interfaces::msg::EmergencyStop solvable_by_backup(::semmap_interfaces::msg::EmergencyStop::_solvable_by_backup_type arg)
  {
    msg_.solvable_by_backup = std::move(arg);
    return std::move(msg_);
  }

private:
  ::semmap_interfaces::msg::EmergencyStop msg_;
};

class Init_EmergencyStop_cause
{
public:
  Init_EmergencyStop_cause()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EmergencyStop_solvable_by_backup cause(::semmap_interfaces::msg::EmergencyStop::_cause_type arg)
  {
    msg_.cause = std::move(arg);
    return Init_EmergencyStop_solvable_by_backup(msg_);
  }

private:
  ::semmap_interfaces::msg::EmergencyStop msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::semmap_interfaces::msg::EmergencyStop>()
{
  return semmap_interfaces::msg::builder::Init_EmergencyStop_cause();
}

}  // namespace semmap_interfaces

#endif  // SEMMAP_INTERFACES__MSG__DETAIL__EMERGENCY_STOP__BUILDER_HPP_
