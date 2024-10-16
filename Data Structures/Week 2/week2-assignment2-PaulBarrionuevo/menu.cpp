#include <iostream>
#include <string>
#include <vector>
#include "menu.h"

using namespace std;

/**
   A menu that is displayed on a console.
*/

Menu::Menu()
{
}

void Menu::add_option(string option)
{
    options.push_back(option);
}
void Menu::display() const
{
    for (int i = 0; i < options.size(); i++)
    {
        cout << i + 1 << ") " << options[i] << endl;
    }
}

int Menu::get_input() const
{
    int input;
    do
    {
        display();
        cin >> input;
        if (input == 1)
        {
            cout << "Tight your seatbelt, we are lifting off!" << endl;
        }
        else if (input == 2)
        {
            cout << "Look for a crew member and return back" << endl;
        }
        else if (input == 3)
        {
            cout << "This is the Help menu" << endl;
        }
        else if (input == 4)
        {
            cout << "See you soon!" << endl;
        }
        else
        {
            cout << "Try again" << endl;
        }
    } while (input < 1 || input > options.size());
    return input;
}

