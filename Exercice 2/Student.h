//
// Created by Kolio on 10/7/2026.
//

#ifndef LAB2_STUDENT_H
#define LAB2_STUDENT_H
#include <string>
#include "Course.h"

class Student {
private: std::string name;
         char id[10]{};
public: Student(const std::string& name, const char id[10]);
    [[nodiscard]] std::string getName() const;
    [[nodiscard]] std::string getId() const;

    friend void enrollStudent(Course& c,const Student& s);


};


#endif //LAB2_STUDENT_H
