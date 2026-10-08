//
// Created by Kolio on 10/8/2026.
//

#include "Registar.h"

#include <iostream>

#include "Course.h"
using namespace std;


void Registar::printReport(const Course& c) {
    double currCapacity = (c.getCurrentStudents()*100.00)/c.getMaxStudents();
    cout<< "Course Title: "<<c.getTitle()<<endl;
    cout<< "Enrolled Students are:"<< c.getCurrentStudents()<<'/'<< c.getMaxStudents()<<endl;
    cout<< "Current Capacity: "<<currCapacity<<'%'<<endl;

}
