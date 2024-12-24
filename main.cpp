#include <iostream>
#include <vector>
#include <algorithm>
#include "Car.h"
#include "Driver.h"
#include "Track.h"

int main() {
    // Create cars
    Car car1("Ferrari", 80.0); // Speed in m/s
    Car car2("Mercedes", 78.0);
    Car car3("Red Bull", 77.0);

    // Create drivers
    Driver driver1("Lewis Hamilton", &car1);
    Driver driver2("Max Verstappen", &car2);
    Driver driver3("Charles Leclerc", &car3);

    std::vector<Driver*> drivers = {&driver1, &driver2, &driver3};

    // Create track
    Track track(5000); // Length in meters

    // Simulate the race
    double raceTime = 0;
    double timeStep = 1; // Time step in seconds
    bool raceOver = false;

    while (!raceOver) {
        raceTime += timeStep;
        for (auto& driver : drivers) {
            driver->drive(timeStep);
        }

        // Check if any driver has finished the race
        for (auto& driver : drivers) {
            if (driver->getPosition() >= track.getLength()) {
                raceOver = true;
                break;
            }
        }
    }

    // Sort drivers by position
    std::sort(drivers.begin(), drivers.end(), [](Driver* a, Driver* b) {
        return a->getPosition() > b->getPosition();
    });

    // Display race results
    std::cout << "Race finished in " << raceTime << " seconds!\n";
    for (size_t i = 0; i < drivers.size(); ++i) {
        std::cout << i + 1 << ". " << drivers[i]->getName() << " (" << drivers[i]->getPosition() << " meters)\n";
    }

    return 0;
}