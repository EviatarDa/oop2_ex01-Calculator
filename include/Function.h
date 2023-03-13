#pragma once
#include <iostream>

class Function
{
public:
	Function(std::string, int);
	int GetNumber() const;
	void SetNumber(int);
	std::string GetName();
	virtual void Operation() override;

private:
	std::string m_name;
	int m_number;
};