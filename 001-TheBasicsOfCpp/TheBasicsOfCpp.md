```cpp
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
```

# Keep in mind
- `#include <iostream>` is an statement that tells the compiler to put code from the header file (`iostream` in this case) into the program before creating the executable.
- `iostream` header file comes with the compiler and allows you to perform input and output.
- By including header files, you gain access to the many functions provided by the compiler.
- The statement `using namespace std;` itself makes it easier to use shorter versions of some of the routines provided by the `iostream` header file.
- In the line `cout << "Hello world!\n";` C++ uses the `cout` object (pronounced "C out") to display text. Getting access to `cout` is the reason that we included the `iostream` header file.
- `<<` are the "insertions operators" that indicates what to output.
- `cout << "Hello world!\n` is equivalent to `cout << "Hello world! << endl`.
