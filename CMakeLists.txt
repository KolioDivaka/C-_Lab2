cmake_minimum_required(VERSION 4.3)
project(Lab2)

set(CMAKE_CXX_STANDARD 26)

add_executable(Lab2 main.cpp
        "Exercise 1/Sensor.cpp"
        "Exercise 1/Sensor.h"
        "Exercice 2/Student.cpp"
        "Exercice 2/Student.h"
        "Exercice 2/Course.cpp"
        "Exercice 2/Course.h"
        "Exercice 2/Registar.cpp"
        "Exercice 2/Registar.h")
