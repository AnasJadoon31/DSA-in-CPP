//
// Created by AnasJ on 13/07/2025.
//
#include "binary_to_decimal.h"
#include <string>

int binary_to_decimal(long long binary)
{
    int decimal = 0;
    int power = 1;

    while (binary > 0)
    {
        decimal += static_cast<int>(binary % 10) * power;
        binary /= 10;
        power *= 2;
    }

    if (binary < 0)
    {
        binary *= -1;
        int carry = 1;

        std::string binaryString = std::to_string(binary);
        for (int i = 0; i < binaryString.length(); i++)
        {
            binaryString[i] = (binaryString[i] == '0') ? '1' : '0';
        }
        for (int i = static_cast<int>(binaryString.length()) - 1; i >= 0 && carry; --i)
        {
            if (binaryString[i] == '0')
            {
                binaryString[i] = '1';
                carry = 0;
            }
            else
            {
                binaryString[i] = '0';
                carry = 1;
            }
        }
        if (carry)
        {
            binaryString.insert(binaryString.begin(), '1');
        }

        binary = std::stoi(binaryString);

        while (binary > 0)
        {
            decimal += static_cast<int>(binary % 10) * power;
            binary /= 10;
            power *= 2;
        }
        return -decimal;
    }
    return decimal;
}
