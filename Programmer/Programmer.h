#pragma once
#include "Employee.h"
#include <iostream>
#include <string>

using namespace std;


class Programmer: public Employee
{
public:
	friend ostream& operator<<(ostream& out, const Programmer& p);
	Programmer();
	Programmer(string name, double salary);
	Programmer(const Programmer&);
	~Programmer();
	void set_salary(double);
	double get_salary() const;
	string get_name() const;
	Programmer& operator=(const Programmer&);
private:
	double salary;
};
ostream& operator << (ostream&, const Programmer&);

