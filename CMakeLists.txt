cmake_minimum_required (VERSION 3.14)

project (Triangles LANGUAGES CXX)

set (CMAKE_CXX_FLAGS_RELEASE "/MT /Zi")
set (CMAKE_CXX_FLAGS_DEBUG "/MTd /Zi")

add_subdirectory(source)
add_subdirectory(tests)

add_executable(Main main.cpp)

