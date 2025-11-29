#include "Course.h"

Course::Course(const std::string& id, const std::string& title) 
    : courseID(id), courseTitle(title) {}

std::string Course::getCourseID() const {
    return courseID;
}

std::string Course::getCourseTitle() const {
    return courseTitle;
}

void Course::setCourseID(const std::string& id) {
    courseID = id;
}

void Course::setCourseTitle(const std::string& title) {
    courseTitle = title;
}