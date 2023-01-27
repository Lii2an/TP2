#pragma once
#include <iostream>
#include <string>
using namespace std;
class Date {
private:
	
	
public:
	bool isDate(int month, int day, int year);
	int _month;
	int _day;
	int _year;
	Date(int month = 1, int day = 1, int year = 0);
	friend ostream& operator<<(ostream& os, const Date& DateCrea);
	void modifierDate(int month, int day, int year);
	
};