#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "LinkedListInterface.h"

using namespace std;

class Node {

public:

	int data;
	Node* next;

	Node(int d)
	{
		data = d;
		next = 0;
	}
};


class LinkedList : public LinkedListInterface
{

public:

	LinkedList()
	{
		head = NULL;
	}
	~LinkedList()
	{
		clear();
	}

	virtual void insertHead(int value);
	virtual void insertTail(int value);
	virtual void insertAfter(int value, int insertionNode);
	virtual void remove(int value);
	virtual void clear();
	virtual int at(int index);
	virtual int size();
	virtual bool is_not_duplicate(int value);

private:

	Node* head;

};

#endif
