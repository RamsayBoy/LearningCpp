/*
    Write a small calculator that takes as input one of the four arithmetic operations,
    the two arguments to those operations, and then prints out the result
*/

#include <iostream>

using namespace std;

int main()
{
    char sign;
    int number_1 = 0;
    int number_2 = 0;
    int result = 0;

    cout << "Enter an arithmetic operator: ";
    cin >> sign;

    cout << "Enter the argument 1: ";
    cin >> number_1;
    cout << "Enter the argument 2: ";
    cin >> number_2;

    if(sign == '+')
    {
        result = number_1 + number_2;
    }
    else if(sign == '-')
    {
        result = number_1 - number_2;
    }
    else if(sign == '*')
    {
        result = number_1 * number_2;
    }
    else if(sign == '/')
    {
        result = number_1 / number_2;
    }
    else
    {
        cout << "Invalid operator" << endl;
        return 0;
    }

    cout << "Result: ";
    cout << result << endl;

    return 0;
}
