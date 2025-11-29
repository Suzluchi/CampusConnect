#include "RegistrationManager.h"
#include "../core/Registration.h"
#include "../services/StudentManager.h"
#include "../services/CourseManager.h"
#include <vector>
#include <algorithm>

RegistrationManager::RegistrationManager(StudentManager& studentManager, CourseManager& courseManager)
    : studentManager(studentManager), courseManager(courseManager) {}

bool RegistrationManager::registerStudentForCourse(const std::string& studentId, const std::string& courseId) {
    if (!studentManager.isValidStudent(studentId) || !courseManager.isValidCourse(courseId)) {
        return false;
    }
    Registration registration(studentId, courseId);
    registrations.push_back(registration);
    return true;
}

std::vector<std::string> RegistrationManager::getCoursesForStudent(const std::string& studentId) const {
    std::vector<std::string> courses;
    for (const auto& registration : registrations) {
        if (registration.getStudentId() == studentId) {
            courses.push_back(registration.getCourseId());
        }
    }
    return courses;
}

void RegistrationManager::loadRegistrations(const std::vector<Registration>& loadedRegistrations) {
    registrations = loadedRegistrations;
}

std::vector<Registration> RegistrationManager::getAllRegistrations() const {
    return registrations;
}