// Name: Jaehun Lee
// Student ID #: 95-225-6535
// "CS 235 Spring 2013 Final



#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <string>

using namespace std;

class Node {

public:

	string data;
	Node* next;
	Node* left;
	Node* right;
	int frequency;

	Node(string d, int f)
	{
		data = d;
		next = NULL;
		left = NULL;
		right = NULL;
		frequency =	f;
	}

	Node(string d, int f, Node* l, Node* r)
	{
		data = d;
		next = NULL;
		left = l;
		right = r;
		frequency =	f;
	}

	bool operator==(const Node& other)
	{
		return (data == other.data && frequency == other.frequency);
	}

};


class LinkedList
{
	
private:

	Node* head;

public:

	LinkedList()
	{
		head = NULL;
	}
	~LinkedList()
	{
		clear();
	}

	void insertTail(string value, int frequency, Node* l, Node* r);		// modify
	void remove(Node* node);
	void clear();
	Node* at(int index);
	int size();
	bool is_not_duplicate(string value);
	//void sort();		// create this to make Queue to be Priority_Queue
	Node* get_priority();		// to get the highest priority for pop and front function

};

#endif
