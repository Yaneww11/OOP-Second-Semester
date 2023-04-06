#include "PersonDriver.h"
#include <iostream>
#include <string>

using namespace std;
// Default constructor
PersonDriver::PersonDriver() {
    name = "";
    age = 0;
    has_driver_license = false;
}

// Parameterized constructor
PersonDriver::PersonDriver(string name, int age, bool has_driver_license) {
    this->name = name;
    this->age = age;
    this->has_driver_license = has_driver_license;
}

// Setters
void PersonDriver::setName(string name) {
    this->name = name;
}

void PersonDriver::setAge(int age) {
    this->age = age;
}

void PersonDriver::setHasDriverLicense(bool has_driver_license) {
    this->has_driver_license = has_driver_license;
}

// Getters
string PersonDriver::getName() const {
    return name;
}

int PersonDriver::getAge() const {
    return age;
}

bool PersonDriver::hasDriverLicense() const {
    return has_driver_license;
}

// Print person details
void PersonDriver::print() const {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

// Overloaded comparison operators
bool PersonDriver::operator>(const PersonDriver& other) const {
    return age > other.age;
}

bool PersonDriver::operator<(const PersonDriver& other) const {
    return age < other.age;
}

bool PersonDriver::canDrive() const
{
    if (age > 60) {
        return false;
    }
    return has_driver_license;
}
