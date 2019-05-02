cmake_minimum_required (VERSION 3.14)

project (Triangles)

set (CMAKE_CXX_FLAGS_RELEASE "/MT")
set (CMAKE_CXX_FLAGS_DEBUG "/MTd")

add_subdirectory(source)
add_subdirectory(tests)

add_executable(Main main.cpp)

