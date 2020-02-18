cmake_minimum_required(VERSION 3.5)

project(gtest_example)

set(CMAKE_CXX_EXTENSIONS OFF)

include(CTest)

add_subdirectory(external)
add_subdirectory(src)
add_subdirectory(tests)

