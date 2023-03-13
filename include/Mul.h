#pragma once
#include "Function.h"

class Mul :public Function
{
public:
	Mul(std::string, int, std::shared_ptr<Function>);
	void Operation(std::string str);
	std::string ChangedString(std::string str);


private:
	int m_func;
	int m_amount;
	std::shared_ptr<Function> m_ptr2func;
};

