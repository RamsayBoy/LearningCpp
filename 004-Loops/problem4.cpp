/*
    Write a password prompt that gives a user only a certain number of password entry attempts -
    so that the user cannot easily write a password cracker
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool correctPassword = false;
    string password;

    int i = 0;
    while(i < 7 && !correctPassword)
    {
        cout << "[" << i + 1 << "] " << "Please, enter the password: ";
        getline(cin, password, '\n');

        if(password == "tomato")
        {
            correctPassword = true;
        }

        i++;
    }

    if(correctPassword)
    {
        cout << "[DONE] Correct password" << endl;
    }
    else
    {
        cout << "[ERROR] Incorrect password" << endl;
    }

    return 0;
}
