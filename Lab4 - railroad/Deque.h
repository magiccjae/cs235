#ifndef DEQUE_H
#define DEQUE_H
#include "LinkedList.h"

class Deque
{
private:
	LinkedList list;

public:
		
	Deque(){}
	virtual ~Deque(){}

	void push_left(int x);
	void push_right(int x);
	void pop_left();
	void pop_right();
	int show_left();
	int show_right();
	int size();
	bool isEmpty();
	bool is_not_duplicate(int x);

};
#endif