#ifndef DRIVER_H
#define DRIVER_H

#include <string>
#include "Car.h"

class Driver {
public:
    Driver(const std::string& name, Car* car);
    void drive(double time);
    double getPosition() const;
    std::string getName() const;

private:
    std::string name;
    Car* car;
};

#endif // DRIVER_H