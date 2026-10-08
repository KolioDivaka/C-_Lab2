//
// Created by Kolio on 10/7/2026.
//

#ifndef LAB2_COURSE_H
#define LAB2_COURSE_H
#include <string>

#include "Registar.h"
#include "Student.h"

class Student;
class Course {
private: std::string title;
    int maxStudents;
    int currentStudents;

public: Course( const std::string& title, int maxStudents );
    [[nodiscard]] std::string getTitle() const;
    [[nodiscard]] int getMaxStudents() const;
    [[nodiscard]] int getCurrentStudents() const;

    void iterateCurrentStudent();

    friend void enrollStudent(Course& c,const Student& s);
    friend void Registar::printReport(const Course& c);
};


#endif //LAB2_COURSE_H
