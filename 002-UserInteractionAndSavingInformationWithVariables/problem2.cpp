/*
    Write a program that reads in two numbers and adds them together
*/

#include <iostream>

using namespace std;

int main()
{
    int number1 = 0;
    int number2 = 0;

    cout << "Enter a number: ";
    cin >> number1;
    cout << "Enter another one: ";
    cin >> number2;

    int result = number1 + number2;

    cout << number1 << " " << number2 << " = " << result << endl;

    return 0;
}
