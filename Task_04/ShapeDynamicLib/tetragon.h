#pragma once
#include "shape.h"
#ifndef SHAPELIBRARYDYNAMIC_EXPORTS
#define SHAPELIBRARY_API __declspec(dllexport)
#else
#define SHAPELIBRARY_API __declspec(dllimport)
#endif // SHAPELIBRARYDYNAMIC_EXPORTS

class Tetragon :public Shape {
protected:
	int a, b, c, d;
	int A, B, C, D; 
	
public:
	SHAPELIBRARY_API Tetragon();
	SHAPELIBRARY_API Tetragon(int a, int b, int c, int d, int A, int B, int C, int D);
	SHAPELIBRARY_API int get_a();
	SHAPELIBRARY_API int get_b();
	SHAPELIBRARY_API int get_c();
	SHAPELIBRARY_API int get_d();
	SHAPELIBRARY_API int get_A();
	SHAPELIBRARY_API int get_B();
	SHAPELIBRARY_API int get_C();
	SHAPELIBRARY_API int get_D();
	SHAPELIBRARY_API void printInfo() override;
};
