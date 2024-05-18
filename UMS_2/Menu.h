#include "Student.h"

#ifndef MENU_H
#define MENU_H
class Student; // Forward declaration

class Menu {
public:
    // Methods
    void displayMenu() const;
    int selectOption() const;
    void executeOption(int option);
    void exitSystem() const;
    void viewAcademicTranscript(const Student& student) const;
        

    
};

#endif // MENU_H