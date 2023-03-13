#pragma once
#include "Calculator.h"
#include "Id.h"
#include "SwapCase.h"
#include "Reverse.h"
#include "Substr.h"
#include "Mul.h"
#include "Add.h"
#include "Comp.h"


Calculator::Calculator()
{
	m_functions.push_back(std::make_shared<Id>("Id"));
	m_functions.push_back(std::make_shared<SwapCase>("SwapCase"));
	m_functions.push_back(std::make_shared<Reverse>("Reverse"));
}

void Calculator::run()
{
	while (!m_exit)
	{
		std::cout << "\nList of available string operations: " << std::endl;
		PrintFunctions();
		std::cin >> m_operation;
		switch (String2Enum())
		{
		case EVAL:
		{
			std::cin >> m_num1;
			std::string str;
			std::cin >> str;
			m_functions[m_num1]->Operation(str);

			break;
		}

		case SUBSTR:
		{
			std::cin >> m_num1 >> m_num2;
			std::string func_name = "Substr " + std::to_string(m_num1) + ", " + std::to_string(m_num2);
			m_functions.push_back(std::make_shared<Substr>(func_name , m_num1, m_num2));
			break;
		}

		case MUL:
		{
			std::cin >> m_num1 >> m_num2;
			std::string func_name =  "(" + GetP2Func(m_num2)->GetName() +  " * " + std::to_string(m_num1) + ")";
			m_functions.push_back(std::make_shared<Mul>(func_name, m_num1, GetP2Func(m_num2)));
			break;
		}

		case ADD:
		{
			std::cin >> m_num1 >> m_num2;
			std::string func_name = "(" + GetP2Func(m_num1)->GetName() + " + " + GetP2Func(m_num2)->GetName() + ")";
			m_functions.push_back(std::make_shared<Add>(func_name, GetP2Func(m_num1), GetP2Func(m_num2)));
			break;
		}

		case COMP:
		{
			std::cin >> m_num1 >> m_num2;
			std::string func_name = "(" + GetP2Func(m_num1)->GetName() + " -> " + GetP2Func(m_num2)->GetName() + ")";
			m_functions.push_back(std::make_shared<Comp>(func_name, GetP2Func(m_num1), GetP2Func(m_num2)));
			break;
		}

		case DEL:
		{
			std::cin >> m_num1;
			m_functions.erase(m_functions.begin() + m_num1);
			break;
		}

		case HELP:
			PrintHelp();
			break;

		case EXIT:
			m_exit = true;
			std::cout << "Goodbye\n";
			break;

		case BAD:
			std::cout << " Bad input, try again \n";
			break;

		default:
			break;
		}

	}
}

void Calculator::PrintFunctions()
{
	for (int index = 0; index < m_functions.size(); index++)
	{
		std::cout << index << ". " << m_functions[index]->GetName() << std::endl;
	}
	std::cout << "\n\nEnter command ('help' for the list of available commands): ";
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
	else
		return BAD;
}

void Calculator::PrintHelp() const
{
	std::cout << "The available commands are:\n\n"
		" * eval(uate) num ... - compute the result of function #num on the following\n"
		"   set(s); each set is prefixed with the count of numbers to read\n\n"
		" * uni(on) num1 num2 - Creates an operation that is the union of operation\n"
		"   #num1 and operation #num2\n\n"
		" * inter(section) num1 num2 - Creates an operation that is the intersection\n"
		"   of operation #num1 and operation #num2\n\n"
		" * diff(erence) num1 num2 - Creates an operation that is the difference of\n"
		"   operation #num1 and operation #num2\n\n"
		" * prod(uct) num1 num2 - Creates an operation that returns the product of\n"
		"   the items from the results of operation #num1 and operation #num2\n\n"
		" * comp(osite) num1 num2 - creates an operation that is the composition of\n"
		"   operation #num1 and operation #num2\n\n"
		" * del(ete) num - delete operation #num from the operation list\n\n"
		" * help - print this command list\n\n"
		" * exit - exit the program\n\n\n";
}

std::shared_ptr<Function> Calculator::GetP2Func(int num) const
{
	std::shared_ptr<Function> ptr;
	ptr = m_functions[num];
	return ptr;
}

