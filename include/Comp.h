#pragma once
#include "Function.h"

class Comp :public Function
{
public:
	Comp(std::string, std::shared_ptr<Function>, std::shared_ptr<Function>);
	void Operation(std::string str);
	std::string ChangedString(std::string str);

private:
	std::shared_ptr<Function> m_ptr2func1;
	std::shared_ptr<Function> m_ptr2func2;
};
