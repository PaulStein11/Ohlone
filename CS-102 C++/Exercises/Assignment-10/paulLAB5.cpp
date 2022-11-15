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
#include <cmath>
#include <iomanip>

using namespace std;

// LOGIC FUNCTIONS

// Function asking to enter values >= 0 and validate input
double getSales(double& sales)
{
   do
   {
      cin.clear();
      cout << "Enter a value (>=0): ";
      cin >> sales;

   } while (sales < 0);
   
   return sales;
}

// Function to get the MAX sales value from array
double maxSales(double monthlySales[], int size)
{
   // Declare variable to store MAX value
   double maxMonthlySales; 
   //Iterate over array
   for (int i = 0; i <= size; i++)
   {
      if(monthlySales[i] > maxMonthlySales)
      {
         // Store MAX value
         maxMonthlySales = monthlySales[i]; 
      }
   }
   return maxMonthlySales;
}

// Function to get the MIN sales value from array
double minSales(double monthlySales[], int size)
{
   // Declare variable to store MIN value
   double minMonthlySales; 
   //Iterate over array
   for (int i = 0; i <= size; i++)
   {
      if(monthlySales[i] < minMonthlySales)
      {
         // Store MIN value
         minMonthlySales = monthlySales[i]; 
      }
   }
   return minMonthlySales;
}

int main ()
{  
   // Declaring variables
   const int ARRAY_SIZE = 11;
   double monthlySales[ARRAY_SIZE];
   double sales;

   double maxValue;
   double minValue;

   // Intro presenting the app and it's functionality
   cout << "**** YEARLY SALES CALCULATOR ****" << endl;
   cout << "Let's calculate MAX and MIN of the year" << endl;

   // For loop to iterate the number of times of the array size
   for (int i = 0; i <= sizeof(monthlySales)/sizeof(monthlySales[0]); i++)
   {
      monthlySales[i] = getSales(sales);
   }
   // Functions to obtain MAX and MIN from array values
   // Storing returned values into variables
   maxValue = maxSales(monthlySales, ARRAY_SIZE);
   minValue = minSales(monthlySales, ARRAY_SIZE);
   // Return MAX and MIN value with precision of 2 decimales
   cout << "The MAX monthly sales value is: $" 
   << fixed << setprecision(2) << maxValue << endl;
   cout << "The MIN monthly sales value is: $" 
   << fixed << setprecision(2)<< minValue << endl;

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