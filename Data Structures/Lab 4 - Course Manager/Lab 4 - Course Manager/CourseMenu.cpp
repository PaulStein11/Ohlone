#include "CourseMenu.h"
#include "MenuOption.h"
#include <sstream>

CourseMenu::CourseMenu() : Menu("Course Manager")
{
	MenuOption op1('1', "List of course", "Default");	
	MenuOption op2('2', "View of course", "Default");
	MenuOption op3('3', "Add new course", "Default");
	MenuOption op4('4', "Edit course", "Default");
	MenuOption op5('5', "Delete course", "Default");
	MenuOption op6('X', "Exit", "Default");

	addOption(op1);
	addOption(op2);
	addOption(op3);
	addOption(op4);
	addOption(op5);
	addOption(op6);

	// initialize data
	initData();

}
CourseMenu::~CourseMenu()
{
	// TODO: if file is open and its being manipulated, save to a new file and close it
	saveData();
}
/*******************************************************
* Function Name: @initData
* Purpose: initializes the data by opening and reading the data from the file 
* and parsing the values into Course class
* Parameter: none
* Return: saves data to vector of Course type and closes the file
 *******************************************************/
void CourseMenu::initData()
{
	ifstream inFile(COURSE_DATA);
	if (inFile.fail())
	{
		cout << "Unable to open file " << COURSE_DATA << endl;
		return;
	}
	string line, description;
	while (getline(inFile, line))
	{
		istringstream ss(line);
		string value;
		Course newCourse;
		description.clear();  // Reset description for the new course

		getline(ss, value, ' ');
		newCourse.setDepart(value);
		getline(ss, value, ' ');
		newCourse.setCourse(value);
		getline(inFile, line);
		newCourse.setTitle(line);
		// Go over description and do it until line ends with a space
		while (getline(inFile, line)) {
			if (line.back() == '\\') {
				// Remove the trailing backslash and add the line to the description
				line.pop_back();
				description += line + "\n";  // Concatenate lines with space
			}
			else {
				// Add the last line (no backslash) and break the loop
				description += line;
				break;
			}
		}
		newCourse.setDescription(description);
		getline(inFile, line);
		newCourse.setPrereq(line);		
		getline(inFile, line);
		newCourse.setUnits(stoi(line));		
		getline(inFile, line);
		newCourse.setInstructor(line);		
		getline(inFile, value);
		newCourse.setGrade(value);

		courseList.insert(newCourse);
	}
	inFile.close();

}
void CourseMenu::saveData()
{

}
void CourseMenu::activate()
{
	char choice = 0;
	do {
		choice = getInput();
		switch (choice) {
		case LIST_OF_COURSE:
			doList();
			break;
		case VIEW_COURSE:
			doView();
			break;
		case ADD_COURSE:
			addCourse();
			break;
		case EDIT_COURSE:
			editCourse();
			break;
		case DELETE_COURSE:
			deleteCourse();
			break;
		case EXIT_MENU:
			cout << "Bye bye!" << endl;
			break;
		default:
			cout << "Invalid option" << endl;
		}
	} while (choice != 'X');
}
void CourseMenu::displayCourses()
{
	char value;
	/* Show Sorting options*/
	cout << "LIST OF COURSE" << endl;
	cout << "1) Go to first" << " | " << "2) Next course" << " | " << "3) Previous course" 
		<< " | " << "4) Go to last" << " | " << "X) Back to main menu" << endl;
	//cin >> value;
	courseList.print();

}
void CourseMenu::doList()
{
	int fieldValue;

	cout << "Select the field to sort by:" << endl;
	cout << "1. Department\n2. Course\n3. Title\n4. Description\n5. Prerequisite\n6. Units\n7. Instructor\n8. Grade\n" << endl;
	cin >> fieldValue;

	courseList.sortBy(fieldValue);
	courseList.print();

}
void CourseMenu::doView()
{
	int choice;
	cout << "1. Search for a Course\n";
	cout << "2. Exit\n";
	cout << "Enter your choice: ";
	cin >> choice;

	switch (choice) {
	case 1: {
		string courseCode;
		cout << "Enter course code to search: ";
		cin >> courseCode;

		Course searchCourse;  // Assuming you have a Course constructor that allows setting the course code
		searchCourse.setCourse(courseCode);

		int result = courseList.search(searchCourse);  // Call the search function
		if (result == -1) {
			cout << "Course with code " << courseCode << " not found.\n";
		}
		break;
	}
	case 2:
		exit(0);
	default:
		cout << "Invalid choice. Please try again.\n";
	}
}
void CourseMenu::addCourse()
{
	Course newCourse;
	const int MAX_CHARS = 4; // Maximum number of characters to read
	char department[MAX_CHARS + 1], prerequisites[MAX_CHARS + 1]; // +1 for null terminator

	string title, description, instructor, course;
	int units;
	char defaultGrde = 'C';
	cout << " Start adding your course here: " << endl;
	cout << "1. Enter department: ";
	// Adding get method to limit input to MX_CHARS
	cin.get(department, MAX_CHARS + 1);	
	newCourse.setDepart(department);
	cout << "2. Enter course: ";
	cin >> course;	
	newCourse.setCourse(course);
	cout << "3. Enter title: ";
	cin >> title;	
	newCourse.setTitle(title);
	cout << "4. Enter description: ";
	cin >> description;	
	newCourse.setDescription(description);
	cout << "5. Enter prerequisites: ";
	cin.get(prerequisites, MAX_CHARS + 1);
	newCourse.setPrereq(prerequisites);
	cout << "6. Enter number of units: ";
	cin >> units;
	newCourse.setUnits(units);
	cout << "7. Enter the instructor imparting the class: ";
	cin >> instructor;
	newCourse.setInstructor(instructor);
	courseList.insert(newCourse);

}
void CourseMenu::editCourse()
{

}
void CourseMenu::deleteCourse()
{

}