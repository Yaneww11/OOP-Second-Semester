#include "Person.h"

Person::Person() {
    this->name = "";
    this->age = 0;
}

Person::Person(string n, int age) {
    this->name = n;
    this->age = age;
}

void Person::setName(string name) {
    this->name = name;
}

void Person::setAge(int age) {
    this->age = age;
}

// Getters
string Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}


// Print person details
void Person::print() const {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

//Print which car drive
void Person::drive(Car car) {
        cout << name << " is driving a " << car.color << " " << car.make << " " << car.model << "." << endl;
}

void Person::compare_age(Person p)
{
    if ((*this) > p) {
        cout << this->name << " is older than " << p.name << endl;
    }
    else if ((*this) < p) {
        cout << this->name << " is younger than " << p.name << endl;
    }
    else {
        cout << this->name << " and " << p.name << " are of the same age" << endl;
    }
}

// Overloaded comparison operators
bool Person::operator>(const Person& other) const {
    return age > other.age;
}

bool Person::operator<(const Person& other) const {
    return age < other.age;
}
