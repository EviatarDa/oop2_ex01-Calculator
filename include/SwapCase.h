#pragma once
#include "Function.h"

class SwapCase :public Function
{
public:
	SwapCase(std::string);
	void Operation(std::string str);
	std::string ChangedString(std::string str);

private:

};

