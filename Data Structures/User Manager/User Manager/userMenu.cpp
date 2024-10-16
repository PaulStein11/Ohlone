#include "userMenu.h"
#include <fstream>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

UserMenu::UserMenu() : Menu("Manage User Accounts")
{
    MenuOption op1('1', "Open new account", "Show details");
    MenuOption op2('2', "Login", "Show details");
    MenuOption op3('3', "Logout", "Show details");
    MenuOption op4('4', "Remove Account", "Show details");
    MenuOption op5('5', "Reset Password", "Show details");
    MenuOption op6('6', "Help", "Show details");
    MenuOption op7('X', "Quit", "Show details");
    addOption(op1);
    addOption(op2);
    addOption(op3);
    addOption(op4);
    addOption(op5);
    addOption(op6);
    addOption(op7);

    initUserData();
}
UserMenu::~UserMenu()
{
    saveData();
}
// Getters
/*
User& UserMenu::getUser(int userKey)
{

}
*/
void UserMenu::login() {
    std::string enteredValue, enteredPassword;
    int attempts = 3;

    while (attempts > 0) {
        std::cout << "Enter username: ";
        std::cin >> enteredValue;
        std::cout << "Enter password: ";
        std::cin >> enteredPassword;

        for (User& u : users) {
            if (u.getUsername() == enteredValue || u.getEmail() == enteredValue && u.getPassword() == enteredPassword) {
                user = u;
                user.setLoginDateTime(DateTime::now());
                std::cout << "Login successful.\n";
                return;
            }
        }

        std::cout << "Invalid credentials. Attempts remaining: " << --attempts << "\n";
    }

    std::cout << "Login failed after 3 attempts.\n";
}

// Method to log out a user
void UserMenu::logout() {
    user.setLogoutDateTime(DateTime::now());
    std::cout << "Logged out.\n";
}
void UserMenu::create()
{
}
void UserMenu::remove()
{
    cout << "Which user you want to remove";

}
void UserMenu::reset()
{

}
void UserMenu::help()
{
    // Show the cout instructions on how to use this application
    cout << "***** Instructions on how to use this application *****" << endl;
    cout << "Start selecting an option from the menu:" << endl;
    cout << "1) Create a new account adding the information required" << endl;
    cout << "2) Enter username or email to login to account" << endl;
    cout << "3) Logout from current account" << endl;
    cout << "4) If the role permits, remove account" << endl;
    cout << "5) If the role permits, resets your old password" << endl;
    cout << "6) Help menu showing the options of the User Accounts Program" << endl;
    cout << "x) Exit the application " << endl;
}
void UserMenu::activate()
{
    // Start userMenu
    int y = -1;
    do
    {
        y = getConsoleInput();
        switch (y)
        {
        case USER_CREATE:
            create();
            break;
        case USER_LOGIN:
            login();
            break;
        case USER_LOGOUT:
            UserMenu::logout();
            break;
        case USER_REMOVE:
            remove();
            break;
        case USER_RESET:
            reset();
            break;
        case USER_HELP:
            help();
            break;
        case USER_EXIT:
            cout << "Bye bye!" << endl;
            //quit();
            break;
        default:
            cout << "Invalid option" << endl;
        }
    } while (y != USER_EXIT);
}
void UserMenu::initUserData()
{
    ifstream studentsFile;
    studentsFile.open(USERS_DATA);
    if (!studentsFile.is_open()) {
        cerr << "Error: Could not open file " << USERS_DATA << endl;
    }
    string line = "";
    getline(inFile, line); // Skip the header line
    line;
    while (getline(studentsFile, line))
    {
        istringstream ss(line);
        string text;
        User user;
        // Get ID line and stores as a string
        getline(ss, text, ',');
        user.setId(stoi(text));
        // Get Username line and stores a string
        getline(ss, text, ',');
        user.setUsername(text);
        // Get Password line and stores a string
        getline(ss, text, ',');
        user.setPassword(text);
        // Get Role line and stores as a string
        getline(ss, text, ',');
        user.setRole(stoi(text));
        // Get Email line and stores as a string
        getline(ss, text, ',');
        user.setEmail(text);
        // Get Create DateTime line and stores as a string
        //getline(ss, text, ',');
        //user.setCreateDT(text);
        // Get Login DateTime line and stores as a string
        //getline(ss, text, ',');
        //user.setLoginDT(text);
        // Get Logout DateTime line and stores as a string
        //getline(ss, text, ',');
        //user.setLogOutDT(text);
        // Push user information to vector 
        users.push_back(user);
    }
    studentsFile.close();
}
void UserMenu::saveData() {
    ofstream outFile(USERS_DATA);
    if (outFile.fail()) {
        cout << "Unable to open the file for writing: " << USERS_DATA << endl;
        return;
    }
    outFile << "ID,Username,Password,Role,Email,CreateDateTime,LoginDateTime,LogoutDateTime" << endl;
    for (const auto& user : users) {  // Assuming `users` is a vector of User objects
        outFile << user.getId() << ","
            << user.getUsername() << ","
            << user.getPassword() << ","
            << user.getRole() << ","
            << user.getEmail() << ",";
            //<< user.getCreateDT() << ","
            //<< user.getLoginDT() << ","
            //<< user.getLogOutDT() << endl;
    }
    outFile.close();
}
