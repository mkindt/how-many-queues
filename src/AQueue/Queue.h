#ifndef __QUEUE_H__
#define __QUEUE_H__


class Queue {
private:
	int *theQueue;
	int back, front, capacity;
public:
	Queue();
	//~Queue();
	int dequeue();
	void enqueue(int x);
	int size;
	bool isEmpty();
};

#endif
