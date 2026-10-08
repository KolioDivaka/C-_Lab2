//
// Created by Kolio on 10/7/2026.
//

#include "Course.h"

#include <iostream>
#include <ostream>
using namespace std;

Course::Course(const std::string& title, int maxStudents) {
    this->title = title;
    this->maxStudents = maxStudents;
    this->currentStudents = 0;
}

std::string Course::getTitle() const {
    return this->title;
}

int Course::getMaxStudents() const {
    return this->maxStudents;
}

int Course::getCurrentStudents() const {
    return this->currentStudents;
}

void Course::iterateCurrentStudent() {
    currentStudents ++;
}


void enrollStudent( Course &c, const Student &s) {
    if (c.getCurrentStudents() < c.getMaxStudents()) {
        cout<<c.getTitle()<<endl;
        cout <<"Enrolled Student: "<<s.getName()<<endl;
        cout << "Student ID: "<< s.getId() <<endl;
        c.iterateCurrentStudent();

    }
    else {
        cout<< "Can't enroll Student"<<endl;
    }
}
