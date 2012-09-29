BUILD = ./build
TEST = ./test
LIB = ./lib
AQ = ./src/AQueue
LQ = ./src/LQueue
LLQ = .src/LLQueue

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(BUILD)/main $(TEST)/queue_test

$(BUILD)/main: $(AQ)/Queue.cpp $(AQ)/Queue.o
	cd $(AQ); $(MAKE)

$(BUILD)/main: $(LQ)/Queue.cpp $(LQ)/Queue.o
	cd $(LQ); $(MAKE)

$(TEST)/queue_test: $(TEST)/Queue.cpp $(SRC)/Queue.o
	cd $(TEST); $(MAKE)

clean:
	cd $(AQ); $(MAKE) clean
	cd $(LQ); $(MAKE) clean
	cd $(TEST); $(MAKE) clean
