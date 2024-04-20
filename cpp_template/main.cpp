#include <cpp_template/main.hpp>

#include <iostream>

namespace cpp_template {

auto say_hello(const std::string& name) -> void {
  std::cout << "Hello, " << name << "!" << std::endl;
}

}; // namespace cpp_template

auto main(int argc, char** argv) -> int {
  if (argc < 2) {
    cpp_template::say_hello("World");
  } else {
    cpp_template::say_hello(argv[1]);
  }

  return 0;
}
