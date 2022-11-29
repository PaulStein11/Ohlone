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
int getSize(int number);
int *arrayAllocator(int arraySize);
int getValue();

int main()
{

   // Variable definitions
   int number;
   int size;
   int* p;
   int count = 0;

   // Intro presenting the app and it's functionality
   cout << "**** FIND YOUR LUCKY NUMBER ****" << endl;

   size = getSize(number);
   cout << "value is " << size << endl;

   p = arrayAllocator(size);

   cout << "Here are the values of the lucky array: " << endl;

   for(int k = 0; k < size; k++)
   {
      cout << "Lucky number " << k + 1 << " has the value " << p[k] << endl;
      count += p[k];
   }
   delete [] p;

   cout << "Your GRAND lucky number is: " << count << endl;

   return 0;

}

int getSize(int number)
{
   // Ask user to enter values in specific range
   // Loop over until this is achieved
   do
   {
       cin.clear();
       cout << "Enter a value [1..8]: ";
       cin >> number;
   } while (number < 1 || number > 8);
   

   return number;
}

int* arrayAllocator(int arraySize)
{
   int* myArray;
   myArray = new int[arraySize];

   cout << "Time to pick your " << arraySize << " lucky numbers [5..10]" << endl;

   for(int i = 0; i < arraySize; i++)
   {
      myArray[i] = getValue();
   }

   return myArray;
}

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