#pragma once
#include <iostream>

#ifndef LEAVELIBRARYDYNAMIC_EXPORTS
#define LEAVELIBRARY_API __declspec(dllexport)
#else LEAVELIBRARY_API __declspec(dllimport)

#endif // LEAVELIBRARYDYNAMIC_EXPORTS

class Leaver {
public:
	LEAVELIBRARY_API void leave(std:: string name);
};

