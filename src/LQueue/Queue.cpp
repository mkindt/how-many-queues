
#include "Queue.h"
#include <iostream>
#include <list>

//  std::list<int>theQueue;

Queue::Queue(){

}

Queue::~Queue(){
	delete theQueue;
}

void Queue::enqueue(int v){
	theQueue.push_back(v);
}

int Queue::dequeue(){
	assert (!isEmpty());
	int result = theQueue.front();
	theQueue.pop_front;
	return result;
}

int Queue::size(){
	return theQueue.size();
}

bool Queue::isEmpty(){
	if (theQueue.size() <= 0)
		return true;
	return false;
}


