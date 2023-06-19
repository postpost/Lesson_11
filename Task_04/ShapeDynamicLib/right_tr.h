#pragma once
#include "triangle.h"
#ifndef SHAPELIBRARYDYNAMIC_EXPORTS
#define SHAPELIBRARY_API __declspec(dllexport)
#else
#define SHAPELIBRARY_API __declspec(dllimport)
#endif // SHAPELIBRARYDYNAMIC_EXPORTS

class RightTriangle :public Triangle {
public:
	SHAPELIBRARY_API RightTriangle(int a, int b, int c, int A, int B);
};