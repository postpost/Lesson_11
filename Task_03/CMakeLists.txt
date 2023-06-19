cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(Leaver)

include_directories(Lib)
set(SOURCES_EXE main.cpp)
add_executable(Leaver ${SOURCES_EXE})

add_subdirectory(Lib)
target_link_libraries(Leaver leave_dll)

