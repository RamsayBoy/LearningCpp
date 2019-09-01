/*
    Expand the password checking program from earlier in this chapter and make it take multiple usernames,
    each with their own password, and ensure that the right username is used for the right password

    Provide the ability to prompt user's again if the first login attempt failed
*/

/*-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!
    ATTENTION:  With the current knowledge is impossible go back to enter usernames
                and passwords because loops are needed
-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!-!*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input_username = "";
    int input_password = 0;

    // Users
    string user_1 = "Rabbit";
    int password_1 = 123;

    string user_2 = "Wolf";
    int password_2 = 1234;

    string user_3 = "Dragon";
    int password_3 = 12345;

    // User and password enter
    cout << "Enter the username: ";
    getline(cin, input_username, '\n');
    cout << "Enter the password: ";
    cin >> input_password;

    // Password comparison
    if(input_username == user_1 && input_password == password_1)
    {
        cout << "Correct username and password" << endl;
    }
    else if(input_username == user_2 && input_password == password_2)
    {
        cout << "Correct username and password" << endl;
    }
    else if(input_username == user_3 && input_password == password_3)
    {
        cout << "Correct username and password" << endl;
    }
    else
    {
        cout << "Incorrect username and password" << endl;
    }

    return 0;
}
