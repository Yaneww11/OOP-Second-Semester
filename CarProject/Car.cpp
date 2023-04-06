#include "Car.h"
#include <iostream>

using namespace std;

Car::Car()
{
	brand = "No brand";
	colour = "No colour";
	top_speed = 0;
}

Car::Car(string brand, string colour, int top_speed)
{
	this->brand = brand;
	this->colour = colour;
	if (top_speed > 0) {
		this->top_speed = top_speed;
	}
	else{
		this->top_speed = 0;
	}
}

Car::~Car()
{
}

void Car::set_brand(string brand)
{
	this->brand = brand;
}

void Car::set_colour(string colour)
{
	this->colour = colour;
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

string Car::get_brand() const
{
	return brand;
}

string Car::get_colour() const
{
	return colour;
}

int Car::get_top_speed() const
{
	return top_speed;
}

void Car::print()
{
	cout << "Brand of car is: " << brand << endl;
	cout << "Colour of car is: " << colour << endl;
	cout << "Top speed of car is: " << top_speed << endl;
}

Car operator+(const Car& car, const int& n )
{
	return Car(car.brand, car.colour, car.top_speed + n);
}
Car operator-(const Car& car , const int& n)
{
	return Car(car.brand, car.colour, car.top_speed - n);
}
ostream& operator<<(ostream& out, const Car& car)
{
	out << "Brand: " << car.brand << endl;
	out << "Colour: " << car.colour << endl;
	out << "Top Speed: " << car.top_speed << endl;
	return out;
}
Car& Car::operator=(const Car& car)
{
	if (this != &car) {
		brand = car.brand;
		colour = car.colour;
		if (car.top_speed > 0) {
			top_speed =car.top_speed;
		}
		else {
			top_speed = 0;
		}
	}
	return *this;
}
