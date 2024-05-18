#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
using namespace std;

class Course {
private:
    string courseCode;
    string name;
    int credits;
    string department;
    vector<string> enrolledStudents;

public:
    // Constructor
    Course(string courseCode, string name, int credits, string department);

    // Methods
    void updateCredits(int newCredits);
    void viewCourseDetails() const;
    void listEnrolledStudents() const;

    // Getters
    string getCourseCode() const;
    string getName() const;
    int getCredits() const;
    string getDepartment() const;
};

#endif // COURSE_H
