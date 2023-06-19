#pragma once
#include "triangle.h"
#ifndef SHAPELIBRARYDYNAMIC_EXPORTS
#define SHAPELIBRARY_API __declspec(dllexport)
#else
#define SHAPELIBRARY_API __declspec(dllimport)
#endif // SHAPELIBRARYDYNAMIC_EXPORTS

class Isosceles : public Triangle {
public:
	SHAPELIBRARY_API Isosceles(int a, int b, int A, int B);
};
