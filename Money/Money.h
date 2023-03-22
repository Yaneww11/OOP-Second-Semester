#pragma once
#include <iostream>
using namespace std;

class Money;
Money operator+(const Money &, const Money &);
Money operator-(const Money&, const Money&);
Money operator%(const double, const Money&);
ostream& operator<<(ostream& out, const Money& m);
istream& operator>>(istream& in, Money& m);
class Money
{
	friend istream& operator>>(istream& in, Money& m);
	friend ostream& operator<<(ostream& out, const Money& m);
	friend Money operator+(const Money &, const Money &);
	friend Money operator-(const Money&, const Money&);
	friend Money operator%(const double, const Money&);
public:
	Money();
	Money(int, int);
	Money(const Money&);
	~Money();
	void set_leva(int);
	void set_stotinki(int);
	int get_leva() const;
	int get_stotinki() const;
	void print() const;
	bool operator>(const Money&)const;
	bool operator<(const Money&)const;
	bool operator==(const Money&)const;

private:
	int leva;
	int stotinki;
};

