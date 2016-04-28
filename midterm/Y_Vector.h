#ifndef Y_VECTOR_H
#define Y_VECTOR_H
#include "LinkedList.h"

template<typename T>
class Y_Vector
{
private:
	
	LinkedList<T> list;

public:

	Y_Vector(){}		// constructor and destructor are implemented more in 'LinkedList.h'
	virtual ~Y_Vector()
	{
		list.clear();
	}

	void push(T x)
	{
		list.insertTail(x);
    }
	void pop()
	{
		list.remove(list.at(list.size()-1));
    }
	void insert()
	{

	}
	void erase()
	{

	}
	T at(int index)
	{
        return list.at(index);
    }
	int size()
	{
        return list.size();
    }
	bool isEmpty()
	{
        return (list.size() == 0);
    }
	bool operator==(Y_Vector &other)
	{
        return list == other.list;
    }

};
#endif
