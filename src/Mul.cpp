#pragma once 
#include "Mul.h"

Mul::Mul(std::string name, int num, int num1, int num2, std::shared_ptr<Function> ptr)
	:Function(name, num), m_func(num1), m_amount(num2), m_ptr2func(ptr)
{
}

void Mul::Operation(std::string str)
{
	std::cout << "(" << m_ptr2func->GetName() << " * " << m_amount << ") (" << str << ") = " << ChangedString(str) << std::endl;
}

std::string Mul::ChangedString(std::string str)
{
	std::string string;
	for (int index = 0; index < m_amount; index++)
	{
		string += m_ptr2func->ChangedString(str);
	}
	return string;
}
