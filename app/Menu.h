#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>

class Menu {
public:
    void displayMainMenu();
    void displayStudentMenu();
    void displayCourseMenu();
    void displayRegistrationMenu();
    int getUserChoice(int min, int max);
};

#endif // MENU_H