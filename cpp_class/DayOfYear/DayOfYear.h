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

	int getMonth(); //getter �Լ�
	int getDay();

	void setMonth(int month); //setter �Լ�
	void setDay(int day);

};