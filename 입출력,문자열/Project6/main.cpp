#include <iostream>
using namespace std;

int main() {
	string word;
	int count;

	count = 0;
	while (cin >> word) {
		//���ο� �ܾ� �Էµ�!
		count = count + 1;

	}
	//EOF(�Է� ��)�� ����: Windows: Ctrl+Z, Linux: Ctrl+D
	cout << "Total: " << count << endl;
	return 0;
}