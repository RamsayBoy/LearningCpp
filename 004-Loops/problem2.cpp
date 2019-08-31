/*
    Write a menu program that lets the user select from a list of options,
    and if the input is not one of the options, reprint the list
*/

#include <iostream>

using namespace std;

int main()
{
    int number = 0;

    do
    {
        cout << "1. Print out \"Hello\"" << endl;
        cout << "2. Print out \"Bye Bye\"" << endl;
        cout << "3. Another option that prints nothing" << endl;

        cout << "Enter a number: ";
        cin >> number;
    }
    while(number < 1 || number > 3);

    if(number == 1)
    {
        cout << "Hello" << endl;
    }
    else if(number == 2)
    {
        cout << "Bye Bye" << endl;
    }

    return 0;
}
