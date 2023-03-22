#include "Money.h"
#include <iostream>

Money::Money() {
	leva = 0;
	stotinki =  0;
}

Money::Money(int leva, int stotinki) {
	if (stotinki >= 100) {
		leva += stotinki / 100;
		this->stotinki = stotinki % 100;
	}
	else
		this->stotinki = stotinki;

	this->leva = leva;
}
Money::Money(const Money& r) {
	leva = r.leva;
	stotinki = r.stotinki;
}
Money::~Money() {

}

void Money::set_leva(int leva) {
	this->leva = leva;
}
void Money::set_stotinki(int stotinki) {
	if (stotinki >= 100) {
		leva += stotinki / 100;
		this->stotinki = stotinki % 100;
	}
	else
		this->stotinki = stotinki;
}
int Money::get_leva() const {
	return leva;
}
int Money::get_stotinki() const {
	return stotinki;
}
void Money::print() const {
	std::cout << "leva:" << leva << std::endl;
	std::cout << "stotinki:" << stotinki << std::endl;
}
Money operator+(const Money & m1, const Money & m2){
	return Money(m1.leva + m2.leva, m1.stotinki + m2.stotinki);
}
Money operator-(const Money& m1, const Money& m2) {
	return Money(abs(m1.leva - m2.leva), abs(m1.stotinki - m2.stotinki));
}
Money operator%(const double n, const Money& m) {
	int all_money = m.stotinki + m.leva * 100;
	int n_money = all_money * n / 100;
	return Money(n_money / 100, n_money % 100);
}
bool Money::operator>(const Money& l)const {
	if (leva > l.leva)
		return true;
	else if (leva == l.leva && stotinki > l.stotinki)
		return true;
	else
		return false;
}
bool Money::operator<(const Money& l)const {
	if (leva < l.leva)
		return true;
	else if (leva == l.leva && stotinki < l.stotinki)
		return true;
	else
		return false;
}
bool Money::operator==(const Money& l)const {
	if (leva == l.leva && stotinki == l.stotinki)
		return true;
	else
		return false;
}
ostream& operator<<(ostream& out, const Money& m) {
	out << m.leva << "." << m.stotinki << " lv";
	return out;
}
istream& operator>>(istream& in, Money& m) {
	int lv, st;
	cout << "Enter lv: ";
	in >> lv;
	cout << "Enter st: ";
	in >> st;
	cout << endl;
	m = Money(lv, st);
	return in;
}






