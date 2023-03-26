#pragma once
#include <iostream>

using namespace std;

class Building;
Building operator+(const Building&, const int&);
Building operator+(const int&, const Building&);
Building operator+=(Building&, const int&);
Building operator+=(const int&, Building&);
ostream& operator<<(ostream& out, const Building& b);
istream& operator>>(istream& in, Building& b);

class Building
{
	friend Building operator+(const Building&, const int&);
	friend Building operator+(const int&, const Building&);
	friend Building operator+=(Building&, const int&);
	friend Building operator+=(const int&, Building&);
	friend ostream& operator<<(ostream& out, const Building& b);
	friend istream& operator>>(istream& in, Building& b);
public:
	Building();
	Building(string, int, int, int, int);
	~Building();
	void set_address(string);
	void set_planned_floors(int);
	void set_planned_entrances(int);
	void set_built_floors(int);
	void set_built_entraces(int);
	string get_address()const;
	int get_planned_floors()const;
	int get_planned_entrances()const;
	int get_built_floors()const;
	int get_built_entraces()const;
	void print()const;
private:
	string address;
	int planned_floors;
	int planned_entraces;
	int built_floors;
	int built_entraces;
};

