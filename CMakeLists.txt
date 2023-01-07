cmake_minimum_required(VERSION 3.14)  # CMake version check
project(c-plus-plus-essential-training-1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#include(FetchContent)
#FetchContent_Declare(fmt
#        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
#        GIT_TAG master
#)
#FetchContent_MakeAvailable(fmt)

find_package(PkgConfig REQUIRED)
pkg_check_modules(FMT REQUIRED IMPORTED_TARGET fmt)

set(SOURCE_FILES
        materials/Chap02/pointers.cpp
#        materials/Chap02/hello.cpp
#        materials/Chap02/statement.cpp
#        materials/Chap02/variables.cpp
#        materials/Chap02/working.cpp
        )

add_executable(c-plus-plus-essential-training-1 ${SOURCE_FILES})

target_link_libraries(c-plus-plus-essential-training-1 PUBLIC
        PkgConfig::FMT)