#pragma once
#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
	friend ostream& operator<<(ostream& out, const Employee& e);
	Employee();
	Employee(string, double);
	Employee(const Employee&);
	~Employee();
	void set_name(string);
	void set_salary(double);
	string get_name() const;
	double get_salary() const;
	Employee& operator=(const Employee&);
private:
	string name;
	double salary;

};
ostream& operator << (ostream&, const Employee&);

