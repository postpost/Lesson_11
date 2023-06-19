#pragma once
#include <string>
#ifndef SHAPELIBRARYDYNAMIC_EXPORTS
#define SHAPELIBRARY_API __declspec(dllexport)
#else
#define SHAPELIBRARY_API __declspec(dllimport)
#endif // SHAPELIBRARYDYNAMIC_EXPORTS

class Shape {
protected:
	std::string shapeName;
	
public:
	SHAPELIBRARY_API Shape();
	SHAPELIBRARY_API std::string get_name();
	SHAPELIBRARY_API virtual void printInfo();
};
