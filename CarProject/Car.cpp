#include "Car.h"

Car::Car(){
    // initialize default values
    make = "unknown";
    model = "unknown";
    color = "unknown";
    top_speed = 0;
}
Car::Car(string mk, string mdl, string clr, int top_speed) {
    make = mk;
    model = mdl;
    color = clr;
    if (top_speed > 0) {
        this->top_speed = top_speed;
    }
    else {
        this->top_speed = 0;
    }
}

string Car::getMake() {
    return make;
}

string Car::getModel() {
    return model;
}

string Car::getColor() {
    return color;
}

int Car::getTopSpeed()
{
    return top_speed;
}


void Car::set_top_speed(int top_speed)
{
    if (top_speed > 0) {
        this->top_speed = top_speed;
    }
    else {
        this->top_speed = 0;
    }
}

void Car::setMake(string make)
{
    this->make = make;
}

void Car::setModel(string model)
{
    this->model = model;
}

void Car::setColor(string color)
{
    this->color = color;
}

Car operator+(const Car& car, const int& n)
{
    return Car(car.make,car.model, car.color, car.top_speed + n);
}
Car operator-(const Car& car, const int& n)
{
    return Car(car.make, car.model, car.color, car.top_speed - n);
}
ostream& operator<<(ostream& out, const Car& car)
{
    out << "Brand: " << car.make << " " << car.model << endl;
    out << "Colour: " << car.color << endl;
    out << "Top Speed: " << car.top_speed << endl;
    return out;
}
Car& Car::operator=(const Car& car)
{
    if (this != &car) {
        make = car.make;
        model = car.model;
        color = car.color;
        if (car.top_speed > 0) {
            top_speed = car.top_speed;
        }
        else {
            top_speed = 0;
        }
    }
    return *this;
}
