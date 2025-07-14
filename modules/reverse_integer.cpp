//
// Created by AnasJ on 14/07/2025.
//
#include "reverse_integer.h"

#include <string>

int reverse_integer(int number)
{
    int reversed = 0;
    int digit = 0;
    while (number != 0)
    {
        digit = number % 10;
        number /= 10;

        //Check for overflow
        if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10)
        {
            return 0;
        }
        reversed = reversed * 10 + digit;
    }
    return reversed;
}
