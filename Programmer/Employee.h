#pragma once
#include <iostream>

using namespace std;

class Employee
{
public:
	friend ostream& operator<<(ostream& out, const Employee& e);
	Employee();
	Employee(string);
	Employee(const Employee&);
	~Employee();
	void set_name(string);	
	string get_name() const;
	Employee& operator=(const Employee&);
private:
	string name;

};
ostream& operator << (ostream&, const Employee&);

