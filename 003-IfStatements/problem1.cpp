/*
    Ask the user for two users' ages, and indicate who is older;
    behave differently if both are over 100
*/

#include <iostream>

using namespace std;

int main()
{
    int age_1 = 0;
    int age_2 = 0;

    // Enter ages
    cout << "Enter an age: ";
    cin >> age_1;
    cout << "Enter another one: ";
    cin >> age_2;

    // Check if both are over 100
    if((age_1 > 100) && (age_2 > 100))
    {
        cout << "Both are over 100!" << endl;
        return 0;   // Exit successfully
    }

    // Comparison
    if(age_1 < age_2)
    {
        cout << age_2 << " is older than " << age_1 << endl;
    }
    else if(age_1 > age_2)
    {
        cout << age_1 << " is older than " << age_2 << endl;
    }
    else
    {
        cout << "Both ages are equal" << endl;
    }

    return 0;
}
