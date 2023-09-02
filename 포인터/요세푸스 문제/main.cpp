#include <iostream>
using namespace std;

#include "node.h"
void printCycle(Node* list) {
	//원형 사이클 리스트를 list가 가리키는 노드부터 차례대로 이름을 한 줄로 출력
	Node* current = list;
	cout << "현재 남아 있는 노드: ";
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

	Node* list = next; //기준 노드를 list가 가리킴

	int count = N; //현재 남아있는 노드의 수
	while (count > 1) {
		list->setNext(list->getNext()->getNext());
		printCycle(list);
		list = list->getNext();
		count--;
	}

	cout << list->getName() << endl;
	return 0;
}