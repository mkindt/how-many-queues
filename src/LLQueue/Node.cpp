#include "Node.h"
#include <iostream>
#include <assert.h>


Node::Node(int val){
	value = val;
}
int Node::getValue(){
	return value;
}
Node * Node::getNext(){
	return next;
}
void Node::setNext(Node* n){
	next = n;
}