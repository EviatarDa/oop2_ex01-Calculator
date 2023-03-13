#pragma once
#include "Id.h"

Id::Id(std::string name , int num)
	:Function(name, num)
{
}

void Id::Operation(std::string str)
{
	std::cout << "Id(" << str << ") = " << ChangedString(str) << std::endl;
}

std::string Id::ChangedString(std::string str)
{
	return str;
}
