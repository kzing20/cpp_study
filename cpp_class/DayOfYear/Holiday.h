#pragma once
#include "DayOfYear.h"
class Holiday {
	DayOfYear date;
	bool parkingEnforcement; //true if enforced

public:
	Holiday();
	Holiday(int month, int day, bool theEnforcement);
	void output();
};