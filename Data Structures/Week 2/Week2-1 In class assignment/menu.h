#ifndef MENU_H
#define MENU_H
#include <string>
#include <vector>

using namespace std;


/**
   A menu that is displayed on a console.
*/
class Menu
{
public:
    /**
       Constructs a menu with no options.
    */
    Menu();

    /**
       Adds an option to the end of this menu.
       @param option the option to add
    */
    void add_option(string option);

    /**
       Displays the menu, with options numbered starting with 1,
       and prompts the user for input. Repeats until a valid input
       is supplied.
       @return the number that the user supplied
    */
    int get_input() const;
private:
    void display() const;
    vector<string> options;
};

#endif // !MENU_H
