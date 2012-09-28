#include "Queue.h"
#include <iostream>
#include <assert.h>
#include <list>

Queue::Queue() {
  theQueue = new int[10];
  	size = 0;
	back = -1;
	front = 0;
	capacity = 10;
	isEmpty();
}

void Queue::enqueue(int x){
	if (size == capacity) {
		int * biggerQueue;
		std::cout << "building new Queue" << std::endl;
		biggerQueue = new int[2*capacity];
		for (int i = 0; i < size; ++i){
			biggerQueue[i]=theQueue[front%size];
			front++; //argh front back????
		}
		delete[] theQueue;
		theQueue = biggerQueue;
		capacity = 2*capacity;
		back = front-1;
		front = 0;
	}
	back = (back+1)%capacity;
	theQueue[back] = x;
	//test -------------
	for (int j = front; j <= back; ++j){
			std::cout << theQueue[j] << " ";
		}
	std::cout << std::endl;
	size++;
}
int Queue::dequeue(){
	assert (!isEmpty());
	int result = theQueue[front];
	front = (front+1)%capacity;
	size--;
	return result;
}
bool Queue::isEmpty(){
	if (size <=0)
		return true;
	return false;
}
