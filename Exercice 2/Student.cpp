//
// Created by Kolio on 10/7/2026.
//

#include "Student.h"
#include <cstring>




Student::Student(const std::string &name, const char id[10]) {
    this->name = name;
    strcpy(this->id, id);
}

std::string Student::getName() const {
    return name;
}

std::string Student::getId() const {
    return id;
}
