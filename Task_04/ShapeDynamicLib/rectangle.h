#pragma once
#include "tetragon.h"
#ifndef SHAPELIBRARYDYNAMIC_EXPORTS
#define SHAPELIBRARY_API __declspec(dllexport)
#else
#define SHAPELIBRARY_API __declspec(dllimport)
#endif // SHAPELIBRARYDYNAMIC_EXPORTS

class Rectangle :public Tetragon {
public:
	SHAPELIBRARY_API Rectangle();
	SHAPELIBRARY_API Rectangle(int a, int b);
};
