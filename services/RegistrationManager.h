#ifndef REGISTRATIONMANAGER_H
#define REGISTRATIONMANAGER_H

#include <vector>
#include "Registration.h"
#include "Student.h"
#include "Course.h"

class RegistrationManager {
public:
    void registerStudent(const Student& student, const Course& course);
    std::vector<Course> getRegisteredCourses(const Student& student) const;
    void loadRegistrations();
    void saveRegistrations() const;

private:
    std::vector<Registration> registrations;
};

#endif // REGISTRATIONMANAGER_H