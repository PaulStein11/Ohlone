#include"menuOption.h"
#include <iostream>

using namespace std;

MenuOption::MenuOption(char _key, string _shortName, string _longName)
{
	key = _key;
	shortName = _shortName;
	longName = _longName;
}
MenuOption::~MenuOption()
{

}
// Getters
char MenuOption::getKey() const
{
	return key;
}
string MenuOption::getShortName() const
{
	return shortName;
}
string MenuOption::getLongName() const
{
	return longName;
}
// Setters
void MenuOption::setKey(char _key)
{
	key = _key;
}
void MenuOption::setShortName(string _shortName)
{
	shortName = _shortName;
}
void MenuOption::setLongName(string _longName)
{
	longName = _longName;
}