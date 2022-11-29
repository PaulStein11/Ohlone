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

// PROTOTYPES
int getSize(int& number);
int *arrayAllocator(int numberSelected); 

int main()
{

   // Variable definitions
   int number, arraySize;

   // Intro presenting the app and it's functionality
   cout << "**** FIND YOUR LUCKY NUMBER ****" << endl;

   arraySize = getSize(number);
   cout << "value is " << arraySize << endl;

   
    cout << *arrayAllocator(arraySize) << endl;
      // catches value from function and stores it each time
      //getValue()


   
   // Loop the number of times needed getting the dynamic array of values?
   /*for(int i = 0; i <= arraySize; i++)
   {
      
   }*/


   return 0;

}

int getSize(int& number)
{
   // Declaring local variables
   do
   {
       cin.clear();
       cout << "Enter a value [1..8]: ";
       cin >> number;
   } while (number < 1 || number > 8);
   

   return number;
}

int* arrayAllocator(int arrayNumber)
{
   int* myDynamicArray;
   int value;
   myDynamicArray = new int[arrayNumber];

   cout << "Time to pick your 2 lucky numbers [5..10]" << endl;

   for(int k = 1; k <= arrayNumber; k++)
   {
      do
      {
         cin.clear();
         cout << "Enter a lucky number [5..10]: ";
         cin >> value;
      } while (value < 5 || value > 10);

      value = myDynamicArray[k];
   }

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