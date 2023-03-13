#pragma once
#include <iostream>

class Function
{
public:
	Function(std::string);
	virtual ~Function() = default;
	std::string GetName() const;
	virtual void Operation(std::string str) = 0;
	virtual std::string ChangedString (std::string str) = 0;

protected:
	std::string m_name;

};