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
	string get_name() const;
	Programmer& operator=(const Programmer&);
};
ostream& operator << (ostream&, const Programmer&);

