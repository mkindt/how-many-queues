#include <iostream>
#include <ctime>
#include "../LLQueue/Queue.h"

int main() {
	int start, end, elapsed;
	double seconds;

	start = clock(); //save start tick
	Queue mylist2;
	for (int i = 1; i<10000000; ++i){
		mylist2.enqueue(i);
	}
	for (int i = 1; i<9999999; ++i){
		mylist2.dequeue();
	}

	end = clock(); //save end tick
	elapsed = end - start; //total ticks

	seconds = (double) elapsed/CLOCKS_PER_SEC; //use macro to convert to secs

	std::cout << "Elapsed time: " << seconds << " seconds." << std::endl;

	return 0;
}



