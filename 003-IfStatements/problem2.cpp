/*
    Implement a simple "password" system that takes a password in the form of a number
    Make it so that either of two numbers are valid, but use only one if statement to do the check
*/

#include <iostream>

using namespace std;

int main()
{
    int input_password = 0;
    int password = 123;

    cout << "Enter the password: ";
    cin >> input_password;

    if(input_password == password)
    {
        cout << "Correct password" << endl;
    }
    else
    {
        cout << "Invalid password" << endl;
    }
    return 0;
}
