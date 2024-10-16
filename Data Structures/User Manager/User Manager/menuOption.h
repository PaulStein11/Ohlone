#ifndef MENU_OPTION_H
#define MENU_OPTION_H

#include <iostream>
#include <string>

using namespace std;

class MenuOption
{
public:
	/* Empty constructor, one with three arguments and destructor*/
	MenuOption() = default;
	MenuOption(char _key, string _shortName, string _longName);
	~MenuOption();

	// Getters
	char getKey() const;
	string getShortName() const;
	string getLongName() const;

	// Setters
	void setKey(char key_);
	void setShortName(string shortName_);
	void setLongName(string longName_);
private:
	char key;		// Selected key from the console
	string shortName; // Display the user option
	string longName; // Description of the option
};
#endif // !MENU_OPTION_H