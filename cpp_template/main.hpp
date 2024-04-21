#ifndef MAIN_HPP_
#define MAIN_HPP_

#include <string>

namespace cpp_template {

/**
 * @brief Say hello to the given name.
 * 
 * @param name The name to say hello to.
 */
auto say_hello(const std::string& name) -> void;

}; // namespace cpp_template

/**
 * @brief The main function.
 * 
 * @param argc The number of command line arguments.
 * @param argv The command line arguments.
 * 
 * @return int The exit code.
 */
auto main(int argc, char** argv) -> int;

#endif // MAIN_HPP_
