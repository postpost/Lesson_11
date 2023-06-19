cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project (shapes_dll)

set(SOURCES_DLL triangle.cpp triangle.h tetragon.cpp tetragon.h 
	equilateral.cpp equilateral.h isosceles.cpp isosceles.h 
	parallelogram.cpp parallelogram.h print.cpp print.h 
	rectangle.cpp rectangle.h rhombus.cpp rhombus.h 
	right_tr.cpp right_tr.h shape.cpp shape.h square.cpp square.h)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(shapes_dll ${SOURCES_DLL})	
