# C++ project template using CMake

## Generate project

```bash
cmake . -B .\build\  -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Debug
```

## Build project

```bash
cmake --build .\build\
```

## Run project

```bash
.\build\bin\cpp_template.exe
```
## Change executable name

Change the following line in `CMakeLists.txt:7` file:

```cmake
project(cpp_template VERSION 0.1.0 LANGUAGES CXX)
```
to

```cmake
project(YOUR_NAME VERSION 0.1.0 LANGUAGES CXX)
```
## Adding new source files

Add the following line in `CMakeLists.txt:24` file:

```cmake
target_sources(
  ${PROJECT_NAME}
  PUBLIC
    "${PROJECT_SOURCE_DIR}/${PROJECT_NAME}/main.hpp"
    "${PROJECT_SOURCE_DIR}/${PROJECT_NAME}/YOUR_FILE.hpp" <==
  PRIVATE
    "${PROJECT_SOURCE_DIR}/${PROJECT_NAME}/main.cpp"
    "${PROJECT_SOURCE_DIR}/${PROJECT_NAME}/YOUR_FILE.cpp" <==
)
```
