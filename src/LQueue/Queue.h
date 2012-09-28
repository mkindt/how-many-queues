#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <list>

class Queue {
 private:
  std::list<int>theQueue;


 public:
  Queue();
  ~Queue();
  void enqueue(int v);
  int dequeue();
  int size();
  bool isEmpty();
};


#endif
