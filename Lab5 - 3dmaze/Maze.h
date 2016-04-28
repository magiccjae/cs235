#ifndef MAZE_H
#define MAZE_H
#include <string>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <stack>

#include "MazeInterface.h"

class Maze : public MazeInterface
{	

private:

	static const int SIZE = 8;
	int maze[SIZE][SIZE][SIZE];
	string output;
	stack<string> path;
	string theway;

public:
	Maze()
	{
	}
	virtual ~Maze(){}

	virtual void createRandomMaze();
	virtual bool importMaze(string fileName);
	virtual bool traverseMaze();
	virtual string getMazePath();
	virtual string getMaze();
	virtual bool can_reach_exit(int x, int y, int z);



};
#endif