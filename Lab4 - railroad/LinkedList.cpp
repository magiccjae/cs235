#include "LinkedList.h"
#include <iostream>



bool LinkedList::is_not_duplicate(int value)
{
	Node* current = head;
	while(current != NULL)
	{
		if(current->data == value)
		{
			return false;
		}
		current = current->next;
	}
	return true;
}

/*
 insertHead

 A node with the given value should be inserted at the beginning of the list.

 Only non-negative values should be added to the list. Do not allow
 duplicate values in the list.
 */
void LinkedList::insertHead(int value)
{
	if (value >= 0)
	{
		if (head == NULL)
		{
			head = new Node(value);
		}
		else
		{
			if(is_not_duplicate(value))
			{
				Node* current = head;
				head = new Node(value);
				head->next = current;
			}
		}
	}
}

/*
 insertTail

 A node with the given value should be inserted at the end of the list.

 Only non-negative values should be added to the list. Do not allow
 duplicate values in the list.
 */
void LinkedList::insertTail(int value)
{
	if(value >= 0)
	{
		if(head == NULL)
		{
			head = new Node(value);
		}
		else
		{
			if(is_not_duplicate(value))
			{
				Node* current = head;
				while (current->next != NULL)
				{
					current = current->next;
				}
				current->next = new Node(value);
			}
		}
	}
}

/*
	insertAfter

	A node with the given value should be inserted immediately after the
	node whose value is equal to insertionNode.

	A node should only be added if the node whose value is equal to
	insertionNode is in the list. Only non-negative values should be
	added to the list. Do not allow duplicate values in the list.
 */
void LinkedList::insertAfter(int value, int insertionNode)
{
	if (value >= 0)
	{
		if (is_not_duplicate(value) && !is_not_duplicate(insertionNode))
		{
			Node* current = head;
			Node* temporary = current;

			while (current != NULL)
			{
				if(current->data == insertionNode)
				{
					temporary = current->next;
					current->next = new Node(value);
					current->next->next = temporary;
				}
				current = current->next;
			}
		}

	}
}

/*
	remove

	The node with the given value should be removed from the list.

	The list may or may not include a node with the given value.
 */
void LinkedList::remove(int value)
{
	Node* current = head;
	Node* temporary = current;

	if(head != NULL)
	{
		if(current->data == value && current->next == NULL)
		{
			delete current;
			head = NULL;
			return;
		}
		else
		{
			while(current->next != NULL)
			{
				if(current->next->data == value && current->next->next != NULL)	// remove the elements in the middle
				{
					temporary = current->next;
					current->next = temporary->next;
					delete temporary;
					temporary = NULL;
					return;
				}
				else if(current->next->data == value && current->next->next == NULL)	// remove the element at the very end
				{
					temporary = current->next;
					delete temporary;
					current->next = NULL;
					return;
				}
				else if(current->data == value)		// remove the element at the very beginning
				{
					current = current->next;
					head = current;
					delete temporary;
					return;
				}
				current = current->next;
			}
		}
	}
}

/*
	clear

	Remove all nodes from the list.
 */
void LinkedList::clear()
{
	while(head != NULL)
	{
		remove(head->data);
	}
}

/*
	at

	Returns the value of the node at the given index. The list begins at
	index 0.

	If the given index is out of range of the list, return -1;
 */
int LinkedList::at(int index)
{
	Node* current = head;

	if(size() <= index || index < 0)
	{
		return -1;

	}
	else
	{
		for(int i = 0; i < index; i++)
		{
			current = current->next;
		}
		return current->data;
	}
}

/*
	size

	Returns the number of nodes in the list.
 */
int LinkedList::size()
{
	int result = 0;

	Node* current = head;
	while(current != NULL)
	{
		current = current->next;
		result ++;
	}
	return result;
}
