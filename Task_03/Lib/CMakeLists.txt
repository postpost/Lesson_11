cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(leave_dll)

set(SOURCES_DLL Leaver.cpp Leaver.h)
add_library(leave_dll SHARED ${SOURCES_DLL})

