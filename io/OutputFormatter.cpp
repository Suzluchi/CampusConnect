#include "OutputFormatter.h"
#include <iostream>
#include <vector>
#include <string>

void OutputFormatter::displayStudentCourses(const std::string& studentName, const std::vector<std::string>& courses) {
    std::cout << "Courses for " << studentName << ":\n";
    if (courses.empty()) {
        std::cout << "No courses registered.\n";
    } else {
        for (const auto& course : courses) {
            std::cout << "- " << course << "\n";
        }
    }
}

void OutputFormatter::displayMessage(const std::string& message) {
    std::cout << message << std::endl;
}

void OutputFormatter::displayError(const std::string& errorMessage) {
    std::cerr << "Error: " << errorMessage << std::endl;
}