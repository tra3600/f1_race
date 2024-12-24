#include "Driver.h"

Driver::Driver(const std::string& name, Car* car) : name(name), car(car) {}

void Driver::drive(double time) {
    car->updatePosition(time);
}

double Driver::getPosition() const {
    return car->getPosition();
}

std::string Driver::getName() const {
    return name;
}