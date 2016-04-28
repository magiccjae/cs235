#include "Mimic.h"
#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

//Part 1--------------------------------------------------------------
/**
* createMap
*
* Creates a prefix-suffix map based on the input text.
*
* Go through the input text and examine each group of 3 words. Refer
* to the first two words as the "prefix" and the third word as the
* "suffix". Create a map that associates each prefix with each suffix.
*  If you encounter a prefix that has been read already, add the new
*  suffix to the list of suffixes already associated with that prefix;
*  in this manner, each prefix can be associated with multiple
*  suffixes and even multiple copies of the same suffix. Note that
*  the input texts will only contain words separated by spaces.  Also
*  note that the last two word prefix in the text should be associated
*  with the suffix "THE_END".
*
* @param input
* 		the sample text to be mimicked
*/
void Mimic::createMap(string input)
{
	istringstream strm;
	strm.str(input);

	string first = "";
	string second = "";
	string third = "";
	string prefix = "";
	bool run = true;

	for(strm >> first, strm >> second; run; first = second, second = third)
	{
		if (strm >> third) 
		{
		}
		else
		{
			third = "THE_END";
			run = false;
		}
		prefix = first + " " + second;
		bool exist = false;
		int index = 0;
		for(int i = 0; i < keys.size(); i++) 
		{
			if (keys[i].prefix == prefix)
			{
				exist = true;
				index = i;
			}
		}

		if (exist) 
		{
			keys[index].suffix.push_back(third);
		}
		else 
		{
			vector<string> vec;
			vec.push_back(third);

			key k(prefix, vec);
			keys.push_back(k);
		}
	}

}

/**
* getSuffixList
*
* Returns the list of suffixes associated with the given prefix.
* Returns an empty vector if the given prefix is not in the map or no
* map has been created yet.
*
* @param prefix
* 		the prefix to be found
* @return a list of suffixes associated with the given prefix if the
* 		prefix is found; an empty vector otherwise
*/
vector<string> Mimic::getSuffixList(string prefix)
{
	vector<string> empty_vector;
	for(int i = 0; i < keys.size(); i++)
	{
		if(keys[i].prefix == prefix)		// when the given prefix is found
		{
			return keys[i].suffix;
		}
	}

	return empty_vector;
}


//Part 2--------------------------------------------------------------
/**
* generateText
*
* Generates random text using the map created by the createMap method.
*
* To generate the new text, start with the first prefix that was read
* and randomly select one of the suffixes associated with that prefix.
* The next prefix is the second word from the previous prefix and the
* selected suffix. Continue selecting random suffixes and building the
* next prefix until the suffix "THE_END" is selected. The token
* "THE_END" should not be returned as part of your generated text.
*
* @return random text generated using the map created with the sample
* 		text; an empty string if no map has been created yet
*/


string Mimic::generateText()
{
	string sentence = keys[0].prefix;
	string prefix = keys[0].prefix;
	string suffix = "";
	srand(time(0));

	if(keys[0].prefix == "")
	{
		return "";
	}
	else
	{
		bool end = true;
		int i = 0;

		while(end)
		{

	//		cout << i << " ";

			string first = "";
			string second = "";

			
			istringstream strm;

			strm.str(prefix);

			strm >> first >> second;

			if(keys[i].prefix == prefix)
			{
				
				if(keys[i].suffix.size() > 1)
				{
					
					suffix = keys[i].suffix[rand()%(keys[i].suffix.size())];

					if(suffix == "THE_END")
					{
						return sentence;
					}
					else
					{
						sentence = sentence + " " + suffix;
						prefix = second + " " + suffix;
					}
				}
				else
				{
					suffix = keys[i].suffix[0];

					if(suffix == "THE_END")
					{
						return sentence;
					}
					else
					{
						sentence = sentence + " " + suffix;
						prefix = second + " " + suffix;
					}
				}

				for(int j = 0; j < keys.size(); j++)
				{
					if(keys[j].prefix == prefix)
					{
						i = j;
						break;
					}
				}

			}
		}

	}

	return "";
}