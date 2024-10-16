/*******************************************************

 * Program Name: DateTime class assignment

 * Author: Paul Barrionuevo

 * Date: 9/11/2024

 * Description: Implement a class DateTime that inherits two
 * different classes and its objects, Date and Time

 *******************************************************/

#include <iostream>
#include "time.h"
#include "date.h"
#include "dateTime.h"

using namespace std;

int main()
{
    Time time; // Time instance
    Date date; //Date instance
    DateTime dateTime; // DateTime instance
    dateTime.display(); // displays date and time
    //time.display();
    //cout << " " << endl;
    //date.display();
    return 0;
}
