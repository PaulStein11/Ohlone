/* 
Course: CS-102
Name: Paul Barrionuevo
Program Description:  LAB5 - Arrays
Details: Calculating MIN / MAX Sales based on mothly income  
Software Development Environment: macOS Monterrey - Visual Studio
Solution File: paulLAB5.cpp
Date: 11/12/22
*/

#include<iostream>

using namespace std;

// LOGIC FUNCTIONS
double getSales(double& sales)
{
   bool valid = false;
   cout << "Enter a value (>=0): "; // Prompt for a sales value
   cin >> sales;

   do
   {
      if(!cin.fail())
      {
         if(sales >= 0)
         {
            valid = true;
         } else
         {
            cout << "Enter a value (>=0): "; // Repeat prompt asking sales value 
            cin.clear(); 

         }  
      } else 
      {
         cout << "Enter a value (>=0): "; // Repeat prompt asking sales value
         cin.clear(); 
      }
   } while (!valid);

   return sales;
   
}

int main ()
{  
   // Declaring values
   const int ARRAY_SIZE = 11;
   double monthlySales[ARRAY_SIZE];
   double sales;

   // Intro presenting the app and it's functionality
   cout << "**** YEARLY SALES CALCULATOR ****" << endl;
   cout << "Based on your sales, let's calculate MAX and MIN of this year" << endl;

   // For loop to iterate the number of time of the array size
   for (int i = 0; i <= sizeof(monthlySales)/sizeof(monthlySales[0]); i++)
   {
      monthlySales[i] = getSales(sales);
   }
   cout << monthlySales[1] << monthlySales[11] << endl;
   return 0;
}
   

/*
YEARLY SALES - MIN / MAX

This program will ask you to
enter twelve sales values, then it will
determine the largest and smallest
of the values you entered.

Enter a value (>=0): -1
Enter a value (>=0): 123.10
Enter a value (>=0): 55.00
Enter a value (>=0): 150.75
Enter a value (>=0): 23.88
Enter a value (>=0): 66.10
Enter a value (>=0): 10.25
Enter a value (>=0): 4.77
Enter a value (>=0): 2.10
Enter a value (>=0): 45.99
Enter a value (>=0): 99.99
Enter a value (>=0): 11.00
Enter a value (>=0): 25.66

The MAX monthly sales value $150.75.
The MIN monthly sales value $2.10.
*/