#include "Maze.h"

/**
* Create and store a random maze with an entry and exit point. (location [0,0,0] and [7,7,7] must have 1's in those spots.  The rest of the spots can be randomly 0 or 1.
*/

void Maze::createRandomMaze()
{
	srand(time(0));
	int r = 0;

	for(int z = 0; z < SIZE; z++)		// a loop to create a whole maze
	{
		for(int y = 0; y < SIZE; y++)		// a loop to create a level	
		{
			for(int x = 0; x < SIZE; x++)		// a loop to create a row
			{
				if(x == 0 && y == 0 && z == 0)
				{
					r = 1;
				}
				else if(x == SIZE-1 && y == SIZE-1 && z == SIZE-1)
				{
					r = 1;
				}
				else
				{
					r = rand() % 2;
				}

				maze[x][y][z] = r;

			}	
		}
	}
}
/**
* Read from the given file (see maze_sample.txt for format) and store it as a maze
* 
* @param fileName The file name of the file to be imported
* 
* @return true if the file was successfully read/imported, false if an error occurred when parsing/reading the file
*/

bool Maze::importMaze(string fileName)
{
	ifstream in_file;
	in_file.open("Mazes/" + fileName);

	if(in_file.is_open())
	{
		while(!in_file.eof())
		{
			for(int z = 0; z < SIZE; z++)		// level
			{
				for(int y = 0; y < SIZE; y++)		// column	
				{
					for(int x = 0; x < SIZE; x++)		// row
					{
						if(in_file >> maze[x][y][z])
						{
							if(maze[x][y][z] != 0 && maze[x][y][z] != 1)
							{
								return false;
							}
							/*if(x == SIZE-1 && y == SIZE-1 && z == SIZE-1 && maze[x][y][z] != 1)		// check if the last input is 1
							{
								return false;
							}
							if(x == 0 && y == 0 && z == 0 && maze[x][y][z] != 1)		// check if the first input is 1
							{
								return false;
							}*/
						}
						else
						{
							return false;
						}
					}	
				}
			}
			in_file.close();
			return true;
		}
	}
	return false;
}

bool Maze::can_reach_exit(int x, int y, int z)		// a function to check if the exit is reachable at a point
{

	stringstream coordinate;

	while(path.size() != 0)
	{
		path.pop();
	}

	if(x < 0 || x >= SIZE || y < 0 || y >= SIZE || z < 0 || z >= SIZE)		// out of bounds
	{
		return false;
	}
	if(x == SIZE - 1 && y == SIZE - 1 && z == SIZE - 1)		// at exit
	{
		coordinate << "(" << SIZE - 1 << ", " << SIZE - 1 << ", " << SIZE - 1 << ")";
		path.push(coordinate.str());
		return true;
	}
	
	if(maze[x][y][z] != 1)		// in this case, it's not a path or it is the path that is already taken
	{
		return false;
	}

	maze[x][y][z] = 2;

	if(can_reach_exit(x + 1, y, z))
	{
		coordinate << "(" << x << ", " << y << ", " << z << ")\n";
		path.push(coordinate.str());
		return true;
	}
	else if(can_reach_exit(x - 1, y, z))
	{			
		coordinate << "(" << x << ", " << y << ", " << z << ")\n";
		path.push(coordinate.str());
		return true;
	}
	else if(can_reach_exit(x, y + 1, z))
	{
		coordinate << "(" << x << ", " << y << ", " << z << ")\n";
		path.push(coordinate.str());
		return true;
	}
	else if(can_reach_exit(x, y - 1, z))
	{
		coordinate << "(" << x << ", " << y << ", " << z << ")\n";
		path.push(coordinate.str());
		return true;
	}
	else if(can_reach_exit(x, y, z + 1))
	{
		coordinate << "(" << x << ", " << y << ", " << z << ")\n";
		path.push(coordinate.str());
		return true;
	}
	else if(can_reach_exit(x, y, z - 1))
	{
		coordinate << "(" << x << ", " << y << ", " << z << ")\n";
		path.push(coordinate.str());
		return true;
	}
	else
	{
		return false;
	}

}

/**
* Traverses the current maze in storage, storing the path taken to solve the maze if the maze was solvable.
* 
* @return true if the maze was solvable, false if unsolvable
*/

bool Maze::traverseMaze()
{
	bool result = can_reach_exit(0, 0, 0);
	
	for(int z = 0; z < SIZE; z++)		// level
	{
		for(int y = 0; y < SIZE; y++)		// column	
		{
			for(int x = 0; x < SIZE; x++)		// row
			{
				if(maze[x][y][z] == 2)
				{
					maze[x][y][z] = 1;
				}
			}
		}
	}

	return result;

}
/**
* Returns the path from the most recently traversed maze. The string format should be each position taken 
* separated by newlines (see format on website).
* 
* @return the path to the most recent maze traversed
* 		if no maze has been solved yet, return an empty string
*/

string Maze::getMazePath()
{
	theway = "";
	while(path.size() != 0)
	{
		theway = theway + path.top();
		path.pop();
	}

	return theway;
}
/**
* Get the current maze stored in a single string (see website for format)
* 
* @return a string representation of your maze
*/

string Maze::getMaze()
{
	for(int z = 0; z < SIZE; z++)		// a loop to create a whole maze
	{
		for(int y = 0; y < SIZE; y++)		// a loop to create a level	
		{
			for(int x = 0; x < SIZE; x++)		// a loop to create a row
			{
				int r = maze[x][y][z];

				ostringstream strm;
				strm << r;
				string word = strm.str();
				if(x == 0)
				{
					output = output + word;
				}
				else
				{
					output = output + " " + word; 
				}
			}	
			output = output + "\n";
		}
		output = output + "\n";
	}

	return output;
}