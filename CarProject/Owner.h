#pragma once
#include "Person.h"
class Owner : public Person
{
protected:
    Car car;

public:
    Owner();
    Owner(string , int, Car );
    void driveCar();
};
