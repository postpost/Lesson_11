#include <iostream>
#include <Windows.h>
#include "Leaver.h"

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "������� ���: ";
	std::string name;
	std::cin >> name;

	Leaver leave;
	leave.leave(name);
}