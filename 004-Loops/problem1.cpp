/*
    Write a program that prints out the entire lyrics to a full rendition of "99 bottles of beer"
*/

#include <iostream>

using namespace std;

int main()
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

    return 0;
}
