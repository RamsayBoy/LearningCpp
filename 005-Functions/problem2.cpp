/*
    Make your calculator program perform computations in a separate function for each
    type of computation
*/

#include <iostream>

using namespace std;

int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

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
        result = add(number_1, number_2);
    }
    else if(sign == '-')
    {
        result = sub(number_1, number_2);
    }
    else if(sign == '*')
    {
        result = mul(number_1, number_2);
    }
    else if(sign == '/')
    {
        result = div(number_1, number_2);
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

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}

int div(int x, int y)
{
    return x / y;
}
