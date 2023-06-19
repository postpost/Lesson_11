cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(Shape_prj)

include_directories(Lib)
set(SOURCES_EXE main.cpp)
add_executable(Shape_prj ${SOURCES_EXE})

add_subdirectory(Lib)
target_link_libraries(Shape_prj shapes_dll)

