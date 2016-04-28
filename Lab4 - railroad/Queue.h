#ifndef QUEUE_H
#define QUEUE_H
#include "LinkedList.h"

class Queue
{
private:
	LinkedList list;

public:
		
	Queue(){}
	virtual ~Queue(){}

	void push(int x);
	void pop();
	int front();
	int size();
	bool isEmpty();
	bool is_not_duplicate(int x);

};
#endif