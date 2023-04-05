#include "Manager.h"

Manager::Manager(string name, double salary, int internship, string department): Employee(name, salary, internship)
{
	this->department = department;
}

Manager::Manager(const Manager& m): Employee(m)
{
	department = m.department;
}

Manager::~Manager()
{
}

void Manager::set_department(string d)
{
	department = d;
}

string Manager::get_department() const
{
	return department;
}
ostream& operator<<(ostream& out, const Manager& m)
{
	out << *dynamic_cast<const Employee*>(&m) << "Department is: " << m.department << endl;
	return out;
}

void Manager::print()
{
	cout << "########## New Manager ##########" << endl;
	Employee::print();
	cout << "Department is: " << department << endl;
}
