#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "QSInterface.h"
#include "QSTestInterface.h"
using namespace std;

class QSTest : public QSTestInterface
{



public:
	QSTest()
	{
		srand(time(0));
	}
	virtual ~QSTest(){}

	bool QSTest::equality(int array1[], int array2[], int size);

	virtual bool testSortAll(QSInterface* test);

	virtual bool testSort(QSInterface* test);

	virtual bool testMedianOfThree(QSInterface* test);

	virtual bool testPartition(QSInterface* test);

	virtual bool testSwap(QSInterface* test);
};
