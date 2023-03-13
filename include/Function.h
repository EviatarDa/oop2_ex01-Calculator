#pragma once
#include <iostream>

class Function
{
public:
	Function(std::string, int);
	int GetNumber() const;
	void SetNumber(int);
	std::string GetName() const;
	virtual void Operation(std::string str) = 0;
	virtual std::string ChangedString (std::string str) = 0;

private:
	std::string m_name;
	int m_number;
};