#include "Student.h"
#include <iostream>
#include <iomanip>
#include "AcademicStaff.h"
using namespace std;

// Constructor
Student::Student(string studentID, string name)
    : studentID(studentID), name(name) {}

// Method to enroll the student in a course
void Student::enrollCourse(const string& course) {
    coursesEnrolled.push_back(course);
}

// Method to view the student's academic transcript
void Student::viewTranscript() const {
    cout << "Transcript for Student ID: " << studentID << endl;
    for (const auto& course : coursesEnrolled) {
        cout << "Course: " << course << " Grade: " << grades.at(course) << endl;
    }
}

// Method to calculate the student's GPA based on grades
double Student::calculateGPA() const {
    double totalGradePoints = 0;
    int totalCourses = 0;
    for (const auto& grade : grades) {
        totalGradePoints += grade.second;
        totalCourses++;
    }
    if (totalCourses == 0) return 0; // Avoid division by zero
    return totalGradePoints / totalCourses;
}

// Method to update the grade for a specific course
void Student::updateGrade(const string& course, double grade) {
    grades[course] = grade;
}

// Getter method for student ID
string Student::getStudentID() const {
    return studentID;
}

// Getter method for student name
string Student::getName() const {
    return name;
}

