#pragma once
#include "Id.h"

Id::Id(std::string name , int num)
	:Function(name, num)
{
}

void Id::Operation()
{
	std::string str;
	std::cin >> str;
	std::cout << "Id(" << str << ") = " << str << std::endl;
}
