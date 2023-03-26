#include "Building.h"

Building::Building() {
	address = "New street";
	planned_floors = 8;
	planned_entraces = 4;
	built_floors = 0;
	built_entraces = 0;
}
Building::Building(string address, int planned_floors, int planned_entraces, int build_floors, int build_entraces) {
	this->address = address;
	this->planned_floors = planned_floors;
	this->planned_entraces = planned_entraces;
	this->built_floors = build_floors;
	this->built_entraces = build_entraces;
}
Building::~Building(){}

void Building::set_address(string address) {
	this->address = address;
}
void Building::set_planned_floors(int planned_floors) {
	this->planned_floors = planned_floors;
}
void Building::set_planned_entrances(int planned_entraces) {
	this->planned_entraces = planned_entraces;
}
void Building::set_built_floors(int build_floors) {
	this->built_floors = build_floors;
}
void Building::set_built_entraces(int build_entraces) {
	this->built_entraces = build_entraces;
}
string Building::get_address() const {
	return address;
}
int Building::get_planned_floors() const {
	return planned_floors;
}
int Building::get_planned_entrances() const {
	return planned_entraces;
}
int Building::get_built_floors() const {
	return built_floors;
}
int Building::get_built_entraces() const {
	return built_entraces;
}
void Building::print()const {
	cout << "Adress of buildingis: " << address << endl;
	cout << "Planned floors are " << planned_floors << " and planned entrances are " << planned_entraces << endl;
	cout << "Built floors are " << built_floors << " and built entrances are " << built_entraces << endl;
}
Building operator+(const Building& b, const int& n) {
	return Building(b.address, b.planned_floors, b.planned_entraces, b.built_floors + n, b.built_entraces);
}
Building operator+(const int& n, const Building& b) {
	return Building(b.address, b.planned_floors, b.planned_entraces, b.built_floors, b.built_entraces + n);
}
Building operator+=(Building& b, const int& n) {
	Building b2 = b + n;
	b = b2;
	return b;
}
Building operator+=(const int& n, Building& b) {
	Building b2 = n + b;
	b = b2;
	return b;
}
ostream& operator<<(ostream& out, const Building& b) {
	out << "Adress of buildingis: " << b.address << endl;
	return out;
}
istream& operator>>(istream& in, Building& m) {
	string ad;
	int  pf, pe, bf, be;
	cout << "Enter adress: ";
	in >> ad;
	cout << "Enter planned floors:";
	in >> pf;
	cout << "Enter planned entraces:";
	in >> pe;
	cout << "Enter built floors:";
	in >> bf;
	cout << "Enter built entraces:";
	in >> be;
	cout << endl;
	m = Building(ad, pf, pe, bf, be);
	return in;
}
