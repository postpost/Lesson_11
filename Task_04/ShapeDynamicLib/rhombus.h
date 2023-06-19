#pragma once
#include "parallelogram.h"
#ifndef SHAPELIBRARYDYNAMIC_EXPORTS
#define SHAPELIBRARY_API __declspec(dllexport)
#else
#define SHAPELIBRARY_API __declspec(dllimport)
#endif // SHAPELIBRARYDYNAMIC_EXPORTS

class Rhombus : public Parallelogram {
public:
	SHAPELIBRARY_API Rhombus(int a, int A, int B);
};
