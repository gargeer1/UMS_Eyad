#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <string>
#include <vector>

using namespace std;

class University {
private:
    string name;
    string location;
    vector<string> colleges;
    vector<string> departments;

public:
    // Constructor
    University(string name, string location);

    // Methods
    void addCollege(const string& college);
    void addDepartment(const string& department);
    vector<string> getColleges() const;
    vector<string> getDepartments() const;
};

#endif // UNIVERSITY_H
