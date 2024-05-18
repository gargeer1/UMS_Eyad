#include "AcademicStaff.h"
#include <iostream>
using namespace std;

// Constructor
AcademicStaff::AcademicStaff(string staffID, string name, string department)
    : staffID(staffID), name(name), department(department) {}

// Method to assign a course to the academic staff member
void AcademicStaff::teachCourse(const string& course) {
    coursesTaught.push_back(course);
}

// Method to grade assignments submitted by students
void AcademicStaff::gradeAssignment(const string& course, const string& studentID, double grade) {
    // Check if the course is taught by this academic staff member
    auto it = find(coursesTaught.begin(), coursesTaught.end(), course);
    if (it == coursesTaught.end()) {
        cout << "Error: You are not assigned to teach the course " << course << endl;
        return;
    }

    // Determine the letter grade based on the provided grading scale
    string letterGrade;
    if (grade >= 93) {
        letterGrade = "A";
    }
    else if (grade >= 89) {
        letterGrade = "A-";
    }
    else if (grade >= 84) {
        letterGrade = "B+";
    }
    else if (grade >= 80) {
        letterGrade = "B";
    }
    else if (grade >= 76) {
        letterGrade = "B-";
    }
    else if (grade >= 73) {
        letterGrade = "C+";
    }
    else if (grade >= 70) {
        letterGrade = "C";
    }
    else if (grade >= 67) {
        letterGrade = "C-";
    }
    else if (grade >= 64) {
        letterGrade = "D+";
    }
    else if (grade >= 60) {
        letterGrade = "D";
    }
    else {
        letterGrade = "F";
    }

    // Output the result
    cout << "Grading assignment for student " << studentID << " in course " << course << ": " << letterGrade << endl;
}

// Method to view the list of students enrolled in a course taught by the academic staff member
void AcademicStaff::viewStudentList(const string& course) const {
    cout << "List of students enrolled in " << course << ":" << endl;
    for (const auto& student : studentLists.at(course)) {
        cout << student << endl;
    }
}

// Method to set office hours for the academic staff member
void AcademicStaff::scheduleOfficeHours(const string& schedule) {
    cout << "Office hours scheduled for " << name << ": " << schedule << endl;
}

// Getter method for staff ID
string AcademicStaff::getStaffID() const {
    return staffID;
}

// Getter method for staff name
string AcademicStaff::getName() const {
    return name;
}

// Getter method for staff department
string AcademicStaff::getDepartment() const {
    return department;
}
