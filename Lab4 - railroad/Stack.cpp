#include "Stack.h"

void Stack::push(int x)
{
	list.insertHead(x);
}
void Stack::pop()
{
	list.remove(list.at(0));
}
int Stack::top()
{
	return list.at(0);
}
int Stack::size()
{
	return list.size();
}
bool Stack::isEmpty()
{
	return (list.size() == 0);
}
bool Stack::is_not_duplicate(int x)
{
	return list.is_not_duplicate(x);
}