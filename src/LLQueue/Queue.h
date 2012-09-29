#ifndef __QUEUE_H__
#define __QUEUE_H__
#include "Node.h"

class Queue {
private:
	Node * front;
	Node * back;
public:
	Queue();
	int dequeue();
	void enqueue(int x);
	int size;
	bool isEmpty();
};

#endif
