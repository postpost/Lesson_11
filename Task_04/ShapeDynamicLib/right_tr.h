#pragma once
#include "triangle.h"
#include "shape.h"

class RightTriangle :public Triangle {
public:
	SHAPELIBRARY_API RightTriangle(int a, int b, int c, int A, int B);
};