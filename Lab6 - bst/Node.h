#pragma once

#include <iostream>
#include "NodeInterface.h"

using namespace std;

class Node : public NodeInterface
{

public:
	Node() {}
	virtual ~Node() {}

	int data;
	Node* left;
	Node* right;

	Node(int d)		//constructs a TreeNode with no children
	{
		data = d;
		left = NULL;
		right = NULL;
	}

	/*
	* Returns the data that is stored in this node
	*
	* @return the data that is stored in this node.
	*/
	virtual int getData()
	{
		return data;
	}

	/*
	* Returns the left child of this node or null if it doesn't have one.
	*
	* @return the left child of this node or null if it doesn't have one.
	*/
	virtual NodeInterface * getLeftChild()
	{
		return left;
	}

	/*
	* Returns the right child of this node or null if it doesn't have one.
	*
	* @return the right child of this node or null if it doesn't have one.
	*/
	virtual NodeInterface * getRightChild()
	{
		return right;
	}

};
