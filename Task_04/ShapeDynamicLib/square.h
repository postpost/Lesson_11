#pragma once
#include "rectangle.h"
#ifndef SHAPELIBRARYDYNAMIC_EXPORTS
#define SHAPELIBRARY_API __declspec(dllexport)
#else
#define SHAPELIBRARY_API __declspec(dllimport)
#endif // SHAPELIBRARYDYNAMIC_EXPORTS

class Square :public Rectangle {
public:
	
	SHAPELIBRARY_API Square(int a);
};
