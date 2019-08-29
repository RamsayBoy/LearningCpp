```cpp
#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;
    cout << "Number entered: " << number << endl;

    return 0;
}
```

- `cin >>` stores the value typed by the user into `number`.
- You must separate string literals and variables by giving each its own insertion operators (`<<`).
- Arithmetic operations in C++:

    | Sign | What it does                 |
    |:----:|------------------------------|
    |  *   | Multiplies two values        |
    |  -   | Subtracts two values         |
    |  +   | Adds two values              |
    |  /   | Divides one value by another |

- C++ is case sensivity, whether you use uppercase or lowercase letters matters.
- Using strings:
```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "This is an string";
    cout << s << endl;

    return 0;
}
```
- If you want to append one string onto another you can use the `+` sign:
```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string user_first_name;
    string user_last_name;

    cout << "What is your name?" << endl;
    cin >> user_first_name;
    cout << "What is your last name?" << endl;
    cin >> user_last_name;

    string user_full_name = user_first_name + " " + user_last_name;

    cout << "Your full name is: " << user_full_name << endl;

    return 0;
}
```
- When you read in strings, sometimes you want to read a whole line at a time. There is a special function, `getline`, which can be used to read in the whole line. It will even automatically discard the newline character at the end.
- To use getline, you pass in a source of input, in this case cin, the string to read into, and a character on which to terminate input. For example: `getline(cin, user_first_name, '\n')`.
- `getline` could also be useful if you wanted to read user input only up to another character, such as a comma (the user still has to hit enter before the program will actually accept the data, though). For example: `getline(cin, my_string, ',');`
In this case, if the user types `Hello, world`, the value `Hello` will go into `my_string` but the rest of the text will remain in the input buffer until your program reads it with another input statement.