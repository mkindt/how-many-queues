BUILD = ../../build
CPP = g++
CPPFLAGS = -Wall -Wextra

main: queue_tester.cpp Queue.o
	$(CPP) $(CPPFLAGS) -o test1 queue_tester.cpp Queue.o

Queue.o: Queue.h Queue.cpp 
	$(CPP) $(CPPFLAGS) -c Queue.cpp

clean:
	rm -f test1
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/main
