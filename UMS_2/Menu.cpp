#include "Menu.h"
#include "University.h"
#include "User.h"
#include "Student.h"
#include "AcademicStaff.h"
#include "Course.h"
#include <iostream>
#include <vector>
using namespace std;

// Global instances for testing
University university("My University", "New York");
User user("JohnDoe", "Student", "john@example.com");
Student student("12345", "John Doe");
AcademicStaff academicStaff("98765", "Jane Smith", "Computer Science");
Course course("CS101", "Introduction to Computer Science", 3, "Computer Science");

// Method to display the menu options for the users
void Menu::displayMenu() const {
    cout << "========== Menu ==========" << endl;
    cout << "1. Add a new college to the university" << endl;
    cout << "2. Add a new department to the university" << endl;
    cout << "3. Enroll in a course" << endl;
    cout << "4. View academic transcript" << endl;
    cout << "5. Teach a course" << endl;
    cout << "6. Grade assignment" << endl;
    cout << "7. View student list for a course" << endl;
    cout << "8. View course details" << endl;
    cout << "9. Exit" << endl;
    cout << "10.Write Data to File" << endl;
    cout << "===========================" << endl;
}

// Method to allow users to select an option from the menu
int Menu::selectOption() const {
    int option;
    cout << "Enter your choice: ";
    cin >> option;
    return option;
}
// Method to display the academic transcript of a student
void Menu::viewAcademicTranscript(const Student& student) const {
    student.viewTranscript(); // Call the viewTranscript method of the Student class
}

// Method to execute the selected option from the menu
void Menu::executeOption(int option) {
    switch (option) {
    case 1: {
        string college;
        cout << "Enter the name of the college: ";
        cin >> college;
        university.addCollege(college);
        cout << "College added successfully." << endl;
        break;
    }
    case 2: {
        string department;
        cout << "Enter the name of the department: ";
        cin >> department;
        university.addDepartment(department);
        cout << "Department added successfully." << endl;
        break;
    }
    case 3: {
        string course;
        cout << "Enter the course code to enroll in: ";
        cin >> course;
        student.enrollCourse(course);
        cout << "Enrolled in course successfully." << endl;
        break;
    }
    case 4:
        student.viewTranscript();
        break;
    case 5: {
        string course;
        cout << "Enter the course code to teach: ";
        cin >> course;
        academicStaff.teachCourse(course);
        cout << "Started teaching course successfully." << endl;
        break;
    }
    case 6: {
        string course;
        string studentID;
        double grade;
        cout << "Enter the course code: ";
        cin >> course;
        cout << "Enter the student ID: ";
        cin >> studentID;
        cout << "Enter the grade: ";
        cin >> grade;
        academicStaff.gradeAssignment(course, studentID, grade);
        break;
    }
    case 7: {
        string course;
        cout << "Enter the course code: ";
        cin >> course;
        academicStaff.viewStudentList(course);
        break;
    }
    case 8:
        course.viewCourseDetails();
        break;
    case 9:
        exitSystem();
        break;
    default:
        cout << "Invalid option. Please try again." << endl;
        break;
    }
}

// Method to exit the system gracefully
void Menu::exitSystem() const {
    cout << "Exiting the system. Goodbye!" << endl;
    exit(0);
}
