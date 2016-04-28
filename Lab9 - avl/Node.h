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
	int height;

	Node* left;
	Node* right;

	Node(int d)		//constructs a TreeNode with no children
	{
		data = d;
		height = 0;
		left = NULL;
		right = NULL;
	}

	virtual int getData()
	{
		return data;
	}

	virtual NodeInterface * getLeftChild()
	{
		return left;
	}

	virtual NodeInterface * getRightChild()
	{
		return right;
	}

	/*
	 * Returns the height of this node. The height is the number of edges
	 * from this node to this nodes farthest child.
	 */
	virtual int getHeight()
	{
		return height;
	}

	void updateHeight()
	{
		int left_height = -1;
		int right_height = -1;

		if(left != NULL)
		{
			left_height = left->getHeight();
		}
		
		if(right != NULL)
		{
			right_height = right->getHeight();
		}

		height = max(left_height, right_height) + 1;
	}

	int getBalance()
	{
		if(right == NULL && left != NULL)
		{
			return -1 - left->height;
		}
		else if(left == NULL && right != NULL)
		{
			return right->height + 1;
		}
		else if(left == NULL && right == NULL)
		{
			return 0;
		}
		else
		{
			return right->height - left->height;
		}
	}

};
