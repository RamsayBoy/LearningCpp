/*
    Writes a program that reads your name and outputs it
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Your name is: " << name << endl;

    return 0;
}