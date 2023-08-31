#include <iostream>
#include "DayOfYear.h"
#include "Holiday.h"
using namespace std;

int main() {
	/*
	DayOfYear date1(2, 21), date2(5), date3;
	cout << "Initialized dates: \n";
	date1.output(); cout << endl;
	date2.output(); cout << endl;
	date3.output(); cout << endl;

	date1 = DayOfYear(10, 31);
	cout << "date1 reset to the following: \n";
	date1.output(); cout << endl;*/

	Holiday h(2, 14, true);
	cout << "Testing the class Holiday.\n";
	h.output();

	return 0;
}