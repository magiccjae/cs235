#ifndef STATION_H
#define STATION_H
#include "StationInterface.h"
#include "Stack.h"
#include "Queue.h"
#include "Deque.h"

class Station : public StationInterface
{
private:
	Stack s;
	Queue q;
	Deque d;

	int current_car;
	bool is_station_empty;

public:

	Station()
	{
		is_station_empty = true;
	}
	virtual ~Station(){}

	virtual bool addToStation(int car);
	virtual int showCurrentCar();
	virtual bool removeFromStation();
	virtual bool addToStack();
	virtual bool removeFromStack();
	virtual int showTopOfStack();
	virtual int showSizeOfStack();
	virtual bool addToQueue();
	virtual bool removeFromQueue();
	virtual int showTopOfQueue();
	virtual int showSizeOfQueue();
	virtual bool addToDequeLeft();
	virtual bool addToDequeRight();
	virtual bool removeFromDequeLeft();
	virtual bool removeFromDequeRight();
	virtual int showTopOfDequeLeft();
	virtual int showTopOfDequeRight();
	virtual int showSizeOfDeque();

};
#endif