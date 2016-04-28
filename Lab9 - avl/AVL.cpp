#include "AVL.h"
#include <iostream>

using namespace std;

/*
* Returns the root node for this tree
*
* @return the root node for this tree.
*/
NodeInterface * AVL::getRootNode()
{
	return root;
}

/*
* Attempts to add the given int to the AVL tree
* Rebalances the tree if data is successfully added
*
* @return true if added
* @return false if unsuccessful (i.e. the int is already in tree)
*/
bool AVL::add(int data)
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

Node* AVL::addRecursively(int data, Node* current)
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
			current->updateHeight();
		}
		else
		{
			current->right = addRecursively(data, current->right);
			current->updateHeight();
		}

		return rebalance(current);
	}

}

/*
* Attempts to remove the given int from the AVL tree
* Rebalances the tree if data is successfully removed
*
* @return true if successfully removed
* @return false if remove is unsuccessful(i.e. the int is not in the tree)
*/
bool AVL::remove(int data)
{
	if(is_duplicate(data, root))
	{
		root = removeRecursively(data, root);
		if(root == NULL)
		{
			return true;
		}
		else
		{
			root->updateHeight();
			return true;
		}
	}
	else
	{
		return false;
	}
}

Node* AVL::removeRecursively(int data, Node* current)
{
	if(data < current->data)
	{
		current->left = removeRecursively(data, current->left);
		return rebalance(current);
	}
	else if(data > current->data)
	{
		current->right = removeRecursively(data, current->right);
		return rebalance(current);
	}
	else	// found the same value as data
	{
		if(current->right == NULL && current->left == NULL)
		{
			delete current;
			return NULL;
		}
		else if(current->right != NULL && current->left == NULL)
		{
			Node* temp = current->right;
			delete current;
			return rebalance(temp);
		}
		else
		{
			Node* iop = current->left;
			while(iop->right != NULL)
			{
				iop = iop->right;
			}
			current->data = iop->data;
			iop->data = data;
			current->left = removeIOP(current->left);
			return rebalance(current);
		}
	}
}

Node* AVL::removeIOP(Node* current)
{
	if(current == NULL)
	{
		return NULL;
	}
	else
	{
		if(current->right == NULL)
		{
			Node* temp = current->left;
			delete current;
			return rebalance(temp);
		}
		else
		{
			current->right = removeIOP(current->right);
			return rebalance(current);
		}
	}
}
//Node* AVL::removeRecursively(int data, Node*& current)
//{
//
//	if(current == NULL)
//	{
//		return false;
//	}
//	else
//	{
//		if(data < current->data)
//		{
//			parent = current;
//			current->left = removeRecursively(data, current->left);
//			return current;
//		}
//		else if(data > current->data)
//		{
//			parent = current;
//			current->right = removeRecursively(data, current->right);
//
//			return current;
//		}
//		else		// found the value in the BST
//		{
//			Node* old_root = current;
//
//			current->updateHeight();
//
//			if(current->left == NULL)		// one child or no child
//			{
//				current = current->right;
//			}
//			else if(current->right == NULL)			// one child or no child
//			{
//				current = current->left;
//			}
//			else		// two children
//			{
//				replace_parent(old_root, old_root->left);
//			}
//			delete old_root;
//			if(current == NULL)
//			{	
//				parent->updateHeight();
//				if(parent->height == 0)
//				{
//					return NULL;
//				}
//				else
//				{
//					return rebalance(parent);
//				}
//			}
//			else
//			{	
//				current->updateHeight();
//				if(current->height == 0)
//				{
//					return NULL;
//				}
//				else
//				{
//					return rebalance(current);
//				}
//			}
//			
//		}
//	}
//}

Node* AVL::rebalance(Node* current)
{
	if(current == NULL)
	{
		return NULL;
	}
	else
	{
		current->updateHeight();

		if(current->getBalance() > 1)		// Right heavy, RR or RL then RR
		{
			if(current->right->getBalance() >= 0)		// RR case
			{
				return rotate_left(current);
			}
			else		// RL case
			{
				current->right = rotate_right(current->right);
				return rotate_left(current);
			}
		}
		else if(current->getBalance() < -1)			// Left heavy, LL or LR then LL
		{
			if(current->left->getBalance() > 0)			// LR case
			{
				current->left = rotate_left(current->left);
				return rotate_right(current);
			}
			else		// LL case
			{
				return rotate_right(current);
			}

		}
		else
		{
			return current;
		}
	}
}

Node* AVL::rotate_left(Node* current)
{
	Node* pivot = current->right;
	current->right = pivot->left;
	pivot->left = current;
	current->updateHeight();
	pivot->updateHeight();

	return pivot;
}

Node* AVL::rotate_right(Node* current)
{
	Node* pivot = current->left;
	current->left = pivot->right;
	pivot->right = current;
	current->updateHeight();
	pivot->updateHeight();

	return pivot;

}

//void AVL::replace_parent(Node*& old_root, Node*& current)
//{
//	if(current->right != NULL)
//	{
//		replace_parent(old_root, current->right);
//	}
//	else
//	{
//		old_root->data = current->data;
//		old_root = current;
//		current = current->left;
//	}
//}

void AVL::print()
{
	printRecursively(root, 0);
}

void AVL::printRecursively(Node* current, int depth)
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

bool AVL::is_duplicate(int data, Node* current)
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


