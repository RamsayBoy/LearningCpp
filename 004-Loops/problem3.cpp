/*
    Write a program that computes a running sum of inputs from the user,
    terminating when the user gives an input value of 0
*/

#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int result = 0;

    do
    {
        cout << "Enter a number: ";
        cin >> number;

        result += number;

        cout << result << endl;
    }
    while(number != 0);

    return 0;
}
