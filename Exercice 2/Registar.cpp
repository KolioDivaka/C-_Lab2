//
// Created by Kolio on 10/8/2026.
//

#include "Registar.h"

#include <iostream>

#include "Course.h"
using namespace std;

//The friend function doesnt use the getter cuz it has access to the private var of the Course class
void Registar::printReport(const Course& c) {
    double currCapacity = (c.currentStudents*100.00)/c.maxStudents;
    cout<< "Course Title: "<<c.title<<endl;
    cout<< "Enrolled Students are:"<< c.currentStudents<<'/'<< c.maxStudents<<endl;
    cout<< "Current Capacity: "<<currCapacity<<'%'<<endl;

}
