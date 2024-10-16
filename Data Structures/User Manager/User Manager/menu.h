#ifndef MENU_H
#define MENU_H

#include <vector>
#include <string>
#include "menuOption.h"

using namespace std;

class Menu {
public:
	Menu(string _menuName);
	void addOption(MenuOption& _option);
	MenuOption& getOption(char key);
	int getConsoleInput();
	void display();
private:
	string menuName;
	vector<MenuOption> options;
};
#endif // !MENU_H

