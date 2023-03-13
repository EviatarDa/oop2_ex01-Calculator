#pragma once 
#include "Function.h"

class Substr :public Function
{
public:
	Substr(std::string, int, int);
	void Operation(std::string str);
	std::string ChangedString(std::string str);


private:
	int m_start;
	int m_end;
};

