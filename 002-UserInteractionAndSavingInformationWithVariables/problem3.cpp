/*
    Write a program that performs division of two numbers read from the user and prints out an exact result
    -
    Make sure to test your program with both integer inputs and decimal inputs
*/

#include <iostream>

using namespace std;

int main()
{
    // One of them must be a double (or both) for printing an exact result
    double number1 = 0;
    double number2 = 0;

    cout << "Enter a number: ";
    cin >> number1;
    cout << "Enter another one: ";
    cin >> number2;

    cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;

    return 0;
}
