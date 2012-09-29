#include "gtest/gtest.h"
#include "../src/AQueue/Queue.h"

TEST(QueueTest, Enqueue) {
	Queue z;
	for (int i = 1; i<22; ++i){
		z.enqueue(i);
	}
  EXPECT_EQ(1, z.dequeue());
 	//delete z;
}
TEST(QueueTest, Dequeue) {
	Queue mylist2;
	for (int i = 1; i<22; ++i){
		mylist2.enqueue(i);
	}
	for (int i = 1; i<21; ++i){
		mylist2.dequeue();
	}
	EXPECT_EQ(21, mylist2.dequeue());

	//delete mylist2;
}
TEST(QueueTest, IsEmpty) {
	Queue r;
	EXPECT_TRUE(r.isEmpty());
}
TEST(QueueTest, IsNotEmpty) {
	Queue s;
	s.enqueue(0);
	EXPECT_FALSE(s.isEmpty());
}
