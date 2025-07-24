//
// Created by AnasJ on 16/07/2025.
//
#include "single_element_vector.h"
#include <stdexcept>

int single_element_vector(std::vector<int> const& vec)
{
    if (vec.empty())
    {
        throw std::invalid_argument("Vector is empty");
    }
    int result = 0;
    for (int const num : vec)
    {
        result ^= num; // XOR operation to find the single element
    }

    return result;
}

// OR using nested for loop

// int single_element_vector(std::vector<int> const& vec)
// {
//     if (vec.empty())
//     {
//         throw std::invalid_argument("Vector is empty");
//     }
//     bool isDouble = false;
//     for (int i = 0; i < vec.size(); ++i)
//     {
//         for (int j = 0; j < vec.size(); ++j)
//         {
//             if (i != j && vec[i] == vec[j])
//             {
//                 isDouble = true;
//                 break;
//             }
//         }
//         if (!isDouble)
//         {
//             return vec[i]; // Return the single element
//         }
//     }
//     return NULL;
// }
