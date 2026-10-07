//
// Created by Kolio on 10/7/2026.
//

#ifndef LAB2_SENSOR_H
#define LAB2_SENSOR_H
#include <string>


class Sensor {

private: double celsius;

    public: Sensor(double celsius);
    [[nodiscard]] double getCelsius() const;
    //returns only Celsius
    [[nodiscard]] double read() const;
    //return F or K depending on the scale
    [[nodiscard]] double read(char scale) const;
    //returns both F and K
    void read(double& fahrenheit, double& kelvin) const;
    //prints Celsius
    void describe() const;
    //prints celsius and the location
    void describe( const std::string& location) const;
    //prints the location and the temperature in selected scale (F or K)
    void describe(const std::string& location, char scale) const;
};


#endif //LAB2_SENSOR_H
