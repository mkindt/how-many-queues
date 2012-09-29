#include "Queue.h"
#include <iostream>

int main() {
//test the queue
	Queue mylist2;
	for (int i = 1; i<22; ++i){
		std::cout << "bool " << mylist2.isEmpty() << " and size is " << mylist2.size() << std::endl;
		mylist2.enqueue(i);
		std::cout << "bool " << mylist2.isEmpty() << " and size is " << mylist2.size() << std::endl;
	}
	for (int i = 1; i<22; ++i){
		std::cout << mylist2.dequeue() << " ";
	}

	std::cout << "end of file" << std::endl; 

  //delete stack;

  return 0;
}
