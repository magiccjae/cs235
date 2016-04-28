#pragma once

#include "NodeInterface.h"
#include "Node.h"
#include "BSTInterface.h"

using namespace std;

class BST : public BSTInterface 
{
public:

	Node* root;

	BST()
	{
		root = NULL;
	}
	virtual ~BST()
	{
		while(root != NULL)
		{
			remove(root->data);
		}
	}

	/*
	* Returns the root node for this tree
	*
	* @return the root node for this tree.
	*/
	virtual NodeInterface * getRootNode();

	/*
	* Attempts to add the given int to the BST tree
	*
	* @return true if added
	* @return false if unsuccessful (i.e. the int is already in tree)
	*/
	virtual bool add(int data);

	/*
	* Attempts to remove the given int from the BST tree
	*
	* @return true if successfully removed
	* @return false if remove is unsuccessful(i.e. the int is not in the tree)
	*/
	virtual bool remove(int data);

	Node* addRecursively(int data, Node* current);

	bool removeRecursively(int data, Node*& current);

	void replace_parent(Node*& old_root, Node*& current);

	void print();

	void printRecursively(Node* current, int depth);
	
	bool is_duplicate(int data, Node* current);

};
