/*
    Implement the source code that turns numbers into English text

    Without structures, switch statements... this is a mess
    I cannot use structures nor switch statements yet (the book assumes I don't know that yet)
*/

#include <iostream>
#include <string>

using namespace std;

string turnIntoString(int n);
int checkNumDigits(int n);
string nameOf(int n, int num_digits);
string specialCaseNameOf(int n);
bool isSpecialCase(int n);
string tensNameOf(int n);

int main()
{
    int number = 0;

    cout << "Enter a number [0-99]: ";
    cin >> number;

    cout << "The number is: " << turnIntoString(number) << endl;
}

string turnIntoString(int n)
{
    string num_name = "unknown";
    num_name = nameOf(n, checkNumDigits(n));

    return num_name;
}

int checkNumDigits(int n)
{
    // One digit
    if(n / 10 == 0)
    {
        return 1;
    }
    // Two digits
    else if((n / 10 > 0) && (n / 10 <= 9))
    {
        return 2;
    }
    // Invalid digit
    else
    {
        return 0;
    }
}

string nameOf(int n, int num_digits)
{
    if(num_digits == 2)
    {
        string tensAddon = tensNameOf(n);
        int units = n % 10;

        if(tensAddon == "teen")
        {
            if(units == 8)   // Fix bug with the number eighteen
            {
                return specialCaseNameOf(units) + "een";
            }
            else
            {
                return specialCaseNameOf(units) + tensAddon;
            }
        }
        else if(n % 10 == 0)
        {
            return tensAddon;

        }
        else
        {
            return tensAddon + " " + specialCaseNameOf(units);
        }
    }
    else {
        return specialCaseNameOf(n);
    }
}

string specialCaseNameOf(int n)
{
    // Remember I cannot use structures nor switch statements yet. It is an horror
    if(n == 0)
    {
        return "zero";
    }
    else if(n == 1)
    {
        return "one";
    }
    else if(n == 2)
    {
        return "two";
    }
    else if(n == 3)
    {
        return "three";
    }
    else if(n == 4)
    {
        return "four";
    }
    else if(n == 5)
    {
        return "five";
    }
    else if(n == 6)
    {
        return "six";
    }
    else if(n == 7)
    {
        return "seven";
    }
    else if(n == 8)
    {
        return "eight";
    }
    else if(n == 9)
    {
        return "nine";
    }
    else if(n == 10)
    {
        return "ten";
    }
    else if(n == 11)
    {
        return "eleven";
    }
    else if(n == 12)
    {
        return "twelve";
    }
    else if(n == 13)
    {
        return "thirteen";
    }
    else if(n == 15)
    {
        return "fifteen";
    }
    else if(n == 20)
    {
        return "twelve";
    }
    else
    {
        return "unknown";
    }
}

bool isSpecialCase(int n)
{
    if(n == 10 || n == 11 || n == 12 || n == 13 || n == 15 || n == 20)
    {
        return true;
    }

    return false;
}

string tensNameOf(int n)
{
    int tens = n / 10;

    if(tens == 1)
    {
        return "teen";
    }
    else if(tens == 2)
    {
        return "twenty";
    }
    else if(tens == 3)
    {
        return "thirty";
    }
    else if(tens == 4)
    {
        return "forty";
    }
    else if(tens == 5)
    {
        return "fifty";
    }
    else if(tens == 6)
    {
        return "sixty";
    }
    else if(tens == 7)
    {
        return "seventy";
    }
    else if(tens == 8)
    {
        return "eighty";
    }
    else if(tens == 9)
    {
        return "ninety";
    }
}
