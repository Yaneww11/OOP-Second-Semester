#pragma once
#include "Car.h"

using namespace std;

class Container
{
private:
    Car cars[10];
    int numCars;

public:
    Container();

    void addCar(Car );

    void printCars();

    Car& operator[](int index);
};
