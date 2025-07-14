#include <iostream>

#include "modules/binary_to_decimal.h"
#include "modules/decimal_to_binary.h"
#include "modules/ncr.h"
#include "modules/sod.h"
#include "modules/prime.h"
#include "modules/fib.h"
#include "modules/power_of_two.h"
#include "modules/reverse_integer.h"

using namespace std;

// All initializations
int sum;
int ncr;

// Task 1 - Calculate Sum of Digits
void handle_sum_of_digits()
{
    int number;
    cout << "Enter a number to calculate the sum of its digits: ";
    cin >> number;
    sum = sum_of_digits(number);
    cout << "Sum of digits: " << sum << endl;
}

// Task 2 - Calculate nCr
void handle_calculate_nCr()
{
    int n, r;
    cout << "Enter n and r for nCr calculation: ";
    cin >> n >> r;
    ncr = nCr(n, r);
    cout << "nCr (" << n << " choose " << r << ") = " << ncr << endl;
}

void handle_prime_number_checking()
{
    //Task 3- Prime Number Checking
    {
        int n;
        cout << "Enter a number to check if it is prime: ";
        cin >> n;
        if (isPrime(n))
        {
            cout << n << " is a prime number" << endl;
        }
        else
        {
            cout << n << " is not a prime number" << endl;
        }
    }
}

void handle_prime_list()
{
    int n;
    cout << "Enter a number to generate a list of prime numbers up to that number: ";
    cin >> n;
    vector<int> primes = primeList(n);
    cout << "Prime numbers up to " << n << ": ";
    for (int p : primes)
    {
        cout << p << " ";
    }
    cout << endl;
}

void handle_fib()
{
    int n;
    cout << "Enter a number to calculate the nth Fibonacci ";
    cin >> n;
    cout << "Fibonacci number at position " << n << " is: ";
    cout << fib(n);
    cout << endl;
}

void handle_decimal_to_binary()
{
    int decimal;
    cout << "Enter a decimal number to convert to binary: ";
    cin >> decimal;
    std::string const binary = decimal_to_binary(decimal);
    cout << "Binary representation: " << binary << endl;
}

void handle_binary_to_decimal()
{
    long long binary;
    cout << "Enter a binary number to convert to decimal. Use '-' at beginning if the number is negative: ";
    cin >> binary;
    int const decimal = binary_to_decimal(binary);
    cout << "Decimal representation: " << decimal << endl;
}

void handle_bitwise_operations()
{
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

void handle_reverse_integer()
{
    int number;
    cout << "Enter an integer to reverse: ";
    cin >> number;

    // Reverse the integer
    int const reversed = reverse_integer(number);
    if (reversed == 0)
    {
        cout << "Overflow occurred while reversing the integer." << endl;
        return;
    }
    cout << "Reversed integer: " << reversed << endl;
}

void handle_power_of_two()
{
    int number;
    cout << "Enter a number to check if it is a power of 2: ";
    cin >> number;

    if (power_of_two(number))
    {
        cout << number << " is a power of 2." << endl;
    }
    else
    {
        cout << number << " is not a power of 2." << endl;
    }
}
int main()
{
    cout << "Welcome to the DSA series!" << endl;
    cout << "Please select a task to perform:" << endl;
    cout << "1. Sum of digits" << endl;
    cout << "2. nCr" << endl;
    cout << "3. Prime Number Checking" << endl;
    cout << "4. Prime List" << endl;
    cout << "5. Fibonacci" << endl;
    cout << "6. Decimal to Binary" << endl;
    cout << "7. Binary to Decimal" << endl;
    cout << "8. Binary Operations" << endl;
    cout << "9. Reverse Integer" << endl;
    cout << "10. Find if number is power of 2" << endl;

    int task;
    cin >> task;
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
    default:
        cout << "Invalid task" << endl;
        break;
    }
}
