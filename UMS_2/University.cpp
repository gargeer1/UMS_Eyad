#include "University.h"
using namespace std;

// Constructor
University::University(string name, string location) : name(name), location(location) {}

// Method to add a new college to the university
void University::addCollege(const string& college) {
    colleges.push_back(college);
}

// Method to add a new department to the university
void University::addDepartment(const string& department) {
    departments.push_back(department);
}

// Method to get the list of colleges affiliated with the university
vector<string> University::getColleges() const {
    return colleges;
}

// Method to get the list of departments within the university
vector<string> University::getDepartments() const {
    return departments;
}
