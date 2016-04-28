#ifndef QUEUE_H
#define QUEUE_H
#include "LinkedList.h"

template<typename T>
class Queue
{
private:

	LinkedList<T> list;

public:
		
	Queue(){}		// constructor and destructor are implemented more in 'LinkedList.h'
	virtual ~Queue()
	{
		list.clear();
	}

	void push(T x)
	{
		list.insertTail(x);
	}
	void pop()
	{
		list.remove(list.at(0));
	}
	T front()
	{
		return list.at(0);
	}
	int size()
	{
		return list.size();
	}
	bool isEmpty()
	{
		return (list.size() == 0);
	}
	bool operator==(Queue &other)
	{
		return list == other.list;
	}
};
#endif