#include "Employee.h"
#include <iostream>

Employee::Employee() {
	name = "No name";
}
Employee::Employee(string n) {
	name = n;
}
Employee::Employee(const Employee& e) {
	name = e.name;
}
Employee::~Employee(){
}
void Employee::set_name(string name) {
	this->name = name;
}
string Employee::get_name() const
{
	return name;
}

Employee& Employee::operator=(const Employee& e)
{
	if (this != &e) {
		name = e.name;
	}
	return *this;
}

ostream& operator<<(ostream& out, const Employee& e)
{
	out << "Name: " << e.name << endl;
	return out;
}
