#include <iostream>

#include "Exercice 2/Student.h"
#include "Exercice 5/Stack.h"
#include "Exercise 1/Sensor.h"
#include "Exercise 6/Printer.h"
using namespace std;

static void exercise1();
static void exercise2();
static void exercise5();
static void exercise6();


int main() {

    //Call Exercise 1
    // exercise1();
    //Call Exercise 2
    // exercise2();
    //Call Exercise 5
     // exercise5();
    //Call Exercise 6
    exercise6();

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

static void exercise2() {
   const Student student1("Kolio","888241452");
    const Student student2("Koli","888241453");
    const Student student3("Kol","888241454");

    Course course("PE",10);

    enrollStudent(course,student1);
    enrollStudent(course,student2);
    enrollStudent(course,student3);
    Registar::printReport(course);

}

static void exercise5() {
    Stack stack;

    //First load()
    cout << "Stack a-z: " << endl;
    stack.load();
    stack.display();
    stack.clear();

    //Second load(bool isUpper)
    cout << "Stack a-z: " << endl;
    stack.load(false);
    stack.display();
    stack.clear();
    cout << "Stack A-Z: " << endl;
    stack.load(true);
    stack.display();
    stack.clear();

    //Third load(from, to)
    cout << "Stack h-/: " << endl;
    stack.load('h','/');
    stack.display();
    stack.clear();

}
static void exercise6() {
    Printer printer;
    Scanner scanner;

    scanner.plugUsb();
    printer.plugUsb();

    cout<< isUsbBusy(printer, scanner) << endl;

    scanner.unplugUsb();
    printer.unplugUsb();

    cout<< isUsbBusy(printer, scanner) << endl;
}

bool isUsbBusy(const Printer &p, const Scanner &s) {
    return p.usbInUse || s.usbInUse;

}