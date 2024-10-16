/*******************************************************
 * Program Name: Implementing Operator Overloading DateTime class.
 * Author: Paul Barrionuevo
 * Date: 9/14/2024
 * Description: Implement Operator Overloading for different classes 
 * from in class assignment 3-2
 *******************************************************/

#include <iostream>
#include "time.h"

int main()
{
	Time too_early(6, 0, 0); // Declaring constructor with three arguments
	Time wake_up = too_early + 45; // Comparison and addition operators
	cout << "Wake up at: " << wake_up << endl; // Console out result
	cout << "Enter current time: ";
	Time now;
	cin >> now;  // Console input from Time instance
	Time noon(12, 0, 0); // Declaring constructor with three arguments
	if (now < wake_up) { cout << "Too early!"; } // Logical operation to output one result
	if (now == noon) { cout << "Time for lunch!"; }
	cout << "Minutes to lunch: " << noon - now << endl;

	return 0;
}


