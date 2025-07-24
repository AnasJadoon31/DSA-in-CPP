//
// Created by AnasJ on 15/07/2025.
//

#include <iostream>

#include "modules/subarrays.h"
#include "modules/binary_to_decimal.h"
#include "modules/decimal_to_binary.h"
#include "modules/ncr.h"
#include "modules/sod.h"
#include "modules/prime.h"
#include "modules/fib.h"
#include "modules/linear_search.h"
#include "modules/max_min_in_array.h"
#include "modules/max_min_swap_in_array.h"
#include "modules/moorse_algorithm.h"
#include "modules/pair_sum.h"
#include "modules/power_of_two.h"
#include "modules/reverse_array.h"
#include "modules/reverse_integer.h"
#include "modules/single_element_vector.h"
#include "modules/student.h"
#include "modules/sum_and_product_of_array.h"
#include "modules/two_array_intersection.h"
#include "modules/unique_array_value.h"

using namespace std;

// All initializations

// Task 1 - Calculate Sum of Digits
void handle_sum_of_digits() {
    int number;
    cout << "Enter a number to calculate the sum of its digits: ";
    cin >> number;
    int sum = sum_of_digits(number);
    cout << "Sum of digits: " << sum << endl;
}

// Task 2 - Calculate nCr
void handle_calculate_nCr() {
    int n, r;
    cout << "Enter n and r for nCr calculation: ";
    cin >> n >> r;
    int const ncr = nCr(n, r);
    cout << "nCr (" << n << " choose " << r << ") = " << ncr << endl;
}

void handle_prime_number_checking() {
    //Task 3- Prime Number Checking
    {
        int n;
        cout << "Enter a number to check if it is prime: ";
        cin >> n;
        if (isPrime(n)) {
            cout << n << " is a prime number" << endl;
        } else {
            cout << n << " is not a prime number" << endl;
        }
    }
}

void handle_prime_list() {
    int n;
    cout << "Enter a number to generate a list of prime numbers up to that number: ";
    cin >> n;
    vector<int> primes = primeList(n);
    cout << "Prime numbers up to " << n << ": ";
    for (int p: primes) {
        cout << p << " ";
    }
    cout << endl;
}

void handle_fib() {
    int n;
    cout << "Enter a number to calculate the nth Fibonacci ";
    cin >> n;
    cout << "Fibonacci number at position " << n << " is: ";
    cout << fib(n);
    cout << endl;
}

void handle_decimal_to_binary() {
    int decimal;
    cout << "Enter a decimal number to convert to binary: ";
    cin >> decimal;
    std::string const binary = decimal_to_binary(decimal);
    cout << "Binary representation: " << binary << endl;
}

void handle_binary_to_decimal() {
    long long binary;
    cout << "Enter a binary number to convert to decimal. Use '-' at beginning if the number is negative: ";
    cin >> binary;
    int const decimal = binary_to_decimal(binary);
    cout << "Decimal representation: " << decimal << endl;
}

void handle_bitwise_operations() {
    int a, b;
    cout << "Enter two numbers for bitwise operations: ";
    cin >> a >> b;

    // Bitwise operations first convert the numbers to binary and then perform operations on the bits
    // AND checks if both bits are 1
    cout << "Bitwise AND: " << (a & b) << endl;
    // OR checks if at least one bit is 1
    cout << "Bitwise OR: " << (a | b) << endl;
    // XOR checks if the bits are different
    cout << "Bitwise XOR: " << (a ^ b) << endl;
    // NOT inverts the bits
    cout << "Bitwise NOT of a: " << (~a) << endl;
    cout << "Bitwise NOT of b: " << (~b) << endl;
    // Left shift moves bits to the left, effectively multiplying by 2 | a*2^b
    cout << "Left Shift of a: " << (a << 1) << endl;
    // Right shift moves bits to the right, effectively dividing by 2 | a/ 2^b
    cout << "Right Shift of a: " << (a >> 1) << endl;
}

void handle_reverse_integer() {
    int number;
    cout << "Enter an integer to reverse: ";
    cin >> number;

    // Reverse the integer
    int const reversed = reverse_integer(number);
    if (reversed == 0) {
        cout << "Overflow occurred while reversing the integer." << endl;
        return;
    }
    cout << "Reversed integer: " << reversed << endl;
}

void handle_power_of_two() {
    int number;
    cout << "Enter a number to check if it is a power of 2: ";
    cin >> number;

    if (power_of_two(number)) {
        cout << number << " is a power of 2." << endl;
    } else {
        cout << number << " is not a power of 2." << endl;
    }
}

void handle_max_min_in_array() {
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    max_min_in_array(arr, size);
}

void handle_linear_search() {
    cout << "Enter the size of the array: ";
    int size, target;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    cout << "Enter the target element to search for: ";
    cin >> target;
    if (int const result = linear_search(arr, size, target); result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
}

void handle_reverse_array() {
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    reverse_array(arr, size);

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}

void handle_single_element_vector() {
    cout << "Enter size of vector: ";
    int size;
    cin >> size;
    vector<int> vec(size);
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i << ": ";
        cin >> vec[i];
    }
    cout << "Single element in vector is: " << single_element_vector(vec) << std::endl;
}

void handle_sum_and_product_of_array() {
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    sum_and_product_of_array(arr, size);
}

void handle_max_min_swap_in_array() {
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    max_min_swap_in_array(arr, size);
}

void handle_unique_array_values() {
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    unique_array_value(arr, size);
}

void handle_two_array_intersection() {
    cout << "Enter the size of the first array: ";
    int size1;
    cin >> size1;
    int arr1[size1];
    for (int i = 0; i < size1; i++) {
        cout << "Enter element " << i << " of first array: ";
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    int size2;
    cin >> size2;
    int arr2[size2];
    for (int i = 0; i < size2; i++) {
        cout << "Enter element " << i << " of second array: ";
        cin >> arr2[i];
    }

    two_array_intersection(arr1, arr2, size1, size2);
}

void handle_linear_search_vector() {
    cout << "Enter the size of the vector: ";
    int size, target;
    cin >> size;
    vector<int> vec(size);
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i << ": ";
        cin >> vec[i];
    }
    cout << "Enter the target element to search for: ";
    cin >> target;
    if (int const result = linear_search_vector(vec, target); result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the vector." << endl;
    }
}

void handle_reverse_vector() {
    cout << "Enter the size of the vector: ";
    int size;
    cin >> size;
    vector<int> vec(size);
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i << ": ";
        cin >> vec[i];
    }
    cout << "Reversing the vector..." << std::endl;
    reverse_vector(vec);
}

void handle_print_all_subarrays() {
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    print_subarrays(arr, size);
}

void handle_student_question() {
    student();
}

void handle_maximum_subarray_sum() {
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    int const max_sum = maximum_subarray_sum(arr, size);
    cout << "Maximum subarray sum is: " << max_sum << endl;
}

void handle_pair_sum() {
    cout << "Enter the size of the array: ";
    int size, target;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    cout << "Enter the target sum: ";
    cin >> target;

    vector<int> result = pair_sum(arr, target);

    for (int const num : result) {
        cout << num << ", ";
    }
}

void handle_moorse_algorithm() {
    cout << "Enter the size of the array: ";
    int size, target;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    cout << moorse_algorithm(arr);
}


