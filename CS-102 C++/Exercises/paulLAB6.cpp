/* 
Course: CS-102
Name: Paul Barrionuevo
Program Description:  LAB6 - Pointers and Arrays
Details: Lucky Number Game
Software Development Environment: macOS Monterrey - Visual Studio
Solution File: paulLAB6.cpp
Date: 11/27/22
*/

#include<iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// FUNCTION PROTOTYPES
int getSize(int number);
int *arrayAllocator(int arraySize);
int getValue();

int main()
{

   // // Declare variables and pointer
   int number;
   int size;
   int* p;
   int luckyNumber  = 0;

   // Intro presenting the app and it's functionality
   cout << "**** FIND YOUR LUCKY NUMBER ****" << endl;

   // Calling function to get array size
   size = getSize(number);
   // Calling function to get dynamic array
   p = arrayAllocator(size);

   cout << "Here are the values of the lucky array: " << endl;

   // For loop to iterate over the dynamic array
   for(int k = 0; k < size; k++)
   {
      cout << "Lucky number " << k + 1 << " has the value " << p[k] << endl;
      luckyNumber += p[k]; //  Store values to get the lucky number
   }
   // Release memory from dynamic array
   delete [] p;

   // Print out lucky number when adding values on dynamic array
   cout << "Your GRAND lucky number is: " << luckyNumber << endl;

   return 0;

}

// FUNCTIONS
// 1# Ask user to enter values in specific range to create the array size
int getSize(int number)
{
   do
   {
       cin.clear();
       cout << "Enter a value [1..8]: ";
       cin >> number;
   } while (number < 1 || number > 8);
   

   return number;
}
// 2# Pointer function completes the array in runtime
int* arrayAllocator(int arraySize)
{
   int* myArray; // Inetger pointer variable
   myArray = new int[arraySize]; // initializes new memory location

   cout << "Time to pick your " << arraySize <<
   " lucky numbers [5..10]" << endl;

   for(int i = 0; i < arraySize; i++)
   {
      myArray[i] = getValue(); // Stores values into pointer array
   }

   return myArray;
}
// 3# Ask user to enter values in specific range for the dynamic array
int getValue()
{
   int value;
   do
      {
         cin.clear();
         cout << "Enter a lucky number [5..10]: ";
         cin >> value;
      } while (value < 5 || value > 10);

   return value;
}

/*Enter a value [1..8] 0
Enter a value [1..8] 9
Enter a value [1..8] 2
Time to pick your 2 lucky numbers [5..10]
Enter a lucky number [5..10]: 6
Enter a lucky number [5..10]: 7
Here are the values in the lucky array:
Lucky number 1 has the value 6
Lucky number 2 has the value 7
Your GRAND lucky number is: 13
*/