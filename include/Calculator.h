#pragma once

#include <iostream>
#include <vector>

class Calculator
{
public:
	Calculator();

private:
	std::vector <std::shared_ptr <int> > m_functions;
};