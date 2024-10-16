#pragma once
#include <string>

using namespace std;

class MenuOption {
public:
	MenuOption() = default;
	MenuOption(char key, string shortName, string longName);

	char getKey();
	string getShortName();
	string getLongName();

private:
	char key;
	string shortName;
	string longName;
};
