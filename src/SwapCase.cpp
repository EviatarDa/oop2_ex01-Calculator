#pragma once
#include "SwapCase.h"

SwapCase::SwapCase(std::string name, int num)
	:Function(name, num)
{
}

void SwapCase::Operation()
{
	std::string str;
	std::cin >> str;
	std::cout << "SwapCase(" << str << ") = ";

    int ln = str.length();

    // Conversion according to ASCII values
    for (int i = 0; i < ln; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            // Convert lowercase to uppercase
            str[i] = str[i] - 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            // Convert uppercase to lowercase
            str[i] = str[i] + 32;
    }

	std::cout << str << std::endl;
}
