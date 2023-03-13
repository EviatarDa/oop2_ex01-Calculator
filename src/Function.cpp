#pragma once
#include "Function.h"

Function::Function(std::string name, int num)
	:m_number(num), m_name(name)
{
}

int Function::GetNumber() const
{
	return m_number;
}

void Function::SetNumber(int num)
{
	m_number = num;
}

std::string Function::GetName()
{
	return m_name;
}
