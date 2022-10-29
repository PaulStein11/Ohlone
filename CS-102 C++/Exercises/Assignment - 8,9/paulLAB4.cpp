/* 
Course: CS-102
Name: Paul Barrionuevo
Program Description:  LAB4 - User Defined Functions
Details: Calculating Average of Best Swim Dive Scores
Software Development Environment: macOS Monterrey - Visual Studio
Solution File: paulLAB4.cpp
Date: 10/29/22
*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

void getScore(int& number) 
{
   bool valid = false;
   // Prompt for a score
   cout << "Enter a diving score: ";
   do
   {
       cin >> number;

       // Test value
       if (!cin.fail())
       {
           if (number >= 0 && number <= 10)
           {
               valid = true;
           } else 
           {
               cout << "Enter a diving score between 0 and 10:";
           }
       } else{
           cout << "That's not an integer";
           cin.clear();
       }
   } while (!valid);
   // Pass data into function 
   

}

int main() 
{
    // Initialize input variables
    int number;

    // Program initializing
    // # 1
    for(int i; i <= 5; i++)
    {
        getScore(number);
    }

    return 0;

}



/*
Enter a diving score: -1
Enter a diving score between 0 and 10: 11
Enter a diving score between 0 and 10: 0
Enter a diving score: 10
Enter a diving score: 4
Enter a diving score: 7
Enter a diving score: 6
After dropping the lowest score, 0, the diving average score is 6.
*/