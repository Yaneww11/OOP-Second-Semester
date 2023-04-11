#include "Car.h"
#include "Container.h"
#include "Person.h"
#include "Owner.h"

#include <iostream>

int main()
{
    Car car1("Toyota", "Camry", "Blue", 200);
    Car car2("Ford", "Mustang", "Red", 200);
    Car car3("Honda", "Accord", "Green", 200);
    Car car4("Audi", "Q7", "Black", 300);

    cout << car1;
    car1 = car1 + 30;
    car2 = car2 - 10;
    cout << car1;
    cout << "Ford top speed is: " << car2.getTopSpeed() << "km/h" << endl;

    Container container;
    container.addCar(car1);
    container.addCar(car2);
    container.addCar(car3);
    container[2] = car4;

    container.printCars();

    Person person1("John", 14);
    Person person2("Anton", 65);
    person1.drive(car1);

    // Compare ages
    person1.compare_age(person2);

    Owner owner1("Yane", 20, car4);
    owner1.sitInCar();
    person2.compare_age(owner1);
}
