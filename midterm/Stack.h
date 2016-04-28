#ifndef STACK_H
#define STACK_H
#include "LinkedList.h"

template<typename T>
class Stack
{
private:
	
	LinkedList<T> list;

public:

	Stack(){}		// constructor and destructor are implemented more in 'LinkedList.h'
	virtual ~Stack()
	{
		list.clear();
	}

	void push(T x)
	{
        list.insertHead(x);
    }
	void pop()
	{
        list.remove(list.at(0));
    }
	T top()
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
    bool operator==(Stack &other)
	{
        return list == other.list;
    }

};
#endif
