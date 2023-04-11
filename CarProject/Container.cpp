#include "Container.h"
Container::Container() {
    numCars = 0;
}

void Container::addCar(Car car) {
    if (numCars < 10) {
        cars[numCars] = car;
        numCars++;
    }
    else {
        cout << "Error: Container is full." << endl;
    }
}

void Container::printCars() {
    for (int i = 0; i < numCars; i++) {
        cout << cars[i].getMake() << " " << cars[i].getModel() << " (" << cars[i].getColor() << ")" << endl;
    }
}
Car& Container::operator[](int index)
{
    return Container::cars[index];
}
