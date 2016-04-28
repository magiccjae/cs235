#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>

using namespace std;

template<typename T>

class Node
{

public:

	T data;
	Node* next;

	Node(T d)
	{
		data = d;
		next = 0;
	}
};

template<typename T>

class LinkedList
{
private:

	
public:
    Node<T>* head;

	LinkedList()
	{
		head = NULL;
	}
	virtual ~LinkedList()
	{
		clear();
	}

    void insertHead(T value)
	{
        if (head == NULL)
        {
            head = new Node<T>(value);
        }
        else
        {
            Node<T>* current = head;
            head = new Node<T>(value);
            head->next = current;
        }
    }
    
    void insertTail(T value)
	{
        if(head == NULL)
		{
			head = new Node<T>(value);
		}
		else
		{
			Node<T>* current = head;
			while (current->next != NULL)
			{
				current = current->next;
			}
			current->next = new Node<T>(value);
		}
    }
    
    void remove(T value)
	{
        Node<T>* current = head;
        Node<T>* temporary = current;
        
        
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
    
    void clear()
	{
        while(head != NULL)
        {
            remove(head->data);
        }
    }
    
    T at(int index)
	{
        Node<T>* current = head;
        
        if(index >= size() || index < 0)
        {
            return NULL;
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

    int size()
	{
        int cnt = 0;
        Node<T>* cNode = head;
        while (cNode != NULL)
		{
            cnt++;
            cNode = cNode->next;
        }
        return cnt;
    }

	bool operator==(LinkedList& other)
	{
		Node<T>* mNode = head;
		Node<T>* oNode = other.head;

		if(size() != other.size())
		{
			return false;
		}

		while(mNode != NULL || oNode != NULL)
		{
			if(mNode->data != oNode->data)  
			{
				return false;
			}
			mNode = mNode->next;
			oNode = oNode->next;
		}

		return true;
	}

	void insert(int index)
	{
		if (head == NULL)
        {
            head = new Node<T>(value);
        }
        else
        {
            Node<T>* current = head;
            
            head->next = current;
        }

	}
	void erase(int index)
	{

	}

};

#endif
