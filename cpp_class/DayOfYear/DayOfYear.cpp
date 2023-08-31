#include "DayOfYear.h"
#include <iostream>
using namespace std;

DayOfYear::DayOfYear(int monthValue, int dayValue)
	:month(monthValue), day(dayValue)
{
	cout << "DayOfYear(" << monthValue << ", " << dayValue << ") is called." << endl;
	testDate();
}

DayOfYear::DayOfYear(int monthValue)
	:month(monthValue), day(1)
{
	cout << "DayOfYear(" << monthValue << ") is called." << endl;
	testDate();
	
}

DayOfYear::DayOfYear()
	:month(1),day(1)
{
	cout << "DayOfYear() is called." << endl;
	//month = 1;
	//day = 1;
}



int DayOfYear::getMonth() { // :: 영역 지정 연산자
	return this->month;

}

int DayOfYear::getDay() { // :: 영역 지정 연산자
		return this->day;

	}

void DayOfYear::setMonth(int month) {
	this->month = month;
}

void DayOfYear::setDay(int day) {
	this->day = day;
}


void DayOfYear::output() {
	switch (month) {
	case 1: cout << "January"; break;
	case 2: cout << "February"; break;
	case 3: cout << "March"; break;
	case 4: cout << "April"; break;
	case 5: cout << "May"; break;
	case 6: cout << "June"; break;
	case 7: cout << "July"; break;
	case 8: cout << "August"; break;
	case 9: cout << "September"; break;
	case 10: cout << "October"; break;
	case 11: cout << "November"; break;
	case 12: cout << "December"; break;
	default:
		cout << "Error in DayOfYear::output. Contact software vendor";
	}
	cout << day;
}

void DayOfYear::testDate() {
	if (month < 1 || 12 < month) {
		cout << "Illegal month value" << endl;
		exit(1);
	}
	if (day < 1 || 31 < day) {
		cout << "Illegal day value" << endl;
		exit(1);
	
	}

}
