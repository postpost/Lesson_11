#include "rectangle.h"

Rectangle::Rectangle() {
	this->A = this->B = this->C = this->D = 90;
};

Rectangle::Rectangle(int a, int b) {
	shapeName = "�������������";
	this->a = this->c = a;
	this->b = this->d = b;
	this->A = this->B = this->C = this->D = 90;
};