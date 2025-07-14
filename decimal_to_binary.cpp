//
// Created by AnasJ on 13/07/2025.
//
#include "decimal_to_binary.h"
#include <string>

std::string decimal_to_binary(int decimal)
{
    std::string binary;
    bool isNegative = false;
    if (decimal < 0)
    {
        decimal *= -1;
        isNegative = true;
    }

    while (decimal > 0)
    {
        binary += std::to_string(decimal % 2);
        decimal /= 2;
    }

    // Reverse the string to get the correct binary representation
    size_t binary_length = binary.length(); //size_t used because it can hold the maximum size of an object
    std::string reversed_binary;
    while (binary_length > 0)
    {
        reversed_binary += binary[binary_length - 1];
        binary_length--;
    }
    if (isNegative)
    {
        reversed_binary.insert(reversed_binary.begin(), '0');
        for (int i = 0; i < reversed_binary.length(); i++)
        {
            reversed_binary[i] = (reversed_binary[i] == '0') ? '1' : '0';
        }
        int carry = 1;
        //static_cast<int> used to convert size_t to int for the loop index
        for (int i = static_cast<int>(reversed_binary.length()) - 1; i >= 0 && carry; --i)
        {
            if (reversed_binary[i] == '0')
            {
                reversed_binary[i] = '1';
                carry = 0;
            }
            else
            {
                reversed_binary[i] = '0';
                carry = 1;
            }
        }
        if (carry)
        {
            reversed_binary.insert(reversed_binary.begin(), '1');
        }
        return reversed_binary;
    }
    return binary.empty() ? "0" : reversed_binary;
}
