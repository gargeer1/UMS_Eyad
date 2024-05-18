#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Student {
private:
    string studentID;
    string name;
    vector<string> coursesEnrolled;
    unordered_map<string, double> grades; // Course -> Grade

public:
    // Constructor
    Student(string studentID, string name);

    // Methods
    void enrollCourse(const string& course);
    void viewTranscript() const;
    double calculateGPA() const;
    void updateGrade(const string& course, double grade);

    // Getters
    string getStudentID() const;
    string getName() const;
};
#endif // STUDENT_H
