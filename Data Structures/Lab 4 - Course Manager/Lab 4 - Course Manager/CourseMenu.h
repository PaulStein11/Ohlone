#ifndef COURSE_MENU_H
#define COURSE_MENU_H

#include "Menu.h"
#include "ManageCourses.h"
#include <iostream>
#include <fstream>



using namespace std;

class CourseMenu : public Menu
{
	// File path to course data
	string COURSE_DATA = "C:/Users/pable/Documents/Ohlone/Data Structures/Downloads/courses_data.dat";

	enum COURSE_OPTIONS
	{
		LIST_OF_COURSE = '1',
		VIEW_COURSE = '2',
		ADD_COURSE = '3',
		EDIT_COURSE = '4',
		DELETE_COURSE = '5',
		EXIT_MENU = '6'
	};

private:
	ifstream inFile;
	void initData();
	void saveData();
public:
	CourseMenu();
	~CourseMenu();
	void activate();
	void displayCourses();
	void doList();
	void doView();
	void addCourse();
	void editCourse();
	void deleteCourse();
protected:
	ManageCourses courseList;
};

#endif // !COURSE_MENU_H
