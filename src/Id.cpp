#pragma once
#include "Id.h"

Id::Id(std::string name)
	:Function(name)
{
}

void Id::Operation(std::string str)
{
	std::cout << m_name << "(" << str << ") = " << ChangedString(str) << std::endl;
}

std::string Id::ChangedString(std::string str)
{
	return str;
}
