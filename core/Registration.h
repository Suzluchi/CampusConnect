#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <string>

class Registration {
private:
    std::string studentID;
    std::string courseID;

public:
    Registration(const std::string& studentID, const std::string& courseID);
    
    std::string getStudentID() const;
    void setStudentID(const std::string& studentID);
    
    std::string getCourseID() const;
    void setCourseID(const std::string& courseID);
};

#endif // REGISTRATION_H