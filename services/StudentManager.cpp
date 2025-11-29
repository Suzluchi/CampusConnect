#include "StudentManager.h"
#include "Student.h"
#include <vector>
#include <algorithm>
#include <iostream>

void StudentManager::addStudent(const Student& student) {
    students.push_back(student);
}

Student* StudentManager::getStudentById(const std::string& studentId) {
    auto it = std::find_if(students.begin(), students.end(), [&studentId](const Student& student) {
        return student.getId() == studentId;
    });
    return (it != students.end()) ? &(*it) : nullptr;
}

std::vector<Student> StudentManager::getAllStudents() const {
    return students;
}

bool StudentManager::validateStudentId(const std::string& studentId) const {
    return std::any_of(students.begin(), students.end(), [&studentId](const Student& student) {
        return student.getId() == studentId;
    });
}