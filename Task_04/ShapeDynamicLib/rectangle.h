#pragma once
#include "tetragon.h"
#include "shape.h"

class Rectangle :public Tetragon {
public:
	SHAPELIBRARY_API Rectangle();
	SHAPELIBRARY_API Rectangle(int a, int b);
};
