//
// Created by muhammad-anas on 7/10/25.
//
#include "prime.h"
#include <iostream>
#include <vector>

bool isPrime(int const number) {
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}


std::vector<int> primeList(int const number) {
    std::vector<int> primeNumbers;

    for (int i = 2; i <= number; i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
                primeNumbers.push_back(i);
    }
}

return
primeNumbers;
}
