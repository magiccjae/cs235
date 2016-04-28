#ifndef STACK_H
#define STACK_H
#include "LinkedList.h"

class Stack
{
private:
	LinkedList list;

public:

	Stack(){}
	virtual ~Stack(){}

	void push(int x);
	void pop();
	int top();
	int size();
	bool isEmpty();
	bool is_not_duplicate(int x);

};
#endif