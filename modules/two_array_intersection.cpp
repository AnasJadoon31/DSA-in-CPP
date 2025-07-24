//
// Created by AnasJ on 16/07/2025.
//

#include "two_array_intersection.h"

#include <iostream>

void two_array_intersection(int const arr1[], int const arr2[], int const arr1_size, int const arr2_size)
{
    for (int i = 0; i < arr1_size; i++)
    {
        for (int j = 0; j < arr2_size; j++)
        {
            if (arr1[i] == arr2[j])
            {
                std::cout << "Intersection found: " << arr1[i] << std::endl;
                break; // To avoid printing duplicates
            }
        }
    }
}
