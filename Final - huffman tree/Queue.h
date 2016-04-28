// Name: Jaehun Lee
// Student ID #: 95-225-6535
// "CS 235 Spring 2013 Final

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

	void push(Node* node);
	void pop();
	Node* front();
	int size();
	bool isEmpty();
	bool is_not_duplicate(string x);

};
#endif