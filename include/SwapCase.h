#pragma once
#include "Function.h"

class SwapCase :public Function
{
public:
	SwapCase(std::string, int);
	void Operation(std::string str);
	std::string ChangedString(std::string str);

private:

};

