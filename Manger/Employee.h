#pragma once
#include <string>
#include <iostream>

using namespace std;

class Employee
{
public:
	friend ostream& operator<<(ostream& out, const Employee& e);
	Employee(string = "No name", double = 0, int = 0);
	Employee(const Employee&);

	~Employee();

	void set_name(string);
	void set_salary(double);
	void set_internship(int);

	string get_name() const;
	double get_salary() const;
	int get_internship() const;

	virtual void print();

private:
	string name;
	double salary;
	int internship;

};
ostream& operator<<(ostream& out, const Employee& e);

