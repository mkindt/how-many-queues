#ifndef __LLQUEUE_H__
#define __LLQUEUE_H__


class LLQueue {
private:
	Node * front;
	Node * back;
public:
	LLQueue();
	int dequeue();
	void enqueue(int x);
	int size;
	bool isEmpty();
};

#endif
