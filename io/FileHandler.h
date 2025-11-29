#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <string>
#include <vector>
#include "Student.h"
#include "Course.h"
#include "Registration.h"

class FileHandler {
public:
    // Loads students from a file
    static std::vector<Student> loadStudents(const std::string& filename);

    // Loads courses from a file
    static std::vector<Course> loadCourses(const std::string& filename);

    // Loads registrations from a file
    static std::vector<Registration> loadRegistrations(const std::string& filename);

    // Saves students to a file
    static void saveStudents(const std::string& filename, const std::vector<Student>& students);

    // Saves courses to a file
    static void saveCourses(const std::string& filename, const std::vector<Course>& courses);

    // Saves registrations to a file
    static void saveRegistrations(const std::string& filename, const std::vector<Registration>& registrations);
};

#endif // FILEHANDLER_H