#include "DayOfYear.h"

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