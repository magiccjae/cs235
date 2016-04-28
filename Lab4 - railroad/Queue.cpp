#include "Queue.h"

void Queue::push(int x)
{
	list.insertTail(x);
}
void Queue::pop()
{
	list.remove(list.at(0));
}
int Queue::front()
{
	return list.at(0);
}
int Queue::size()
{
	return list.size();
}
bool Queue::isEmpty()
{
	return (list.size() == 0);
}
bool Queue::is_not_duplicate(int x)
{
	return list.is_not_duplicate(x);
}