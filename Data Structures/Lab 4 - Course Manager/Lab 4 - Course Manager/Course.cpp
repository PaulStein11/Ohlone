#include "Course.h"

Course::Course(string _department, string _title, string _description,
	string _prerequisites, string _instructor, char _grade, int _course, int _units)
{
	department = _department, title = _title, description = _description, prerequisites = _prerequisites,
		instructor = _instructor, grade = _grade, course = _course, units = _units;
}
Course::Course()
{
}
Course::~Course()
{
	// Destructor
}
//string Course::fieldNameSort = ""; // default by fieldname id

Course& Course::operator=(const Course& p)
{
	if (this != &p)
	{
		department = p.department;
		title = p.title;
		description = p.description;
		prerequisites = p.prerequisites;
		instructor = p.instructor;
		grade = p.grade;
		course = p.course;
		units = p.units;
	}	
	return *this;
}
bool Course::operator!=(const Course& p) const
{
	return this->title != p.title;
}
bool Course::operator==(const Course& p) const
{
	return this->title == p.title;
}
/*bool Course::operator<(const Course& p) const
{
	return ;
}*/
ostream& operator<<(ostream& out, const Course& course)
{	
	out << course.getDepart() << " " << course.getCourse() << endl;
	out << course.getTitle() << endl;
	out << course.getDescription() << endl;
	out << course.getPrereq() << endl;
	out << course.getUnits() << endl;
	out << course.getInstructor() << endl;
	out << course.getGrade() << endl;
	return out;
}
/*
istream& operator>>(istream& in, Course& course)
{
	return;
}
bool Course::operator<(const Course& p) const
{
	return this;
}
bool Course::operator>(const Course& p) const
{
	return this;
}
bool Course::operator<=(const Course& p) const
{
	return this;
}
bool Course::operator>=(const Course& p) const
{
	return this;
}*/
