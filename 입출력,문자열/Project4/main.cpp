#include <iostream>
#include <string> //getline
using namespace std;

int main() {
	string line;

	cout << "Input a line: ";
	getline(cin, line);
	cout << line << endl;

	return 0;
}