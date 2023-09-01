#include "node.h"
#include <iostream>
using namespace std;

Node::Node(int name) {
	this->name = name;
	this->next = NULL;
}