# CS 102
Introductory class in C++

## Functions
A function is a block of code which only runs when it is called.

You can pass data, known as parameters, into a function.

Declared functions are not executed immediately. They are "saved for later use", and will be executed later, when they are called.

To call a function, write the function's name followed by two parentheses ( ) and a semicolon ;

### Example:
// Create a function
<sup> #include <iostream> 
using namespace std;
void myFunction() {
   cout << "I just got executed!";
}

int main() {
   myFunction(); // call the function
   return 0;
}

// Output: "I just got executed!"

</sup>
