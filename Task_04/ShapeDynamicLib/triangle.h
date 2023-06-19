#pragma once
#include "shape.h"
#ifndef SHAPELIBRARYDYNAMIC_EXPORTS
#define SHAPELIBRARY_API __declspec(dllexport)
#else
#define SHAPELIBRARY_API __declspec(dllimport)
#endif // SHAPELIBRARYDYNAMIC_EXPORTS

class Triangle :public Shape {
protected:
	int a, b, c;
	int A, B, C;
public:
	SHAPELIBRARY_API Triangle();
	SHAPELIBRARY_API Triangle(int a, int b, int c, int A, int B, int C);
	SHAPELIBRARY_API int get_a() ;
	SHAPELIBRARY_API int get_b() ;
	SHAPELIBRARY_API int get_c() ;
	SHAPELIBRARY_API int get_A() ;
	SHAPELIBRARY_API int get_B() ;
	SHAPELIBRARY_API int get_C() ;
	SHAPELIBRARY_API void printInfo() override;
};


