#include "Station.h"


//Part 1--------------------------------------------------------------
/**
* Let another car arrive at the station and become the current car.
* Do not allow a new car to arrive if any of the following conditions apply:
* 1.	There is already a current car
* 2.	The new car's ID already exists in any structure
* 3.	The new car's ID is negative
*
* @param car the ID of the car arriving at the station
* @return true if the car successfully arrived; false otherwise
*/
bool Station::addToStation(int car)
{
		if(car >= 0 && is_station_empty)
		{
			if(s.is_not_duplicate(car) && q.is_not_duplicate(car) && d.is_not_duplicate(car))
			{
				current_car = car;
				is_station_empty = false;
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	
}

/**
* Returns the ID of the current car.
* Return -1 if there is no current car.
*
* @return the ID of the current car; -1 if there is no current car
*/
int Station::showCurrentCar()
{
	if(is_station_empty)
	{
		return -1;
	}
	else
	{
		return current_car;
	}
}

/**
* Removes the current car from the station.
* Does nothing if there is no current car.
*
* @return true if the current car successfully left; false otherwise
*/
bool Station::removeFromStation()
{
	if(is_station_empty)
	{
		return false;
	}
	else
	{
		is_station_empty = true;
		return true;
	}
}

//Part 2--------------------------------------------------------------
/**
* Adds the current car to the stack.  After this operation, there should be no current car.
* Does nothing if there is no current car or if the stack is already full.
*
* @return true if the car is successfully added to the stack; false otherwise
*/
bool Station::addToStack()
{
	if(is_station_empty || s.size() == 5)
	{
		return false;
	}
	else
	{
		s.push(current_car);
		is_station_empty = true;
		return true;
	}
}

/**
* Removes the first car in the stack and makes it the current car.
* Does nothing if there is already a current car or if the stack already empty.
*
* @return true if the car is successfully removed from the stack; false otherwise
*/
bool Station::removeFromStack()
{
	if(!is_station_empty || s.isEmpty())
	{
		return false;
	}
	else
	{
		current_car = s.top();
		s.pop();
		return true;
	}
}

/**
* Returns the ID of the first car in the stack.
*
* @return the ID of the first car in the stack; -1 if the stack is empty
*/
int Station::showTopOfStack()
{
	if(s.isEmpty())
	{
		return -1;
	}
	else
	{
		return s.top();
	}
}

/**
* Returns the number of cars in the stack.
*
* @return the number of cars in the stack
*/
int Station::showSizeOfStack()
{
	return s.size();
}

//Part 3--------------------------------------------------------------
/**
* Adds the current car to the queue.  After this operation, there should be no current car.
* Does nothing if there is no current car or if the queue is already full.
*
* @return true if the car is successfully added to the queue; false otherwise
*/
bool Station::addToQueue()
{
	if(is_station_empty || q.size() == 5)
	{
		return false;
	}
	else
	{
		q.push(current_car);
		is_station_empty = true;
		return true;
	}
}

/**
* Removes the first car in the queue and makes it the current car.
* Does nothing if there is already a current car or if the queue already empty.
*
* @return true if the car is successfully removed from the queue; false otherwise
*/
bool Station::removeFromQueue()
{
	if(!is_station_empty || q.isEmpty())
	{
		return false;
	}
	else
	{
		current_car = q.front();
		q.pop();
		return true;
	}
}

/**
* Returns the ID of the first car in the queue.
*
* @return the ID of the first car in the queue; -1 if the queue is empty
*/
int Station::showTopOfQueue()
{
	if(q.isEmpty())
	{
		return -1;
	}
	else
	{
		return q.front();
	}
}

/**
* Returns the number of cars in the queue.
*
* @return the number of cars in the queue
*/
int Station::showSizeOfQueue()
{
	return q.size();
}

//Part 4--------------------------------------------------------------
/**
* Adds the current car to the deque on the left side.  After this operation, there should be no current car.
* Does nothing if there is no current car or if the deque is already full.
*
* @return true if the car is successfully added to the deque; false otherwise
*/
bool Station::addToDequeLeft()
{
	if(is_station_empty || d.size() == 5)
	{
		return false;
	}
	else
	{
		d.push_left(current_car);
		is_station_empty = true;
		return true;
	}
}

/**
* Adds the current car to the deque on the right side.  After this operation, there should be no current car.
* Does nothing if there is no current car or if the deque is already full.
*
* @return true if the car is successfully added to the deque; false otherwise
*/
bool Station::addToDequeRight()
{
	if(is_station_empty || d.size() == 5)
	{
		return false;
	}
	else
	{
		d.push_right(current_car);
		is_station_empty = true;
		return true;
	}
}

/**
* Removes the leftmost car in the deque and makes it the current car.
* Does nothing if there is already a current car or if the deque already empty.
*
* @return true if the car is successfully removed from the deque; false otherwise
*/
bool Station::removeFromDequeLeft()
{
	if(!is_station_empty || d.isEmpty())
	{
		return false;
	}
	else
	{
		current_car = d.show_left();
		d.pop_left();
		return true;
	}
}

/**
* Removes the rightmost car in the deque and makes it the current car.
* Does nothing if there is already a current car or if the deque already empty.
*
* @return true if the car is successfully removed from the deque; false otherwise
*/
bool Station::removeFromDequeRight()
{
	if(!is_station_empty || d.isEmpty())
	{
		return false;
	}
	else
	{
		current_car = d.show_right();
		d.pop_right();
		return true;
	}
}

/**
* Returns the ID of the leftmost car in the deque.
*
* @return the ID of the leftmost car in the deque; -1 if the deque is empty
*/
int Station::showTopOfDequeLeft()
{
	if(d.isEmpty())
	{
		return -1;
	}
	else
	{
		return d.show_left();
	}
}

/**
* Returns the ID of the rightmost car in the deque.
*
* @return the ID of the rightmost car in the deque; -1 if the deque is empty
*/
int Station::showTopOfDequeRight()
{
	if(d.isEmpty())
	{
		return -1;
	}
	else
	{
		return d.show_right();
	}
}

/**
* Returns the number of cars in the deque.
*
* @return the number of cars in the deque
*/
int Station::showSizeOfDeque()
{
	return d.size();
}