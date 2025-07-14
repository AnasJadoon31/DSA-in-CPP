#include <iostream>

#include "handlers.h"

int main()
{
    std::cout << "Welcome to the DSA series!" << std::endl;
    std::cout << "Please select a task to perform:" << std::endl;
    std::cout << "1. Sum of digits" << std::endl;
    std::cout << "2. nCr" << std::endl;
    std::cout << "3. Prime Number Checking" << std::endl;
    std::cout << "4. Prime List" << std::endl;
    std::cout << "5. Fibonacci" << std::endl;
    std::cout << "6. Decimal to Binary" << std::endl;
    std::cout << "7. Binary to Decimal" << std::endl;
    std::cout << "8. Binary Operations" << std::endl;
    std::cout << "9. Reverse Integer" << std::endl;
    std::cout << "10. Find if number is power of 2" << std::endl;
    std::cout << "11. Max and Min in Array" << std::endl;

    int task;
    std::cin >> task;
    switch (task)
    {
    case 1:
        handle_sum_of_digits();
        break;
    case 2:
        handle_calculate_nCr();
        break;
    case 3:
        handle_prime_number_checking();
        break;
    case 4:
        handle_prime_list();
        break;
    case 5:
        handle_fib();
        break;
    case 6:
        handle_decimal_to_binary();
        break;
    case 7:
        handle_binary_to_decimal();
        break;
    case 8:
        handle_bitwise_operations();
        break;
    case 9:
        handle_reverse_integer();
        break;
    case 10:
        handle_power_of_two();
        break;
    case 11:
        handle_max_min_in_array();
        break;
    default:
        std::cout << "Invalid task" << std::endl;
        break;
    }
}
