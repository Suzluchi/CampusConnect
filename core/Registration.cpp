#include "Registration.h"

Registration::Registration(const std::string& studentId, const std::string& courseId)
    : studentId(studentId), courseId(courseId) {}

std::string Registration::getStudentId() const {
    return studentId;
}

std::string Registration::getCourseId() const {
    return courseId;
}

void Registration::setStudentId(const std::string& id) {
    studentId = id;
}

void Registration::setCourseId(const std::string& id) {
    courseId = id;
}