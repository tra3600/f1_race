#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
public:
    Car(const std::string& model, double speed);
    double getSpeed() const;
    void updatePosition(double time);

    double getPosition() const;
    std::string getModel() const;

private:
    std::string model;
    double speed;    // Speed in meters per second
    double position; // Position in meters
};

#endif // CAR_H