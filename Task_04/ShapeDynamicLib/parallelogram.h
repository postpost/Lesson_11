#pragma once
#include "tetragon.h"
#ifndef SHAPELIBRARYDYNAMIC_EXPORTS
#define SHAPELIBRARY_API __declspec(dllexport)
#else
#define SHAPELIBRARY_API __declspec(dllimport)
#endif // SHAPELIBRARYDYNAMIC_EXPORTS

class Parallelogram :public Tetragon {
public:
	SHAPELIBRARY_API Parallelogram(int a, int b, int A, int B);
};
