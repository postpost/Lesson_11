#pragma once
#include "shape.h"

class Tetragon :public Shape {
protected:
	int a, b, c, d;
	int A, B, C, D; 
	
public:
	Tetragon();
	Tetragon(int a, int b, int c, int d, int A, int B, int C, int D);
	int get_a();
	int get_b();
	int get_c();
	int get_d();
	int get_A();
	int get_B();
	int get_C();
	int get_D();
	void printInfo() override;
};
