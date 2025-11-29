#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string studentID;
    std::string name;

public:
    // Constructor
    Student(const std::string& id, const std::string& name);

    // Getters
    std::string getStudentID() const;
    std::string getName() const;

    // Setters
    void setStudentID(const std::string& id);
    void setName(const std::string& name);
};

#endif // STUDENT_H