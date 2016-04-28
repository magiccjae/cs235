// Name: Jaehun Lee
// Student ID #: 95-225-6535
// "CS 235 Spring 2013 Final



#include "LinkedList.h"
#include <iostream>
#include <vector>


bool LinkedList::is_not_duplicate(string value)			// check the duplicate value in the LinkedList
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
 insertTail

 A node with the given value should be inserted at the end of the list.

 Only non-negative values should be added to the list. Do not allow
 duplicate values in the list.
 */
void LinkedList::insertTail(string value, int frequency, Node* l, Node* r)
{
	if(head == NULL)
	{
		head = new Node(value, frequency, l, r);
	}
	else
	{
		if(!is_not_duplicate(value))
		{
			Node* current = head;
			if(current->data == value)		// check the head's value, if the values are same, add frequency
			{
				current->frequency = current->frequency + 1;
			}

			while (current->next != NULL)
			{
				if(current->next->data == value)	// if the values are same, add frequency
				{		
					current->next->frequency = current->next->frequency + 1;
				}
				current = current->next;
			}
		}
		else
		{
			Node* current = head;
			while (current->next != NULL)
			{
				current = current->next;
			}
			current->next = new Node(value, frequency, l, r);
		}
	}
}


/*
	remove

	The node with the given value should be removed from the list.

	The list may or may not include a node with the given value.
 */
void LinkedList::remove(Node* node)
{
	Node* current = head;
	Node* temporary = current;

	if(head != NULL)
	{
		if(current == node && current->next == NULL)
		{
			delete current;
			head = NULL;
			return;
		}
		else
		{
			while(current->next != NULL)
			{
				if(current->next == node && current->next->next != NULL)	// remove the elements in the middle
				{
					temporary = current->next;
					current->next = temporary->next;
					delete temporary;
					temporary = NULL;
					return;
				}
				else if(current->next == node && current->next->next == NULL)	// remove the element at the very end
				{
					temporary = current->next;
					delete temporary;
					current->next = NULL;
					return;
				}
				else if(current == node)		// remove the element at the very beginning
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
		remove(head);
	}
}

Node* LinkedList::at(int index)
{
	Node* current = head;

	if(size() <= index || index < 0)
	{
		return NULL;
	}
	else
	{
		for(int i = 0; i < index; i++)
		{
			current = current->next;
		}
		return current;
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

Node* LinkedList::get_priority()		// function that helps to get the highest priority for the pop and front function of the priority_queue
{
	if(head != NULL)
	{
		Node* current1 = head;
		Node* current2 = head;
		Node* priority = head;
			
		
		while(current2->next != NULL)
		{
			if(current1->frequency > current2->next->frequency)		// frequency comparing
			{
				current1 = current2->next;
				priority = current1;
			}
			else if(current1->frequency == current2->next->frequency)		// same frequency
			{
				if(current1->data.size() == 1 && current2->next->data.size() > 1)			// current1 is original and current2 is not
				{
					priority = current1;
				}
				else if(current1->data.size() > 1 && current2->next->data.size() == 1)		// current2 is original and current1 is not
				{
					priority = current2->next;
					current1 = priority;
				}
				else if(current1->data.size() == 1 && current2->next->data.size() == 1)		// both original
				{
					if(current1->data > current2->next->data)			// comparing ASCII
					{
						priority = current2->next;
						current1 = priority;
					}
					else
					{
						priority = current1;
					}
				}
				else		// older combined node should come first
				{
					priority = current1;
				}
			}
			current2 = current2->next;
		}
		return priority;
	}
	else
	{
		return NULL;
	}

}

//void LinkedList::sort()
//{
//	vector<Node*> vec;
//
//	Node* current = head;
//	
//	vec.push_back(current);
//
//	while(current->next != NULL)
//	{
//		if(current->frequency > current->next->frequency)		// sort in order of frequency
//		{
//			vec.push_back(current);
//			remove(current);
//		}
//		current = current->next;
//	}
//}
