/// This checks that how many students have a total score higher than the first student.

#include <iostream>
#include "student.h"

using namespace std;

class Student
{
private:
    int scores[5] = {};

public:
    void input()
    {
        for (int & score : scores) // range-based loops require '&' to modify the original array
        {
            cin >> score;
        }
    }

    [[nodiscard]] int calculateTotalScore() const
    {
        int sum = 0;
        for (const int score : scores)
        {
            sum += score;
        }
        return sum;
    }
};

void student()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int students;
    cout << "Enter the number of students: ";
    cin >> students;
    Student arr[students];
    int counter = 0;
    for (int i = 0; i < students; i++)
    {
        cout << "Enter the scores of student " << i + 1 << ": " << endl;
        arr[i].input();
    }
    const int highest = arr[0].calculateTotalScore();
    for (int i = 1; i < students; i++)
    {
        if (arr[i].calculateTotalScore() > highest)
        {
            counter++;
        }
    }
    cout << counter << " students have a total score higher than the first student." << endl;
}

//
// Created by AnasJ on 17/07/2025.
//
