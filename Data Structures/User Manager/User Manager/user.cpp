#include "User.h"

// Default constructor
User::User() : id(), email(""), username(""), password(""), role(-1) {}

// Parameterized constructor
User::User(int _id, const string& _email, const string& _username, const string& _password, int _role)
{
    id = _id, email = _email, username = _username, password = _password, role = _role;
    // Initialize creation time when a user is created
    createDt = DateTime::now();
}

// Destructor
User::~User() {}

// Overloaded operators
bool User::operator==(const User& other) const {
    return username == other.username && password == other.password;
}

bool User::operator!=(const User& other) const {
    return !(*this == other);
}

bool User::operator>(const User& other) const {
    return username > other.username;
}

bool User::operator<(const User& other) const {
    return username < other.username;
}

bool User::operator>=(const User& other) const {
    return !(*this < other);
}

bool User::operator<=(const User& other) const {
    return !(*this > other);
}

// Mutator methods for login and logout
void User::setLoginDateTime(const DateTime& dt) {
    loginDt = dt;
}

void User::setLogoutDateTime(const DateTime& dt) {
    logoutDt = dt;
}

// Display user details
void User::displayUserDetails() const {
    std::cout << "User ID: " << id << "\n"
        << "Username: " << username << "\n"
        << "Email: " << email << "\n"
        << "Role: " << role << "\n";
}
string User::getCreateDT() const
{
    return "";
}
string User::getLogOutDT() const
{
    return "";
}
string User::getLoginDT() const
{
    return "";
}

void User::setId(int _newId)
{
    id = _newId;
}
void User::setEmail(string _newEmail)
{
    email = _newEmail;
}
void User::setUsername(string _newUsername)
{
    username = _newUsername;
}
void User::setPassword(string _newPassword)
{
    password = _newPassword;
}
void User::setRole(int _newRole)
{
    role = _newRole;
}
// Getters
int User::getId() const
{
    return id;
}
string User::getEmail() const
{
    return email;
}
string User::getUsername() const
{
    return username;
}
string User::getPassword() const
{
    return password;
}
string User::getCreateDT() const
{
    return "";
}
string User::getLogOutDT() const
{
    return "";
}
string User::getLoginDT() const
{
    return "";
}
int User::getRole() const
{
    return role;
}
