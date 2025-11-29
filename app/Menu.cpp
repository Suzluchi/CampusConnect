#include "Menu.h"
#include <iostream>
#include "../services/StudentManager.h"
#include "../services/CourseManager.h"
#include "../services/RegistrationManager.h"

void Menu::displayMainMenu() {
    std::cout << "=== CampusConnect Main Menu ===" << std::endl;
    std::cout << "1. Add Student" << std::endl;
    std::cout << "2. Add Course" << std::endl;
    std::cout << "3. Register Student for Course" << std::endl;
    std::cout << "4. Display Student Courses" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Please select an option: ";
}

void Menu::handleUserInput(StudentManager& studentManager, CourseManager& courseManager, RegistrationManager& registrationManager) {
    int choice;
    while (true) {
        displayMainMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                studentManager.addStudent();
                break;
            case 2:
                courseManager.addCourse();
                break;
            case 3:
                registrationManager.registerStudentForCourse();
                break;
            case 4:
                registrationManager.displayStudentCourses();
                break;
            case 5:
                std::cout << "Exiting the program." << std::endl;
                return;
            default:
                std::cout << "Invalid option. Please try again." << std::endl;
        }
    }
}