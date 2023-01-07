cmake_minimum_required(VERSION 3.14)  # CMake version check
project(c-plus-plus-essential-training-1)

# set standard c++ version to c++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# use FetchContent to download fmt library
#include(FetchContent)
#FetchContent_Declare(fmt
#        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
#        GIT_TAG master
#)
#FetchContent_MakeAvailable(fmt)

# us pkg-config to locate a preinstalled fmt library
# find pkg-config, make sure it's installed
find_package(PkgConfig REQUIRED)
# find fmt, make sure it's installed
pkg_check_modules(FMT REQUIRED IMPORTED_TARGET fmt)

# set the source files, only one file with main() method is allowed
set(SOURCE_FILES materials/Chap03/for.cpp)

# add the executable files to the project
add_executable(c-plus-plus-essential-training-1 ${SOURCE_FILES})

# use pkg-config to get the cflags and libs for fmt
target_link_libraries(c-plus-plus-essential-training-1 PUBLIC
        PkgConfig::FMT)