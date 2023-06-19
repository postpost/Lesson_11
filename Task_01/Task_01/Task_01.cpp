#include <iostream>
#include "Greater.h"
#include <Windows.h>

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Greater greet;
	std::cout << "¬ведите им€: ";
	std::string name;
	std::cin >> name;
	greet.greater(name);
}

