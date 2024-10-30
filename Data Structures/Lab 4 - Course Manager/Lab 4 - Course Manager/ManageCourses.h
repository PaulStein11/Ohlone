#ifndef MANAGE_COURSES_H
#define MANAGE_COURSES_H
#include "LinkedList.h"
#include "Course.h"

class ManageCourses : public LinkedList<Course>
{
public:
	void sortBy(int fieldValue);
	int search(Course element); // Course from the list
	void print();
private:
	// TODO:
	bool sort = false; // By default will be false
	bool ascending;
	void binSearch(Course element);
	void selectionSort(int fieldValue, bool ascending);

};

#endif !MANAGE_COURSES_H