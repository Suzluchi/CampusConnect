#ifndef IDGENERATOR_H
#define IDGENERATOR_H

#include <string>
#include <atomic>

class IDGenerator {
public:
    IDGenerator() : studentIDCounter(0), courseIDCounter(0) {}

    std::string generateStudentID() {
        return "S" + std::to_string(studentIDCounter++);
    }

    std::string generateCourseID() {
        return "C" + std::to_string(courseIDCounter++);
    }

private:
    std::atomic<int> studentIDCounter;
    std::atomic<int> courseIDCounter;
};

#endif // IDGENERATOR_H