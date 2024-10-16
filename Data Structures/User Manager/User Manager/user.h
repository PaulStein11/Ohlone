#ifndef USER_H
#define USER_H

#include <string>
#include "DateTime.h"

class User {
public:
	// Constructor and destructor
	User();
	User(int id, const string& email, const string& username, const string& password, int role);
	~User();

	// Overloaded operators
	bool operator==(const User&) const;
	bool operator!=(const User&) const;
	bool operator>(const User&) const;
	bool operator<(const User&) const;
	bool operator>=(const User&) const;
	bool operator<=(const User&) const;

	// Accessor and mutator methods
	void setLoginDateTime(const DateTime& dt);
	void setLogoutDateTime(const DateTime& dt);
	// Setters
	void setId(int _newId);
	void setEmail(string _newEmail);
	void setUsername(string _newUsername);
	void setPassword(string _newPassword);
	void setRole(int _newRole);
	// Getters
	int getId() const;
	string getEmail() const; // Either email or username may be used to login
	string getUsername() const; // Username to login
	string getPassword() const; // User password
	string getCreateDT() const;
	string getLogOutDT() const;
	string getLoginDT() const;
	int getRole() const;

	// Other methods
	void displayUserDetails() const;

private:
	// Member variables
	int id;
	string email;
	string username;
	string password;
	int role;  // 1 = Admin, 2 = User, -1 = Guest
	DateTime createDt;
	DateTime loginDt;
	DateTime logoutDt;
};

#endif

