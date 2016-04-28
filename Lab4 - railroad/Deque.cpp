#include "Deque.h"

void Deque::push_left(int x)
{
	list.insertHead(x);
}
void Deque::push_right(int x)
{
	list.insertTail(x);
}
void Deque::pop_left()
{
	list.remove(list.at(0));
}
void Deque::pop_right()
{
	list.remove(list.at(list.size()-1));
}
int Deque::show_left()
{
	return list.at(0);
}
int Deque::show_right()
{
	return list.at(list.size()-1);
}
int Deque::size()
{
	return list.size();
}
bool Deque::isEmpty()
{
	return (list.size() == 0);
}
bool Deque::is_not_duplicate(int x)
{
	return list.is_not_duplicate(x);
}