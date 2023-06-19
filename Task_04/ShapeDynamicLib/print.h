#pragma once
#include "shape.h"
#include "tetragon.h"
#ifdef SHAPELIBRARYDYNAMIC_EXPORTS
#define SHAPELIBRARY_API __declspec(dllexport)
#else
#define SHAPELIBRARY_API __declspec(dllimport)
#endif // SHAPELIBRARYDYNAMIC_EXPORTS

SHAPELIBRARY_API void printInfo(Shape* shape);
//void printInfo(Tetragon* shape);