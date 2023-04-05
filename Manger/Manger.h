#pragma once
#include <iostream>
#include "Employee.h"
#include <string>

using namespace std;

class Manager : public Employee
{
public:
	friend ostream& operator<<(ostream& out, const Manager& m);
	Manager(string = "No name", double = 0, int = 0, string = "No department");
	Manager(const Manager&);

	~Manager();

	void set_department(string);
	string get_department() const;

	virtual void print();
private:
	string department;
};
ostream& operator<<(ostream& out, const Manager& m);

