#include "Owner.h"

Owner::Owner() : Person()
{
    car = Car();
}

Owner::Owner(string n,int age, Car c) : Person(n, age) {
    car = c;
}

void Owner::driveCar() {
    cout << getName() << " is driving their " << car.getColor() << " " << car.getMake() << " " << car.getModel() << "." << endl;
}
