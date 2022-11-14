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

// Function returning the lowest value from the diving scores 
int findLowest(int score1, int score2, int score3, int score4, int score5)
{
   int lowestVal;
   lowestVal = score1;
   if(score1 > score2) 
   {
      lowestVal = score2;
   }
   if(score2 > score3) 
   {
      lowestVal = score3;
   }
   if(score3 > score4) {
      lowestVal = score4;
   }
   if(score4 > score5) {
      lowestVal = score5;
   }
   return lowestVal;
}

// Function calculating average and calling lowest value  
void calcAverage(int score1, int score2, int score3, int score4, int score5) 
{
   // Defining variables
   int lowestScore;
   int totalValues = score1 + score2 + score3 + score4 + score5;
   double average;

   // Getting lowestScore calling function findLowest 
   lowestScore = findLowest(score1, score2, score3, score4, score5);
   // Calculate average score
   average = static_cast<double>(totalValues- lowestScore) / 4;

   cout << "After dropping the lowest score, " 
   << lowestScore << ", the diving average score is " << average;
}

int main() 
{
   // Initialize input variables
   int number;
   int score1, score2, score3, score4, score5;

   // Program initializing
   // For loop to iterate 5 times to every score
   for(int i = 1; i <= 5; i++)
   {
      getScore(number);
        
      // Identifying each number with iteration and ssaving in score position
      if (i == 1)
      {
         score1 = number;
      }
      if (i == 2)
      {
         score2 = number;
      }
      if (i == 3)
      {
         score3 = number;
      }
      if (i == 4)
      {
         score4 = number;
      }
      if (i == 5)
      {
         score5 = number;
      }        
       
   }

   // Function to calculate and display average and minimum value
   calcAverage(score1, score2, score3, score4, score5);


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