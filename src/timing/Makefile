BUILD = ../build
TEST = ../test
LIB = ../lib
SRC = ../src
AQ = ../AQueue
LQ = ../LQueue
LLQ = ../LLQueue

CPP = g++
CPPFLAGS = -Wall -Wextra

AQueue_test: a_timing.cpp $(AQ)/Queue.o
	$(CPP) $(CFLAGS) -o Atiming_test a_timing.cpp $(AQ)/Queue.o

AQueue.o: $(AQ)/Queue.h $(AQ)/Queue.cpp
	cd $(AQ); (MAKE)

LQueue_test: l_timing.cpp $(LQ)/Queue.o
	$(CPP) $(CFLAGS) -o Ltiming_test l_timing.cpp $(LQ)/Queue.o

LQueue.o: $(LQ)/Queue.h $(LQ)/Queue.cpp
	cd $(LQ); (MAKE)

LLQueue_test: ll_timing.cpp $(LLQ)/Queue.o
	$(CPP) $(CFLAGS) -o LLtiming_test ll_timing.cpp $(LLQ)/Queue.o

LLQueue.o: $(LLQ)/Queue.h $(LLQ)/Queue.cpp
	cd $(LLQ); (MAKE)


clean:
	rm -f LLtiming_test
	rm -f Ltiming_test
	rm -f Atiming_test



