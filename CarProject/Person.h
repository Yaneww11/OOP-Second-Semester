#pragma once
#include "Car.h"


class Person
{
private:
    string name;
    int age;
public:
    Person();
    Person(string, int);

    void setAge(int age);
    void setName(string name);

    string getName() const;
    int getAge() const;

 
    void print() const;
    void drive(Car);
    void compare_age(Person);

    bool operator>(const Person& other) const;
    bool operator<(const Person& other) const;
};
