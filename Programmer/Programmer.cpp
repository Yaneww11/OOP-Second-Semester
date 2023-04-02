#include "Programmer.h"
#include <iostream>


Programmer::Programmer():Employee() {
	salary = 0;
}
Programmer::Programmer(string n, double s):Employee(n) {
	salary = s;

}
Programmer::Programmer(const Programmer& p) {
	Employee::Employee(p.get_name());
	salary = p.salary;
}
Programmer::~Programmer() {
}
void Programmer::set_salary(double s)
{
	this->salary = s;
}
double Programmer::get_salary() const
{
	return salary;
}

string Programmer::get_name() const
{
	return "Hacker, " + Employee::get_name() + "(Programmer)";
}


Programmer& Programmer::operator=(const Programmer& p)
{
	if (this != &p) {
		salary = p.salary;
	}
	return *this;
}

ostream& operator<<(ostream& out, const Programmer& p)
{
	out << *dynamic_cast<const Employee*>(&p) << "Salary is: " << p.salary << endl;
	return out;
}

