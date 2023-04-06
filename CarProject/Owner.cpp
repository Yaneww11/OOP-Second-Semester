#include "Owner.h"
#include "Car.h"

using namespace std;

// Default constructor
Owner::Owner() : PersonDriver() {
    car = Car();
}

// Parameterized constructor
Owner::Owner(string name, int age, bool has_driver_license, Car car) : PersonDriver(name, age, has_driver_license) {
    this->car = car;
}

// Setter
void Owner::setProperty(Car car) {
    this->car = car;
}

// Getter
Car Owner::getProperty() const {
    return car;
}

// Print owner details
void Owner::print() const {
    PersonDriver::print();
}