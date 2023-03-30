#include "Programmer.h"
#include <iostream>


Programmer::Programmer():Employee() {

}
Programmer::Programmer(string n, double s):Employee(n, s) {

}
Programmer::Programmer(const Programmer& p) {
	Employee::Employee(p.get_name(), p.get_salary());
}
Employee::~Employee() {
}

string Programmer::get_name() const
{
	return "Hacker, " + Employee::get_name() + "(Programmer)";
}


Programmer& Programmer::operator=(const Programmer& p)
{
	if (this != &p) {
		Employee::operator=(p);
	}
	return *this;
}

ostream& operator<<(ostream& out, const Programmer& p)
{
	out << *dynamic_cast<const Employee*>(&p) << endl;
	return out;
}

