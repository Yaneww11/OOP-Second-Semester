#include "Owner.h"

Owner::Owner() : Person()
{
    car = Car();
}

Owner::Owner(string n,int age, Car c) : Person(n, age) {
    car = c;
}

void Owner::sitInCar() {
    cout << getName() << " is sitting in their " << car.getColor() << " " << car.getMake() << " " << car.getModel() << "." << endl;
}
