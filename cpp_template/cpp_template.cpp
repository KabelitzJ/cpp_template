#include <cpp_template/cpp_template.hpp>

namespace cpp_template {

dummy::dummy(std::uint32_t value) 
: _value(value) { }

auto dummy::value() const -> std::uint32_t {
  return _value;
}

auto dummy::set_value(std::uint32_t value) -> void {
  _value = value;
}

} // namespace cpp_template
