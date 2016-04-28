// Name: Jaehun Lee
// Student ID #: 95-225-6535
// "CS 235 Spring 2013 Final

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include "Queue.h"
#include "LinkedList.h"

using namespace std;

class Huffman
{	
private:	
	string sentence;
	string code;

public:

	Queue queue;

	Huffman() 
	{
		sentence = "";
		code = "";

	}
	virtual ~Huffman() {}

	void build_tree();
	string encode();
	string decode();
	void print_code();
	bool contain(string data, Node* current);

};
