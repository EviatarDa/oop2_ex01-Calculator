#pragma once
#include "Reverse.h"

Reverse::Reverse(std::string name, int num)
	:Function(name, num)
{
}

void Reverse::Operation(std::string str)
{

	std::cout << "Reverse(" << str << ") = " << ChangedString(str) << std::endl;
}

std::string Reverse::ChangedString(std::string str)
{
	reverse(str.begin(), str.end());
	return str;
}
