#include <iostream>
#include "menu.h"

int main()
{
    Menu main_menu;
    cout << "******WELCOME TO SPACESHIP GALAXY******" << endl;
    main_menu.add_option("Start New Game");
    main_menu.add_option("Multiplayer");
    main_menu.add_option("Help");
    main_menu.add_option("Exit");

    int input = main_menu.get_input();
    cout << "Selected: " << input << endl;
    return 0;
}