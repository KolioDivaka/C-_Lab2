//
// Created by Kolio on 10/7/2026.
//

#include "Sensor.h"

#include <iostream>
#include <ostream>
using namespace std;

Sensor::Sensor(double celsius) {
    this->celsius = celsius;
}

double Sensor::getCelsius() const {
    return celsius;
}

double Sensor::read() const {
    return getCelsius();
}

double Sensor::read(char scale) const {
    if (tolower(scale) == 'k') {
        return getCelsius()+273.15;
    }
    if (tolower(scale) == 'f') {
        return (getCelsius()*1.8)+32;
    }
    std::cout << "Unknown scale!" << std::endl;
    exit(1);
}
/* This takes the addresses of both F and K and based on the "reading" of the sensor
 * we get the F and K values and write variable outside the class
 * Use cases:
 * 1. Multiple returns
 * 2. Cleaner Code
 */
void Sensor::read(double &fahrenheit, double &kelvin) const {
    fahrenheit=read('f');
    kelvin=read('k');
}


void Sensor::describe() const {
    cout << "Temperature in Celsius: " << celsius <<"°C"<< endl;
}

void Sensor::describe(const std::string &location) const {
    cout << "Location: " << location << endl;
    describe();
}

void Sensor::describe(const std::string &location, char scale) const {
    cout << "Location: " << location << endl;
    cout << "Temperature: " << read(scale) << (scale == 'k' ? "K" : "°F") << endl;
}



