#pragma once
#include "Function.h"

class Reverse :public Function
{
public:
	Reverse(std::string, int);
	void Operation(std::string str);
	std::string ChangedString(std::string str);

private:

};

