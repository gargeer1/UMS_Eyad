#ifndef ACADEMICSTAFF_H
#define ACADEMICSTAFF_H

#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

class AcademicStaff {
private:
    string staffID;
    string name;
    string department;
    vector<string> coursesTaught;
    unordered_map<string, vector<string>> studentLists; // Course -> List of students

public:
    // Constructor
    AcademicStaff(string staffID, string name, string department);

    // Methods
    void teachCourse(const string& course);
    void gradeAssignment(const string& course, const string& studentID, double grade);
    void viewStudentList(const string& course) const;
    void scheduleOfficeHours(const string& schedule);

    // Getters
    string getStaffID() const;
    string getName() const;
    string getDepartment() const;
};

#endif // ACADEMICSTAFF_H   
