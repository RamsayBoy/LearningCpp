/*
    Take the "menu program" you wrote earlier and break it out into a series of calls to functions for
    each of the menu items

    Add the calculator and "100 bottles of beer" as two different functions that can be called
*/

#include <iostream>

using namespace std;

void sayHello();
void sayByeBye();
int calculator(char sign, int arg1, int arg2);
void bottlesOfBeerSong();

int main()
{
int number = 0;

    do
    {
        cout << "1. Print out \"Hello\"" << endl;
        cout << "2. Print out \"Bye Bye\"" << endl;
        cout << "3. Another option that prints nothing" << endl;
        cout << "4. Calculator" << endl;
        cout << "5. Print out \"100 bottles of beer\" song" << endl;

        cout << "Enter a number: ";
        cin >> number;
        cout << endl;
    }
    while(number < 1 || number > 5);

    if(number == 1)
    {
        sayHello();
    }
    else if(number == 2)
    {
        sayByeBye();
    }
    else if(number == 4)
    {
        char sign;
        int number_1 = 0;
        int number_2 = 0;

        cout << "Enter an arithmetic operator: ";
        cin >> sign;

        cout << "Enter the argument 1: ";
        cin >> number_1;
        cout << "Enter the argument 2: ";
        cin >> number_2;

        cout << endl;
        cout << "Result: " << calculator(sign, number_1, number_2) << endl;
    }
    else if(number == 5)
    {
        bottlesOfBeerSong();
    }

    return 0;
}

void sayHello()
{
    cout << "Hello" << endl;
}

void sayByeBye()
{
    cout << "Bye Bye" << endl;
}

int calculator(char sign, int arg1, int arg2)
{
    int result = 0;

    if(sign == '+')
    {
        result = arg1 + arg2;
    }
    else if(sign == '-')
    {
        result = arg1 - arg2;
    }
    else if(sign == '*')
    {
        result = arg1 * arg2;
    }
    else if(sign == '/')
    {
        result = arg1 / arg2;
    }

    return result;
}

void bottlesOfBeerSong()
{
    for(int i = 99; i > 0; i--)
    {
        if(i > 1)
        {
            cout << i << " bottles of beer on the wall, " << i
                << " bottles of beer." << endl;
            cout << "Take one down and pass it around, " << i - 1
                << " bottles of beer on the wall.\n" << endl;
        }
        else
        {
            cout << i << " bottle of beer on the wall, " << i
                << " bottle of beer." << endl;
            cout << "Take one down and pass it around, "
                << "no more bottles of beer on the wall.\n" << endl;
        }
    }

    cout << "No more bottles of beer on the wall, no more bottles of beer."
        << endl;
    cout << "Go to the store and buy some more, 99 bottles of beer on the wall."
        << endl;
}
