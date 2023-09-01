#include <iostream>
using namespace std;

#include "node.h"

int main() {

	//cout << "How many our forces? ";
	int N;
	//cin >> N;
	
	N = 3;
	Node* next = new Node(N);
	Node* last = next;

	Node* ptr;
	ptr = new Node(2);
	ptr->setNext(next); // 2-->3
	next = ptr;

	ptr = new Node(1);
	ptr->setNext(next); // 1-->2

	last->setNext(next); // 3-->1

	return 0;
}