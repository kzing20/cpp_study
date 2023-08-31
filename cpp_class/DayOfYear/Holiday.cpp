#include <iostream>
using namespace std;

#include "DayOfYear.h"
#include "Holiday.h"

Holiday::Holiday() :date(1,1), parkingEnforcement(false)
{
	cout << "Holiday () is called";
}

Holiday::Holiday(int month, int day, bool theEnforcement)
	:date(month, day), parkingEnforcement(theEnforcement)
{
	cout << "Holiday (" << month << "," << day << ") is called";

}

void Holiday::output() {
	date.output();
	cout << endl;

	if (parkingEnforcement)
		cout << "Parking laws will be enforced.\n";
	else
		cout << "Parking laws will not be enforced.\n";
}