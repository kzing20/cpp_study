#include <iostream>
#include <string> //getline
#include <sstream> //istringstream
using namespace std;

int main() {
	string line, word;
	int linecount=0, wordcount=0;

	while (cin.eof() == false) {
		getline(cin, line); //�� ���� �Է� �ޱ�(line)
		if (line != "") {
			linecount = linecount + 1;

			istringstream iss(line);

			while (iss >> word) {
				wordcount = wordcount + 1;
			}
		}
	}
	cout << "Total lines: " << linecount << endl
		<< "Total words: " << wordcount << endl;
	return 0;
}