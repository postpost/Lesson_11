#pragma once
#include "triangle.h"
#ifndef SHAPELIBRARYDYNAMIC_EXPORTS
#define SHAPELIBRARY_API __declspec(dllexport)
#else
#define SHAPELIBRARY_API __declspec(dllimport)
#endif // SHAPELIBRARYDYNAMIC_EXPORTS


class Equilateral :public Triangle {
public:
	SHAPELIBRARY_API Equilateral(int a);
};
