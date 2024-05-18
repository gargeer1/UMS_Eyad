#include "Course.h"
#include <iostream>
using namespace std;

// Constructor
Course::Course(string courseCode, string name, int credits, string department)
    : courseCode(courseCode), name(name), credits(credits), department(department) {}

// Method to update the number of credits for the course
void Course::updateCredits(int newCredits) {
    credits = newCredits;
}

// Method to display details of the course
void Course::viewCourseDetails() const {
    cout << "Course Code: " << courseCode << endl;
    cout << "Name: " << name << endl;
    cout << "Credits: " << credits << endl;
    cout << "Department: " << department << endl;
}

// Method to list students currently enrolled in the course
void Course::listEnrolledStudents() const {
    cout << "Students enrolled in " << name << ":" << endl;
    for (const auto& student : enrolledStudents) {
        cout << student << endl;
    }
}

// Getter method for course code
string Course::getCourseCode() const {
    return courseCode;
}

// Getter method for course name
string Course::getName() const {
    return name;
}

// Getter method for credits
int Course::getCredits() const {
    return credits;
}

// Getter method for department
string Course::getDepartment() const {
    return department;
}
