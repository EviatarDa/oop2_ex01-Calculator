#pragma once
#include "Reverse.h"

Reverse::Reverse(std::string name, int num)
	:Function(name, num)
{
}

void Reverse::Operation()
{
	std::string str;
	std::cin >> str;

	std::cout << "Reverse(" << str << ") = ";
	
	reverse(str.begin(), str.end());
	
	std::cout << str << std::endl;
}
