/*
    Modify your password program from before to put all of the password checking logic
    into a separate function, apart from the rest of the program
*/

#include <iostream>

using namespace std;

// Global variables
// Users - Why do I do this? Explanation below of the rest of the program
string user_1 = "Rabbit";
int password_1 = 123;

string user_2 = "Wolf";
int password_2 = 1234;

string user_3 = "Dragon";
int password_3 = 12345;

// Function headers
bool checkUserAndPass(string, int);

int main()
{
    string input_username = "";
    int input_password = 0;

    // User and password enter
    cout << "Enter the username: ";
    getline(cin, input_username, '\n');
    cout << "Enter the password: ";
    cin >> input_password;

    // Password comparison
    if(checkUserAndPass(input_username, input_password))
    {
        cout << "Correct username and password" << endl;
    }
    else
    {
        cout << "Incorrect username and password" << endl;
    }

    return 0;
}

bool checkUserAndPass(string user, int password)
{
    bool correct;

    if(user == user_1 && password == password_1)
    {
        correct = true;
    }
    else if(user == user_2 && password == password_2)
    {
        correct = true;
    }
    else if(user == user_3 && password == password_3)
    {
        correct = true;
    }
    else
    {
        correct = false;
    }

    return correct;
}

/*--------------------------------------------------------------------------------------*\
    Explanation:    I have declared the usernames and passwords variables as global
                    variables because I cannot use them in the function checkUserAndPass()
                    unless I pass them as arguments

    There will be better options as I go learning C++
\*--------------------------------------------------------------------------------------*/
