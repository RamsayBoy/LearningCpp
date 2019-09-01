# Keep in mind
- Defining a function means giving the full function, including the body of the function (example below).

    ```cpp
    int add(int x, int y)
    {
      return x + y;
    }
    ```
- Declaring a function justgives the basic info about the function that a caller needs: name, return type, and arguments. For declaring a function, we write a function prototype (example below).

    ```cpp
    int add(int x, int y);
    ```
    or
    ```cpp
    int add(int, int);
    ```
- Functions must be declared before someone else can call them, either by using a declaration or by fully defining the function.

    ```cpp
    #include <iostream>

    using namespace std;

    int add(int x, int y);

    int main()
    {
        int result = add(1, 2);
        cout << "The result is: " << result << endl;
        cout << "Adding 3 and 4 gives us: " << add(3, 4) << endl;
    }

    int add(int x, int y)
    {
        return x + y;
    }
    ```
- C++ allows function overloading; you can use the same name for more than one function, as long as the functions all have different argument lists.

    ```cpp
    int computeTriangleArea(int x1, int y1, int x2, int y2, int x3, int y3);
    int computeTriangleArea(int width, int height);
    ```