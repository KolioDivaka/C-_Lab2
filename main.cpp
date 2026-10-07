#include <iostream>

#include "Exercise 1/Sensor.h"
using namespace std;

 static void exercise1();
int main() {
    //Call Exercise 1
    exercise1();
}

static void exercise1() {
    Sensor const sensor(23.3);
    Sensor const sensor2(31.5);

    cout << "Sensor 1 reading: " << endl;
    sensor.describe();
    sensor.describe("Sofia");
    sensor.describe("Sofia",'k');
    sensor.describe("Sofia",'f');
    sensor.describe("Sofia",'g');

    cout << "Sensor 2 reading: " << endl;
    sensor2.describe();
    sensor2.describe("Burgas");
    sensor2.describe("Burgas",'k');
    sensor2.describe("Burgas",'f');
    sensor2.describe("Burgas",'g');

}