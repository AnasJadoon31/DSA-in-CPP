//
// Created by AnasJ on 14/07/2025.
//
#include "power_of_two.h"

bool power_of_two(int const number)
{
    if ((number > 0) && (number & (number - 1)) == 0)
    {
        return true;
    }
    return false;
}
