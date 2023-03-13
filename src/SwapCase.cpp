#pragma once
#include "SwapCase.h"

SwapCase::SwapCase(std::string name, int num)
	:Function(name, num)
{
}

void SwapCase::Operation(std::string str)
{
	std::cout << "SwapCase(" << str << ") = " << ChangedString(str) << std::endl;
}

std::string SwapCase::ChangedString(std::string str)
{
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
    return str;
}
