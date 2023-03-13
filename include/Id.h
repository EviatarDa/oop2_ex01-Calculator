#pragma once
#include "Function.h"

class Id :public Function
{
public:
	Id(std::string);
	void Operation(std::string str);
	std::string ChangedString(std::string str);

private:

};

