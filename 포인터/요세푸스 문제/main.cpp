#include <iostream>
using namespace std;

#include "node.h"
void printCycle(Node* list) {
	//���� ����Ŭ ����Ʈ�� list�� ����Ű�� ������ ���ʴ�� �̸��� �� �ٷ� ���
	Node* current = list;
	cout << "���� ���� �ִ� ���: ";
	do {
		cout << current->getName() << " ";
		current = current->getNext();

	} while (current != list);
	cout << endl;
}
int main() {

	cout << "How many our forces? ";
	int N;
	cin >> N;
	
	Node* next = new Node(N);
	Node* last = next;
	

	Node* ptr;

	for (int i = N - 1; i >= 1; i--) {
		ptr = new Node(i);
		ptr->setNext(next); //i-->i+1
		next = ptr;
	}

	last->setNext(next); // N-->1

	Node* list = next; //���� ��带 list�� ����Ŵ

	int count = N; //���� �����ִ� ����� ��
	while (count > 1) {
		list->setNext(list->getNext()->getNext());
		printCycle(list);
		list = list->getNext();
		count--;
	}

	cout << list->getName() << endl;
	return 0;
}