//
// Created by muhammad-anas on 7/10/25.
//
#include "sod.h"

int sum_of_digits(int number) {
    int sum = 0;
    bool completed = false;
    while (!completed) {
        sum += number % 10;
        number /= 10;
        if (number == 0) {
            completed = true;
        }
    }
    return sum;
}