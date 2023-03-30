#include "Employee.h"
#include <iostream>

Employee::Employee() {
	name = "No name";
	salary = 0;
}
Employee::Employee(string n, double s) {
	name = n;
	if (s < 0) {
		cout << "Wrong input" << endl;
	}
	else
	  salary = s;
}
Employee::Employee(const Employee& e) {
	name = e.name;
	salary = e.salary;
}
Employee::~Employee(){
}
void Employee::set_name(string name) {
	this->name = name;
}
void Employee::set_salary(double s)
{
	this->salary = s;
}

string Employee::get_name() const
{
	return name;
}

double Employee::get_salary() const
{
	return salary;
}

Employee& Employee::operator=(const Employee& e)
{
	if (this != &e) {
		name = e.name;
		salary = e.salary;
	}
	return *this;
}

ostream& operator<<(ostream& out, const Employee& e)
{
	out << "Name: " << e.name << endl << "Salary:" << e.salary << endl;
	return out;
}
