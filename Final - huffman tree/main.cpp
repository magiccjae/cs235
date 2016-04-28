// Name: Jaehun Lee
// Student ID #: 95-225-6535
// "CS 235 Spring 2013 Final

#include "Huffman.h"
#include "LinkedList.h"
#include "Queue.h"
#include <iostream>

using namespace std;

int main()
{
	Huffman huffman;

	huffman.build_tree();
	cout << huffman.encode() << endl;
	huffman.print_code();
	
	system("pause");

	return 0;
}