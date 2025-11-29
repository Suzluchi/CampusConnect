#ifndef COURSE_H
#define COURSE_H

#include <string>

class Course {
private:
    std::string courseID;
    std::string title;

public:
    Course(const std::string& id, const std::string& title);
    
    std::string getCourseID() const;
    void setCourseID(const std::string& id);
    
    std::string getTitle() const;
    void setTitle(const std::string& title);
};

#endif // COURSE_H