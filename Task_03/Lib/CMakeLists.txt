cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(leave_dll)

set(SOURCES_DLL Leaver.cpp Leaver.h)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(leave_dll SHARED ${SOURCES_DLL})

