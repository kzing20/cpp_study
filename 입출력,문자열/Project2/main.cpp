#include <iostream>
using namespace std;

int main() {
	int oprnd1, oprnd2;
	string op;  //'+','-' // char op;
	int result; 

	cin >> oprnd1 >> op >> oprnd2; //123+456 ¶Ç´Â 123-456

	if (op == "+") result = oprnd1 + oprnd2;
	else if (op == "-") result = oprnd1 - oprnd2;
	else result = 0;

	cout << result << endl;




	return 0;
}