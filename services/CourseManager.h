#ifndef COURSEMANAGER_H
#define COURSEMANAGER_H

#include <vector>
#include "Course.h"

class CourseManager {
public:
    CourseManager();
    void addCourse(const Course& course);
    Course* getCourse(const std::string& courseId);
    std::vector<Course> getAllCourses() const;

private:
    std::vector<Course> courses;
};

#endif // COURSEMANAGER_H