// Name: Jaehun Lee
// Student ID #: 95-225-6535
// "CS 235 Spring 2013 Final

#include "Huffman.h"

void Huffman::build_tree()
{
	string filename;
	string word = "";
	

	cout << "Please enter the file name: ";
	cin >> filename;
	ifstream in_file;
	in_file.open(filename.c_str());

	while(in_file >> word)			// import words from the file and create one sentence
	{
		if(sentence == "")
		{
			sentence = word;
		}
		else
		{
			sentence = sentence + " " + word;
		}

	}

	cout << sentence << endl;

	for(int i = 0; i < sentence.size(); i++)		// put character one by one into a priority_queue 
	{
		string letter = "";
		letter = sentence[i];

		Node* temp = new Node(letter, 1);

		queue.push(temp);

	}
	//while(!queue.isEmpty())
	//{
	//	cout << queue.front()->data << " " << queue.front()->frequency << endl;
	//	queue.pop();
	//}

	while(queue.size() > 1)				// priority_queue will eventualy have one Node* that contains the entire tree
	{

		string word1 = "";
		string word2 = "";
		string combined_word = "";

		int freq1 = 0;
		int freq2 = 0;
		int total_freq = 0;

		word1 = queue.front()->data;
		freq1 = queue.front()->frequency;
		Node* temp1 = new Node(word1, freq1, queue.front()->left, queue.front()->right);
		//cout << queue.front()->data << " " << queue.front()->frequency << endl;
		queue.pop();
		
		word2 = queue.front()->data;
		freq2 = queue.front()->frequency;
		Node* temp2 = new Node(word2, freq2, queue.front()->left, queue.front()->right);
		//cout << queue.front()->data << " " << queue.front()->frequency << endl;
		queue.pop();

		Node* combined = new Node(word1 + word2, freq1 + freq2, temp1, temp2);

		queue.push(combined);
			
	}

	cout << "Tree is successfully built" << endl;
	cout << queue.front()->data << " " << queue.front()->frequency << endl;
	cout << queue.front()->left->data << " " << queue.front()->left->frequency << endl;
	cout << queue.front()->right->data << " " << queue.front()->right->frequency << endl;

}

string Huffman::encode()
{

	cout << "Original:	" + sentence << endl;

	for(int i = 0; i < sentence.size(); i++)  // reads a character one by one
	{
		string letter = "";
		letter = sentence[i];

		Node* current = queue.front();

		while(current->left != NULL || current->right != NULL)		// until the leaf tree that contains the character is found
		{
			if(contain(letter, current))
			{
				if(contain(letter, current->left))		// traverse to left_subtree
				{
					code = code + "0";
					current = current->left;
				}
				else			// traverse to right_subtree
				{
					code = code + "1";
					current = current->right;
				}
			}
			else
			{
				cout << "Input is not in the tree" << endl;
			}
		}
	}

	return code;
}

string Huffman::decode()
{
	Node* current = queue.front();		// Node* that stores the Huffman tree
	stringstream ss;
	string binary;
	for(int i = 0; i < code.size(); i++)
	{
		binary = code[i];

		if(binary == "1")
		{
			current = current->right;
		}
		else
		{
			current = current->left;
		}

		if(current->data.size() == 1)
		{
			ss << current->data;
			current = queue.front();
		}
	}

	return ss.str();
}

void Huffman::print_code()
{
	ofstream out_file;
	out_file.open("OUTPUT.txt");
	out_file << "Original:	" + sentence << endl;
	out_file << "Encoded:	" + code << endl;
	out_file << "Decoded:	" + decode() << endl;

}

bool Huffman::contain(string data, Node* current)		// function to traverse the tree to encode
{

	if(current == NULL)
	{
		return false;
	}
	else
	{
		for(int i = 0; i < current->data.size(); i++)
		{
			string letter = "";
			letter = current->data[i];

			if(data == letter)
			{
				return true;
			}
		}

		return false;
	}
}