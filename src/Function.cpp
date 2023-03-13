#pragma once
#include "Function.h"

Function::Function(std::string name)
	:m_name(name)
{
}

std::string Function::GetName() const
{
	return m_name;
}
