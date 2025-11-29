#include "CourseManager.h"
#include "../core/Course.h"
#include <vector>
#include <algorithm>
#include <iostream>

CourseManager::CourseManager() {}

void CourseManager::addCourse(const Course& course) {
    courses.push_back(course);
}

Course* CourseManager::getCourse(const std::string& courseId) {
    auto it = std::find_if(courses.begin(), courses.end(), [&courseId](const Course& course) {
        return course.getId() == courseId;
    });
    return (it != courses.end()) ? &(*it) : nullptr;
}

std::vector<Course> CourseManager::getAllCourses() const {
    return courses;
}

bool CourseManager::courseExists(const std::string& courseId) const {
    return std::any_of(courses.begin(), courses.end(), [&courseId](const Course& course) {
        return course.getId() == courseId;
    });
}