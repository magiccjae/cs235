#pragma once

#include "Node.h"
#include "NodeInterface.h"
#include "AVLInterface.h"

using namespace std;

class AVL : public AVLInterface 
{
public:

	Node* root;
	Node* parent;


	AVL() 
	{
		root = NULL;
		parent = NULL;
	}
	virtual ~AVL() {}

	//Please note that the class that implements this interface must be made
	//of objects which implement the NodeInterface

	virtual NodeInterface * getRootNode();

	virtual bool add(int data);

	Node* addRecursively(int data, Node* current);

	virtual bool remove(int data);

	Node* removeRecursively(int data, Node* current);

	Node* removeIOP(Node* current);

//	void replace_parent(Node*& old_root, Node*& current);

	void print();

	void printRecursively(Node* current, int depth);
	
	bool is_duplicate(int data, Node* current);

	Node* rebalance(Node* current);

	Node* rotate_left(Node* current);

	Node* rotate_right(Node* current);

};
