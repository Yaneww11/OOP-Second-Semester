#include "Employee.h"

Employee::Employee(string s, double d, int i)
{
	name = s;
	salary = d;
	internship = i;
}

Employee::Employee(const Employee& e)
{
	name = e.name;
	salary = e.salary;
	internship = e.internship;
}

Employee::~Employee()
{
}

void Employee::set_name(string n)
{
	name = n;
}

void Employee::set_salary(double s)
{
	salary = s;
}

void Employee::set_internship(int internship)
{
	this->internship = internship;
}

string Employee::get_name() const
{
	return name;
}

double Employee::get_salary() const
{
	return salary;
}

int Employee::get_internship() const
{
	return internship;
}
void Employee::print()
{
	cout << "Name: " << name << endl;
	cout << "Salary: " << salary << "lv." << endl;
}
ostream& operator<<(ostream& out, const Employee& e)
{
	out << "Name: " << e.name << endl;
	out << "Salary: " << e.salary << "lv." << endl;
	out << "Internship: " << e.internship << " years." << endl;

	return out;
}
