#pragma once

#include <vector>
#include "Function.h"
#include <string>
enum Functions { EVAL, SUBSTR, MUL, ADD, COMP, DEL, HELP, EXIT, BAD };

class Calculator
{
public:
	Calculator();
	void run();
	void PrintFunctions();

private:
	std::vector <std::shared_ptr <Function> > m_functions;
	bool m_exit = false;
	std::string m_operation;
	int m_num1 = -1;
	int m_num2 = -1;
	enum Functions String2Enum() const;

	//functions:
	void PrintHelp() const;
	std::shared_ptr<Function> GetP2Func(int) const;

};