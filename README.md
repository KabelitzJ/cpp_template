# C++ project template using CMake

## Table of contents
- [Description](#description)
- [Prerequisites](#prerequisites)
  - [Install CMake](#install-cmake)
  - [Install MinGW using MSYS2](#install-mingw-using-msys2)
    - [Install g++ toolchain](#install-g-toolchain)
    - [Update compiler path](#update-compiler-path)
- [Change project name](#change-project-name)
- [Change license](#change-license)
- [Generate project](#generate-project)
- [Build project](#build-project)
- [Run project](#run-project)
- [Adding new source files](#adding-new-source-files)

## Description

This is a simple C++ project template using CMake. It is a good starting point for new projects.

## Prerequisites 

### Install CMake

Download and install CMake from the official website [https://cmake.org/download/](https://cmake.org/download/) and follow the instructions.

### Install MinGW using MSYS2

Download and install MSYS2 from the official website [https://www.msys2.org/](https://www.msys2.org/) and follow the instructions.

#### Install g++ toolchain

Open the MSYS2 terminal and run the following command:

```bash
pacman -S mingw-w64-x86_64-toolchain
```

#### Update compiler path

Inside `.vscode/c_cpp_properties.json` file, update the `compilerPath` property to the path where the `g++.exe` is located. For example:

```json
"compilerPath": "D:/msys64/mingw64/bin/g++.exe",
```

## Change project name

Change the following line in `CMakeLists.txt:7` file:

```cmake
project(cpp_template VERSION 0.1.0 LANGUAGES CXX)
```
to

```cmake
project(YOUR_APP_NAME VERSION 0.1.0 LANGUAGES CXX)
```

`YOUR_APP_NAME` will be the name of your executable.

You will also have to change the `program` propery in `.vscode/launch.json` file:

```json
"program": "${workspaceRoot}/build/bin/cpp_template.exe",
```

to

```json
"program": "${workspaceRoot}/build/bin/YOUR_APP_NAME.exe",
```

to be able to debug your executable.

## Change license

Change your name in the `LICENSE` file:

```text
Copyright (c) 2024 <your_name>
```

or change the license to another one. For a list of open source licenses, visit the [open source initiative](https://opensource.org/licenses).
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
.\build\bin\YOUR_APP_NAME.exe
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
