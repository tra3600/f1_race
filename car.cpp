#include "Car.h"

Car::Car(const std::string& model, double speed) : model(model), speed(speed), position(0.0) {}

double Car::getSpeed() const {
    return speed;
}

void Car::updatePosition(double time) {
    position += speed * time;
}

double Car::getPosition() const {
    return position;
}

std::string Car::getModel() const {
    return model;
}
