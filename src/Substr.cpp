#pragma once 
#include "Substr.h"

Substr::Substr(std::string name, int num1, int num2)
	:Function(name), m_start(num1), m_end(num2)
{
}

void Substr::Operation(std::string str)
{
	std::cout << m_name << "(" << str << ") = " << ChangedString(str) << std::endl;
}

std::string Substr::ChangedString(std::string str)
{
	std::string string = str.substr(m_start, m_end);
	return string;
}
