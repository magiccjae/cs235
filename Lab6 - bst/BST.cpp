#include <iostream>
#include "BST.h"

using namespace std;

NodeInterface * BST::getRootNode()
{
	return root;
}

/*
* Attempts to add the given int to the BST tree
*
* @return true if added
* @return false if unsuccessful (i.e. the int is already in tree)
*/
bool BST::add(int data)
{
	if(is_duplicate(data, root))
	{
		return false;
	}
	else
	{
		root = addRecursively(data, root);
		return true;
	}
}

Node* BST::addRecursively(int data, Node * current)
{
	if(current == NULL)
	{
		return new Node(data);
	}
	else
	{
		if(data < current->data)
		{
			current->left = addRecursively(data, current->left);
		}
		else
		{
			current->right = addRecursively(data, current->right);
		}
		return current;
	}

}

/*
* Attempts to remove the given int from the BST tree
*
* @return true if successfully removed
* @return false if remove is unsuccessful(i.e. the int is not in the tree)
*/

bool BST::remove(int data)
{
	if(is_duplicate(data, root))
	{
		return removeRecursively(data, root);
	}
	else
	{
		return false;
	}

}

bool BST::removeRecursively(int data, Node *& current)
{
	if(current == NULL)
	{
		return false;
	}
	else
	{
		if(data < current->data)
		{
			return removeRecursively(data, current->left);
		}
		else if(data > current->data)
		{
			return removeRecursively(data, current->right);
		}
		else		// found the value in the BST
		{
			Node* old_root = current;

			if(current->left == NULL)
			{
				current = current->right;
			}
			else if(current->right == NULL)
			{
				current = current->left;
			}
			else
			{
				replace_parent(old_root, old_root->left);
			}
			delete old_root;
			return true;
		}
	}
}

void BST::replace_parent(Node*& old_root, Node*& current)
{
	if(current->right != NULL)
	{
		replace_parent(old_root, current->right);
	}
	else
	{
		old_root->data = current->data;
		old_root = current;
		current = current->left;
	}
}

void BST::print()
{
	printRecursively(root, 0);
}

void BST::printRecursively(Node* current, int depth)
{
	if(current != NULL)
	{
		for(int i = 0; i < depth; i++)
		{
			cout << "\t";
		}

		cout << current->data << endl;

		printRecursively(current->left, depth + 1);

		printRecursively(current->right, depth + 1);
	}
	
}

bool BST::is_duplicate(int data, Node* current)
{

	if(current == NULL)
	{
		return false;
	}
	else
	{
		if(data == current->data)
		{
			return true;
		}
		else if(data < current->data)
		{
			if(current->left == NULL)
			{
				return false;
			}
			else
			{
				return is_duplicate(data, current->left);
			}
		}
		else
		{
			if(current->right == NULL)
			{
				return false;
			}
			else
			{
				return is_duplicate(data, current->right);
			}
		}
	}
}