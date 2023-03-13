#pragma once


#include <vector>
#include "Function.h"
enum Functions { EVAL, SUBSTR, MUL, ADD, COMP, DEL, HELP, EXIT };

class Calculator
{
public:
	void run();


private:
	//todo change
	std::vector <std::shared_ptr <Function> > m_functions;
	bool m_exit = false;
	std::string m_operation;
	int m_num1 = -1;
	int m_num2 = -1;
	enum Functions String2Enum() const;

	//functions:
	void PrintHelp() const;

};