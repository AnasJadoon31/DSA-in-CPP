#include <iostream>

#include "binary_to_decimal.h"
#include "decimal_to_binary.h"
#include "ncr.h"
#include "sod.h"
#include "prime.h"
#include "fib.h"

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
    default:
        cout << "Invalid task" << endl;
        break;
    }
}
