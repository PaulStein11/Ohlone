#include <iostream> 
#include "vector.h"
#include "list"
using namespace std;

int main()
{
    Vector numbers;
    List* plist = &numbers;
    plist->push_back(4);

    numbers.push_back(4);
    numbers.push_back(3);
    numbers.push_back(7);
    numbers.push_back(2);
    numbers.push_back(5);
    numbers.push_back(9);

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers.at(i) << " ";
    }
    cout << endl;
    //cout << numbers.size() << endl;
    return 0;
}