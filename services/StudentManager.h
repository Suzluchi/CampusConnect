#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H

#include <vector>
#include <string>
#include "core/Student.h"

class StudentManager {
public:
    void addStudent(const Student& student);
    Student* getStudent(const std::string& studentID);
    bool validateStudent(const std::string& studentID);
    std::vector<Student> getAllStudents() const;

private:
    std::vector<Student> students;
};

#endif // STUDENTMANAGER_H