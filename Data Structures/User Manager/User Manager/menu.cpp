#include "menu.h"
#include"menuOption.h"
#include <iostream>

using namespace std;

Menu::Menu(string _menuName)
{
	menuName = _menuName;
}
void Menu::addOption(MenuOption& _option)
{
	options.push_back(_option);
} 
MenuOption& Menu::getOption(char key) {
	for (int i = 0; i < options.size(); i++) {
		if (options.at(i).getKey() == key) {
			return options.at(i);
		}
	}
}
int Menu::getConsoleInput() {
	char input;
	bool valid = false;
	do {
		display();
		cout << "Select option: ";
		cin >> input;
		for (MenuOption option : options) {
			if (option.getKey() == input) {
				//cout << option.getLongName() << endl;
				valid = true;
				break;
			}
		}
		if (!valid) {
			cout << "\nPlease select a valid option." << endl << endl;
		}
	} while (!valid);
	return static_cast<int>(input);
}
void Menu::display()
{
	cout << "***** " << menuName << " *****" << endl;
	for (int i = 0; i < options.size(); i++) {
		MenuOption& option = options.at(i);
		cout << "\t" << static_cast<char>(option.getKey()) << ") " << option.getShortName() << endl;
	}
}