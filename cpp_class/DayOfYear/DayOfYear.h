#pragma once

class DayOfYear {
	int month;
	int day;

public:
	DayOfYear(int monthValue, int dayValue);
	DayOfYear(int monthValue); 
	DayOfYear(); 

	~DayOfYear();

	void output();
	void testDate();

	int getMonth(); //getter 함수
	int getDay();

	void setMonth(int month); //setter 함수
	void setDay(int day);

};