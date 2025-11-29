#ifndef OUTPUTFORMATTER_H
#define OUTPUTFORMATTER_H

#include <string>
#include <vector>

class OutputFormatter {
public:
    static void displayStudentInfo(const std::string& studentId, const std::string& name);
    static void displayCourseInfo(const std::string& courseId, const std::string& title);
    static void displayRegisteredCourses(const std::string& studentId, const std::vector<std::string>& courses);
    static void displayMessage(const std::string& message);
};

#endif // OUTPUTFORMATTER_H