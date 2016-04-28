#ifndef ORD_H
#define ORD_H
#include "LinkedList.h"

template<typename T>
class ORd
{
private:

	LinkedList<T> list;

public:

	ORd(){}		// constructor and destructor are implemented more in 'LinkedList.h'
	virtual ~ORd()
	{
		list.clear();
	}

	void push_left(T x)
	{
		list.insertHead(x);
	}
	void push_right(T x)
	{
		list.insertTail(x);
	}
	void pop_left()
	{
		list.remove(list.at(0));
	}
	T show_left()
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
	bool operator==(ORd &other)
	{
		return list == other.list;
	}

};
#endif