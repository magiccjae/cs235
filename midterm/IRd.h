#ifndef IRD_H
#define IRD_H
#include "LinkedList.h"

template<typename T>
class IRd
{
private:

	LinkedList<T> list;

public:

	IRd(){}		// constructor and destructor are implemented more in 'LinkedList.h'
	virtual ~IRd()
	{
		list.clear();
	}

	void push_left(T x)
	{
		list.insertHead(x);
	}
	void pop_left()
	{
		list.remove(list.at(0));
	}
	void pop_right()
	{
		list.remove(list.at(list.size()-1));
	}
	T show_left()
	{	
		return list.at(0);
	}
	T show_right()
	{
		return list.at(list.size()-1);
	}
	int size()
	{
		return list.size();
	}
	bool isEmpty()
	{
		return (list.size() == 0);
	}
	bool operator==(IRd &other)
	{
		return list == other.list;
	}


};
#endif