#include "Queue.h"
#include <iostream>
#include <assert.h>
#include "Node.h"

Queue::Queue(){
	front = 0;
	back = 0;
	size = 0;
}

void Queue::enqueue(int x){
	Node * last = new Node(x);
	if (size == 0){
		front = last;
	}
	else{
		back ->setNext(last); //old back attached to last
	}
	back = last; //new back assigned
	size++;
}

int Queue::dequeue(){
	Node * first = front;
	int result = first->getValue();
	front = first->getNext();
	size--;
	return result;
}

bool Queue::isEmpty(){
	if (size <= 0)
		return true;
	return false;
}
