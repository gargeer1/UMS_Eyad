#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
private:
    string username;
    string role;
    string email;
    string password; // optional: encrypted password

public:
    // Constructor
    User(string username, string role, string email);

    // Methods
    // Optional methods
    bool login(string password); // Authenticates the user
    void logout(); // Logs out the user
    void changePassword(string newPassword); // Allows the user to change their password

    // Getter methods
    string getUsername() const;
    string getRole() const;
    string getEmail() const;
};

#endif // USER_H
