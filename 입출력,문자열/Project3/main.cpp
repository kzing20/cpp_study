#include <iostream>
using namespace std;

int main() {
	string input;
	string s1, s2, s3;

	cin >> input; // �ܾ �Է�

	s1 = "hello";
	s2 = input;
	s3 = s1 + s2;

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;

	string s4("ants");
	string s5(s4);

	if (s4 == s5) cout << "s4==s5" << endl;
	return 0;
}