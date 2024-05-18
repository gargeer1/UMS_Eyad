#include "User.h"
using namespace std;

// Constructor
User::User(string username, string role, string email)
    : username(username), role(role), email(email) {}


// Getter method for username
string User::getUsername() const {
    return username;
}

// Getter method for user role
string User::getRole() const {
    return role;
}

// Getter method for user email
string User::getEmail() const {
    return email;
}



// Method to authenticate the user
bool User::login(string password) {
    // Add authentication logic here
    return true; // For demonstration purposes
}

// Method to log out the user
void User::logout() {
    // Add logout logic here
}

// Method to change the user's password
void User::changePassword(string newPassword) {
    // Add logic to change the password here
}
