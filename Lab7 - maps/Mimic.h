#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "MimicInterface.h"
using namespace std;

class key
{
public:

	key(){}
	~key(){}

	key(string prefix, vector<string> suffix)
	{
		this->prefix = prefix;
		this->suffix = suffix;
	}
	
	string prefix;
	vector<string> suffix;

};

class Mimic : public MimicInterface
{
public:

	Mimic(){

	}
	virtual ~Mimic(){}

	virtual void createMap(string input);

	virtual vector<string> getSuffixList(string prefix);

	virtual string generateText();

	vector<key> keys;

};
