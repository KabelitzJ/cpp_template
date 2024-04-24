[![Static Badge](https://img.shields.io/badge/Language-C++20-blue?logo=c%2B%2B&logoColor=blue)](https://isocpp.org/)
[![Version: 0.1.0](https://img.shields.io/badge/Version-0.1.0-red?logo=git)](https://github.com/KabelitzJ/sandbox/releases/tag/v0.1.0)
[![Static Badge](https://img.shields.io/badge/License-MIT-green?logo=opensourceinitiative&logoColor=green)](https://opensource.org/licenses/MIT)

# C++ project template using CMake

## 📑 Table of contents
- [1. 📄 Description](#1--description)
- [2. 🛠️ Prerequisites](#2-️-prerequisites)
  - [2.1 Install CMake](#21-install-cmake)
  - [2.2 Install MinGW using MSYS2](#22-install-mingw-using-msys2)
    - [2.2.1 Install g++ toolchain](#221-install-g-toolchain)
    - [2.2.2 Update compiler path](#222-update-compiler-path)
- [3. ✏️ Change project name](#3-️-change-project-name)
- [4. ⚖️ Change license](#4-️-change-license)
- [5. ⚙️ Generate project](#5-️-generate-project)
- [6. 🏗️ Build project](#6-️-build-project)
- [7. ▶️ Run project](#7-️-run-project)
- [8. 📁 Adding new source files](#8--adding-new-source-files)

## 1. 📄 Description

This is a simple C++ project template using CMake. It is a good starting point for new projects.
It provides a step-by-step guide on how to generate, build, and run a C++ project using CMake inclusing any prerequisites needed.

## 2. 🛠️ Prerequisites 

### 2.1 Install CMake

Download and install CMake from the official website [https://cmake.org/download/](https://cmake.org/download/) and follow the instructions.

### 2.2 Install MinGW using MSYS2

Download and install MSYS2 from the official website [https://www.msys2.org/](https://www.msys2.org/) and follow the instructions.

#### 2.2.1 Install g++ toolchain

Open the MSYS2 terminal and run the following command:

```bash
pacman -S mingw-w64-x86_64-toolchain
```

#### 2.2.2 Update compiler path

Inside `.vscode/c_cpp_properties.json` file, update the `compilerPath` property to the path where the `g++.exe` is located. For example:

```json
"compilerPath": "D:/msys64/mingw64/bin/g++.exe",
```

## 3. ✏️ Change project name

Rename the `cpp_template` directory and the files inside it to `YOUR_APP_NAME`.

Change the following line in `YOUR_APP_NAME/CMakeLists.txt` file:

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

## 4. ⚖️ Change license

Change your name in the `LICENSE` file:

```text
Copyright (c) 2024 <your_name>
```

## 5. ⚙️ Generate project

```bash
cmake . -B .\build\  -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Debug
```

## 6. 🏗️ Build project

```bash
cmake --build .\build\
```

## 7. ▶️ Run project

```bash
.\build\bin\YOUR_APP_NAME.exe
```

## 8. 📁 Adding new source files

Add the following line in `YOUR_APP_NAME/CMakeLists.txt:` file:

```cmake
target_sources(
  ${PROJECT_NAME}
  PUBLIC
    "${PROJECT_SOURCE_DIR}/${PROJECT_NAME}/YOUR_APP_NAME.hpp"
    "${PROJECT_SOURCE_DIR}/${PROJECT_NAME}/NEW_FILE.hpp" <==
  PRIVATE
    "${PROJECT_SOURCE_DIR}/${PROJECT_NAME}/YOUR_APP_NAME.cpp"
    "${PROJECT_SOURCE_DIR}/${PROJECT_NAME}/NEW_FILE.cpp" <==
)
```

## 9. 📝 Adding tests

Add the following to `tests/tests.cpp` file:

```cpp
TEST(cpp_template_add, test_name) {
  EXPECT_EQ(something, something_else);
  EXPECT_NE(something, something_different);
}
```
