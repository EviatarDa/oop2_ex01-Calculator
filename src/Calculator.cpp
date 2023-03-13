#pragma once
#include "Calculator.h"

Calculator::Calculator()
{
}

void Calculator::run()
{
	while (!m_exit)
	{
		

		std::cout << "List of available string operations: " << std::endl;
		//PrintFunctions();
		std::cin >> m_operation;
		switch (String2Enum())
		{
		case EVAL:
			std::cin >> m_num1;
			break;
		case SUBSTR:
			std::cin >> m_num1>>m_num2;
			break;
		case MUL:
			std::cin >> m_num1 >> m_num2;
			break;
		case ADD:
			std::cin >> m_num1 >> m_num2;
			break;
		case COMP:
			std::cin >> m_num1 >> m_num2;
			break;
		case DEL:
			std::cin >> m_num1;
			break;
		case HELP:
			//PrintHelp();
			break;
		case EXIT:
			m_exit = true;
			break;
		default:

		}


		if (m_operation == "eval" || m_operation == "del")
		{


		}
		else if (m_operation == "mul" || m_operation == "substr" || m_operation == "add" || m_operation == "comp")
		{

		}


		else
		{
			std::cout << "worng command\n";
		}



		
	}
}

enum Functions Calculator::String2Enum() const
{
	if (m_operation == "eval")
		return EVAL;
	else if (m_operation == "substr")
		return SUBSTR;
	else if (m_operation == "mul")
		return MUL;
	else if (m_operation == "add")
		return ADD;
	else if (m_operation == "comp")
		return COMP;
	else if (m_operation == "del")
		return DEL;
	else if (m_operation == "help")
		return HELP;
	else if (m_operation == "exit")
		return EXIT;
}

