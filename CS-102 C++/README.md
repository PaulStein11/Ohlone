# CS 102
Introductory class in C++

## Functions
A function is a block of code which only runs when it is called.

You can pass data, known as parameters, into a function.

Declared functions are not executed immediately. They are "saved for later use", and will be executed later, when they are called.

To call a function, write the function's name followed by two parentheses ( ) and a semicolon ;

### Example:

```c++
// Create a function
#include <iostream> 
using namespace std;
void myFunction() {
   cout << "I just got executed!";
}

int main() {
   myFunction(); // call the function
   return 0;
}

// Output: "I just got executed!"

```


If you define your new custom function above the main function in the .cpp file the compiler already knows it exists and can alter the flow of control.
If you prefer to keep your main function at the top of the .cpp file because its easier to find or looks better there, you can put a cheat at the top of the file to let the compiler know that the function definition comes later.  This cheat is called a function prototype
