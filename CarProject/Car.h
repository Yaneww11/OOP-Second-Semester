#pragma once
#include <iostream>

using namespace std;

class Car;
Car operator+(const Car&, const int&);
Car operator-(const Car&, const int&);
ostream& operator<<(ostream& out, const Car& c);

class Car
{
    friend Car operator+(const Car&, const int&);
    friend Car operator-(const Car&, const int&);
    friend ostream& operator<<(ostream& out, const Car& c);
private:
    string make;
    string model;
    string color;
    int top_speed;

public:
    Car();
    Car(string , string , string , int );

    string getMake();
    string getModel();
    string getColor();
    int getTopSpeed();

   
    void setMake(string);
    void setModel(string);
    void setColor(string);
    void set_top_speed(int);

    Car& operator=(const Car&);

    friend class Person;
};
