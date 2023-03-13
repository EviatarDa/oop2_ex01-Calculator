#pragma once 
#include "Substr.h"

Substr::Substr(std::string name, int num, int num1, int num2)
	:Function(name, num), m_start(num1), m_end(num2)
{
}

void Substr::Operation(std::string str)
{
	std::cout << "Substr " << m_start << ", " << m_end << "(" << str << ") = " << ChangedString(str) << std::endl;
}

std::string Substr::ChangedString(std::string str)
{
	str.substr(m_start, m_end);
	return str;
}
