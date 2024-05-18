#include "University.h"
#include "User.h"
#include "Student.h"
#include "AcademicStaff.h"
#include "Course.h"
#include "Menu.h"
#include "FileInput.h"
#include <iostream>
#include <vector>

int main() {
    // Create instances of other classes
    University university("My University", "New York");
    User user("JohnDoe", "Student", "john@example.com");
    Student student("12345", "John Doe");
    AcademicStaff academicStaff("98765", "Jane Smith", "Computer Science");
    Course course("CS101", "Introduction to Computer Science", 3, "Computer Science");

    // Create an instance of the Menu class
    Menu menu;
    int option;

    // Create an instance of the FileInput class
    FileInput fileInput;

    // Read and display existing data from input file
    std::vector<std::string> inputData = fileInput.readDataFromFile("E:\\MSA\\UMS_2\\UMS_2\\UMS_2\\x64\\Debug\\input_data.txt");
    std::cout << "Sample Data from input file:\n";
    for (const auto& line : inputData) {
        std::cout << line << std::endl;
    }

    // Read existing data from file
    std::vector<std::vector<std::string>> parsedData = fileInput.parseData(inputData);

    do {
        menu.displayMenu();
        option = menu.selectOption();

        switch (option) {
        case 1: {
            std::string college;
            std::cout << "Enter the name of the college: ";
            std::cin >> college;
            university.addCollege(college);
            parsedData.push_back({ "College", college }); // Update parsedData with new college
            std::cout << "College added successfully." << std::endl;
            break;
        }
        case 2: {
            std::string department;
            std::cout << "Enter the name of the department: ";
            std::cin >> department;
            university.addDepartment(department);
            parsedData.push_back({ "Department", department }); // Update parsedData with new department
            std::cout << "Department added successfully." << std::endl;
            break;
        }
        case 3: {
            std::string course;
            std::cout << "Enter the course code to enroll in: ";
            std::cin >> course;
            student.enrollCourse(course);
            parsedData.push_back({ "EnrollCourse", course }); // Update parsedData with new enrolled course
            std::cout << "Enrolled in course successfully." << std::endl;
            break;
        }
        
        case 4:
            menu.viewAcademicTranscript(student);
            break;

        case 5: {
            std::string course;
            std::cout << "Enter the course code to teach: ";
            std::cin >> course;
            academicStaff.teachCourse(course);
            parsedData.push_back({ "TeachCourse", course }); // Update parsedData with new taught course
            std::cout << "Started teaching course successfully." << std::endl;
            break;
        }
        case 6: {
            std::string course;
            std::string studentID;
            double grade;
            std::cout << "Enter the course code: ";
            std::cin >> course;
            std::cout << "Enter the student ID: ";
            std::cin >> studentID;
            std::cout << "Enter the grade: ";
            std::cin >> grade;
            academicStaff.gradeAssignment(course, studentID, grade);
            parsedData.push_back({ "GradeAssignment", course, studentID, std::to_string(grade) }); // Update parsedData with graded assignment
            break;
        }
        case 7: {
            std::string course;
            std::cout << "Enter the course code: ";
            std::cin >> course;
            academicStaff.viewStudentList(course);
            // No need to update parsedData here
            break;
        }
        case 8: {
            course.viewCourseDetails();
            // No need to update parsedData here
            break;
        }
        case 9: {
            menu.exitSystem();
            // No need to update parsedData here
            break;
        }
        case 10: {
            // Write data to file
            std::string formattedData = fileInput.formatData(parsedData);
            fileInput.writeDataToFile("E:\\MSA\\UMS_2\\UMS_2\\UMS_2\\x64\\Debug\\output_data.txt", formattedData);
            std::cout << "Your data has been saved to output_data.txt" << std::endl;
            break;
        }
        default:
            std::cout << "Invalid option. Please try again." << std::endl;
            break;
        }
    } while (option != 9);

    return 0;
}
