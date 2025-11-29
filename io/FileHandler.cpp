#include "FileHandler.h"
#include <fstream>
#include <iostream>
#include <vector>
#include "../core/Student.h"
#include "../core/Course.h"
#include "../core/Registration.h"

void FileHandler::saveStudents(const std::vector<Student>& students) {
    std::ofstream outFile("students.txt");
    if (outFile.is_open()) {
        for (const auto& student : students) {
            outFile << student.getId() << "," << student.getName() << "\n";
        }
        outFile.close();
    } else {
        std::cerr << "Unable to open file for writing students." << std::endl;
    }
}

void FileHandler::loadStudents(std::vector<Student>& students) {
    std::ifstream inFile("students.txt");
    std::string line;
    while (std::getline(inFile, line)) {
        size_t commaPos = line.find(',');
        if (commaPos != std::string::npos) {
            std::string id = line.substr(0, commaPos);
            std::string name = line.substr(commaPos + 1);
            students.emplace_back(id, name);
        }
    }
    inFile.close();
}

void FileHandler::saveCourses(const std::vector<Course>& courses) {
    std::ofstream outFile("courses.txt");
    if (outFile.is_open()) {
        for (const auto& course : courses) {
            outFile << course.getId() << "," << course.getTitle() << "\n";
        }
        outFile.close();
    } else {
        std::cerr << "Unable to open file for writing courses." << std::endl;
    }
}

void FileHandler::loadCourses(std::vector<Course>& courses) {
    std::ifstream inFile("courses.txt");
    std::string line;
    while (std::getline(inFile, line)) {
        size_t commaPos = line.find(',');
        if (commaPos != std::string::npos) {
            std::string id = line.substr(0, commaPos);
            std::string title = line.substr(commaPos + 1);
            courses.emplace_back(id, title);
        }
    }
    inFile.close();
}

void FileHandler::saveRegistrations(const std::vector<Registration>& registrations) {
    std::ofstream outFile("registrations.txt");
    if (outFile.is_open()) {
        for (const auto& registration : registrations) {
            outFile << registration.getStudentId() << "," << registration.getCourseId() << "\n";
        }
        outFile.close();
    } else {
        std::cerr << "Unable to open file for writing registrations." << std::endl;
    }
}

void FileHandler::loadRegistrations(std::vector<Registration>& registrations) {
    std::ifstream inFile("registrations.txt");
    std::string line;
    while (std::getline(inFile, line)) {
        size_t commaPos = line.find(',');
        if (commaPos != std::string::npos) {
            std::string studentId = line.substr(0, commaPos);
            std::string courseId = line.substr(commaPos + 1);
            registrations.emplace_back(studentId, courseId);
        }
    }
    inFile.close();
}