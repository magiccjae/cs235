// Name: Jaehun Lee
// Student ID #: 95-225-6535
// "CS 235 Spring 2013 Final

#include "Queue.h"

void Queue::push(Node* node)
{
	list.insertTail(node->data, node->frequency, node->left, node->right);
}
void Queue::pop()		// pops out the highest priority
{
	list.remove(list.get_priority());
}
Node* Queue::front()		// gets the highest priority node
{
	return list.get_priority();
}
int Queue::size()
{
	return list.size();
}
bool Queue::isEmpty()
{
	return (list.size() == 0);
}
bool Queue::is_not_duplicate(string x)
{
	return list.is_not_duplicate(x);
}