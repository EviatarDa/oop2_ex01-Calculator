#pragma once 
#include "Add.h"

Add::Add(std::string name, std::shared_ptr<Function> ptr1, std::shared_ptr<Function> ptr2)
	:Function(name) , m_ptr2func1(ptr1), m_ptr2func2(ptr2)
{
}

void Add::Operation(std::string str)
{
	std::cout << "(" << m_name << ")" << "(" << str << ") = " << ChangedString(str) << std::endl;

}

std::string Add::ChangedString(std::string str)
{
	std::string string;
	string = m_ptr2func1->ChangedString(str) + m_ptr2func2->ChangedString(str);
	return string;
}
