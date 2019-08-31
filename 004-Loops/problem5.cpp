/*
    Write a program that provides the option of tallying up the results of a poll with 3 possible values
    The first input to the program is the poll question; the next three inputs are the possible answers
    The first answer is indicated by 1, the second by 2, the third by 3
    The answers are tallied until a 0 is entered

    The program should then show the results of the poll—try making a bar graph that shows the results
    properly scaled to fit on your screen no matter how many results were entered
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string poll_question;

    string answer_1;
    string answer_2;
    string answer_3;

    string answer = "";

    int tally_1 = 0;
    int tally_2 = 0;
    int tally_3 = 0;

    // Enter poll question
    cout << "Enter the poll question:" << endl;
    cout << "> ";
    getline(cin, poll_question, '\n');
    cout << endl;

    // Enter options
    cout << "Enter the answer 1:" << endl;
    cout << "> ";
    getline(cin, answer_1, '\n');
    cout << endl;

    do
    {
        cout << "Enter the answer 2:" << endl;
        cout << "> ";
        getline(cin, answer_2, '\n');

        if(answer_2 == answer_1)
        {
            cout << "[ERROR] Answer repeated" << endl << endl;
        }
    }
    while(answer_2 == answer_1);
    cout << endl;
    
    do
    {
        cout << "Enter the answer 3:" << endl;
        cout << "> ";
        getline(cin, answer_3, '\n');

        if(answer_3 == answer_1 || answer_3 == answer_2)
        {
            cout << "[ERROR] Answer repeated" << endl << endl;
        }
    }
    while(answer_3 == answer_1 || answer_3 == answer_2);
    cout << endl;

    // Enter answers
    cout << poll_question << endl;
    cout << '\t' << answer_1 << endl;
    cout << '\t' << answer_2 << endl;
    cout << '\t' << answer_3 << endl << endl;

    do
    {
        cout << "Enter an answer (0 to exit): ";
        getline(cin, answer, '\n');

        if(answer == answer_1)
        {
            tally_1++;
        }
        else if(answer == answer_2)
        {
            tally_2++;
        }
        else if(answer == answer_3)
        {
            tally_3++;
        }
        else if(answer != "0")
        {
            cout << "[ERROR] invalid value" << endl;
        }
    }
    while(answer != "0");
    cout << endl;

    // Print out graphic bars
    cout << answer_1 << ":\n[";
    for(int i = 0; i < tally_1; i++)
    {
        cout << "#";
    }
    cout << "]" << endl;

    cout << answer_2 << ":\n[";
    for(int i = 0; i < tally_2; i++)
    {
        cout << "#";
    }
    cout << "]" << endl;

    cout << answer_3 << ":\n[";
    for(int i = 0; i < tally_3; i++)
    {
        cout << "#";
    }
    cout << "]" << endl;

    return 0;
}
