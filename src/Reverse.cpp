#pragma once
#include "Reverse.h"

Reverse::Reverse(std::string name)
	:Function(name)
{
}

void Reverse::Operation(std::string str)
{

	std::cout <<  m_name << "(" << str << ") = " << ChangedString(str) << std::endl;
}

std::string Reverse::ChangedString(std::string str)
{
	reverse(str.begin(), str.end());
	return str;
}
