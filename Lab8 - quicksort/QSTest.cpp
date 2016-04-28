#include "QSInterface.h"
#include "QSTest.h"

/*
* For all methods below, the correctness of an operation is defined in QSInterface.h.
*/

bool QSTest::equality(int array1[], int array2[], int size)
{
	for(int i = 0; i < size; i++)
	{
		if(array1[i] != array2[i])
		{
			return false;
		}
	}
	return true;
}


/*
* testSortAll
*
* Returns true if the given QSInterface object correctly sorts given arrays.
*
* @param test
* 		an implementation of the QSInterface class
* @return
* 		true if [test] correctly sorts; false otherwise
*/
bool QSTest::testSortAll(QSInterface* test)
{
	const int size1 = 5;
	const int size2 = 9;
	const int size3 = 10;
	const int size4 = 100;
	const int size5 = 1;
	const int size6 = 2;
	const int size7 = 5;
	const int size8 = 50;
	const int size9 = 7;
	const int size10 = 5;
	const int size11 = 50;
	const int size12 = 5;
	const int size13 = 10;
	const int size14 = 3;
	const int size15 = 3;
	const int size16 = 5;

	

	int w[6] = {3,2,4,4,1,7};
	test->sortAll(w,6);
	int r[6] = {1,2,3,4,4,7};
	if(!equality(w,r,6)){
		return false;
	}


	int test1[size1] = {4,2,6,10,8};

	int test2[size2] = {44,75,23,43,55,12,64,77,33};

	int test3[size3] = {1,3,5,7,9,8,6,4,2,9};

	int test4[size4] ={};

	int test5[size5] = {1};
	
	int test6[size6] = {2,3};

	int test7[size7] = {1,1,1,1,1};

	int test8[size8] = {};

	int test9[size9] = {-1,-2,-3,-4,-5,-6,-7};

	int test10[size10] = {-10,-5,0,5,10};

	int test11[size11] = {};

	int test12[size12] = {2,4,6,8,10};

	int test13[size13] = {1,3,3,3,9,8,6,4,2,9};

	int test14[size14] = {4,2,6};

	int test15[size15] = {2,4,6};

	int test16[size16] = {234,500,-400,10000,7777};

	int j = 0;

	for(int i = 50; i > 0; i--)
	{
		test8[j] = i;
		j++;
	}
	test->sortAll(test8, size8);
	int result8[size8] = {};
	
	for(int i = 1; i < 51; i++)
	{
		result8[i-1] = i;
	}
	if(!equality(test8, result8, size8))
	{
		cout << "1" << endl;
		return false;
	}


	test->sortAll(test9, size9);
	int result9[size9] = {-7,-6,-5,-4,-3,-2,-1};
	if(!equality(test9, result9, size9))
	{
		cout << "2" << endl;
		return false;
	}


	

	int result10[size10] = {-10,-5,0,5,10};
	if(!equality(test10, result10, size10))
	{
		cout << "3" << endl;
		return false;
	}	




	for(int i = 0; i < 50; i++)
	{
		test11[i] = i;
	}
	test->sortAll(test8, size8);
	int result11[size11] = {};
	
	for(int i = 0; i < 50; i++)
	{
		result11[i] = i;
	}
	if(!equality(test11, result11, size11))
	{
		cout << "4" << endl;
		return false;
	}



	test->sortAll(test12, size12);		
	int result12[size12] = {2,4,6,8,10};
	if(!equality(test12, result12, size12))
	{
		cout << "5" << endl;
		return false;
	}

	
	test->sortAll(test13, size13);	
	int result13[size13] = {1,2,3,3,3,4,6,8,9,9};
	if(!equality(test13, result13, size13))
	{
		cout << "6" << endl;
		return false;
	}

	
	test->sortAll(test14, size14);
	int result14[size14] = {2,4,6};
	if(!equality(test14, result14, size14))
	{
		cout << "7" << endl;
		return false;
	}

	
	test->sortAll(test15, size15);
	int result15[size15] = {2,4,6};
	if(!equality(test15, result15, size15))
	{
		cout << "8" << endl;
		return false;
	}

	
	test->sortAll(test16, size16);
	int result16[size16] = {-400,234,500,7777,10000};
	if(!equality(test16, result16, size16))
	{
		cout << "8" << endl;
		return false;
	}

	test->sortAll(test1, size1);		// test case 1
	int result1[size1] = {2,4,6,8,10};
	if(!equality(test1, result1, size1))
	{
		cout << "9" << endl;
		return false;
	}


	test->sortAll(test2, size2);		// test case 2
	int result2[size2] = {12,23,33,43,44,55,64,75,77};
	if(!equality(test2, result2, size2))
	{
		cout << "10" << endl;
		return false;
	}


	test->sortAll(test3, size3);		// test case 3
	
	int result3[size3] = {1,2,3,4,5,6,7,8,9,9};
	if(!equality(test3, result3, size3))
	{
		cout << "11" << endl;
		return false;
	}


	test->sortAll(test4, size4);		// test for an empty array
	int result4[size4] = {};
	if(!equality(test4, result4, size4))
	{
		cout << "12" << endl;
		return false;
	}

	test->sortAll(test5, size5);		// test for an array with only 1 element
	int result5[size5] = {1};
	if(!equality(test5, result5, size5))		
	{
		return false;
	}

	test->sortAll(test6, size6);		// test for an array with 2 elements
	int result6[size6] = {2,3};
	if(!equality(test6, result6, size6))		
	{
		return false;
	}

	test->sortAll(test7, size7);		// test for an array with several same elements
	int result7[size7] = {1,1,1,1,1};
	if(!equality(test7, result7, size7))		
	{
		return false;
	}

	int x[2] = {3,2};
	test->sortAll(x,2);
	int result[2] = {2,3};
	if(!equality(x,result,2))
	{
		return false;
	}


	return true;
}

/*
* testSort
*
* Returns true if the given QSInterface object correctly sorts given subarrays.
*
* @param test
* 		an implementation of the QSInterface class
* @return
* 		true if [test] correctly sorts; false otherwise
*/
bool QSTest::testSort(QSInterface* test)
{
	const int size1 = 5;
	const int size2 = 9;
	const int size3 = 10;
	const int size4 = 100;
	const int size5 = 1;
	const int size6 = 2;
	const int size7 = 5;


	int test1[size1] = {4,2,6,10,8};

	int test2[size2] = {44,75,23,43,55,12,64,77,33};

	int test3[size3] = {1,3,5,7,9,8,6,4,2,9};

	int test4[size4] ={};

	int test5[size5] = {1};
	
	int test6[size6] = {3,2};

	int test7[size7] = {1,1,1,1,1};

	test->sort(test1, size1, 0, 2);		// test case 1
	int result1[size1] = {2,4,6,10,8};
	if(!equality(test1, result1, size1))
	{
		return false;
	}
	test->sort(test1, size1, 1,5);		// out of bounds
	if(!equality(test1, result1, size1))
	{
		return false;
	}
	test->sort(test1, size1, 1,1);		// when left is not less than right
	if(!equality(test1, result1, size1))
	{
		return false;
	}

	test->sort(test2, size2, 0,4);		// test case 2
	int result2[size2] = {23,43,44,55,75,12,64,77,33};
	if(!equality(test2, result2, size2))
	{
		return false;
	}
	test->sort(test2, size2, -1, 4);		// out of bounds
	if(!equality(test2, result2, size2))
	{
		return false;
	}
	test->sort(test2, size2, 4, 3);			// when left is not less than right
	if(!equality(test2, result2, size2))
	{
		return false;
	}


	test->sort(test3, size3, 4, 9);		// test case 3
	int result3[size3] = {1,3,5,7,2,4,6,8,9,9};
	if(!equality(test3, result3, size3))
	{
		return false;
	}
	test->sort(test3, size3, 4, 15);		// out of bounds
	if(!equality(test3, result3, size3))
	{
		return false;
	}
	test->sort(test3, size3, 9, 8);			// when left is not less than right
	if(!equality(test3, result3, size3))
	{
		return false;
	}

	test->sort(test4, size4, 25, 75);		// test for an empty array
	int result4[size4] = {};
	if(!equality(test4, result4, size4))
	{
		return false;
	}

	test->sort(test5, size5, 0, 0);		// test for an array with only 1 element
	int result5[size5] = {1};
	if(!equality(test5, result5, size5))
	{
		return false;
	}

	test->sort(test6, size6, 0, 1);		// test for an array with 2 elements
	int result6[size6] = {2,3};
	if(!equality(test6, result6, size6))
	{
		return false;
	}

	test->sort(test7, size7, 1, 4);		// test an array with several same elements
	int result7[size7] = {1,1,1,1,1};
	if(!equality(test7, result7, size7))
	{
		return false;
	}

	return true;

}

/*
* testMedianOfThree
*
* Returns true if the given QSInterface object correctly performs median-of-three pivot selection.
*
* @param test
* 		an implementation of the QSInterface class
* @return
* 		true if [test] correctly selects a pivot; false otherwise
*/
bool QSTest::testMedianOfThree(QSInterface* test)
{
	const int size1 = 5;
	const int size2 = 9;
	const int size3 = 10;
	const int size4 = 100;
	const int size5 = 1;
	const int size6 = 2;
	const int size7 = 5;



	int test1[size1] = {4,rand()%20,6,10,8};
	int result1[size1] = {4,test1[1],6,10,8};


	int test2[size2] = {44,75,23,43,55,12,64,77,33};

	int test3[size3] = {1,3,5,7,9,8,6,4,2,10};

	int test4[size4] ={};

	int test5[size5] = {1};

	int test6[size6] = {2,3};

	int test7[size7] = {1,1,1,1,1};

/*	test->medianOfThree(test1, size1, 0, 2);		// test case 1
	int result1[size1] = {2,4,6,10,8};
	if(!equality(test1, result1, size1))
	{
		return false;
	}*/
	test->medianOfThree(test1, size1, 1,5);		// out of bounds
	if(!equality(test1, result1, size1))
	{

		test1[5] = -50;
		return false;
	}
	test->medianOfThree(test1, size1, 1,1);		// when left is not less than right
	if(!equality(test1, result1, size1))
	{

		return false;
	}

	test->medianOfThree(test2, size2, 0,4);		// test case 2
	int result2[size2] = {23,75,44,43,55,12,64,77,33};
	if(!equality(test2, result2, size2))
	{

		return false;
	}
	test->medianOfThree(test2, size2, -1,4);		// test case 2
	if(!equality(test2, result2, size2))
	{

		return false;
	}
	test->medianOfThree(test2, size2, 4,0);		// test case 2
	if(!equality(test2, result2, size2))
	{

		return false;
	}

/*	test->medianOfThree(test2, size2, -1, 4);		// out of bounds
	if(!equality(test2, result2, size2))
	{
		return false;
	}
	test->medianOfThree(test2, size2, 4, 3);			// when left is not less than right
	if(!equality(test2, result2, size2))
	{
		return false;
	}*/

	test->medianOfThree(test3, size3, 4, 9);		// test case 3
	int result3[size3] = {1,3,5,7,6,8,9,4,2,10};
	if(!equality(test3, result3, size3))
	{

		return false;
	}
/*	test->medianOfThree(test3, size3, 4, 15);		// out of bounds
	if(!equality(test3, result3, size3))
	{
		return false;
	}
	test->medianOfThree(test3, size3, 9, 8);			// when left is not less than right
	if(!equality(test3, result3, size3))
	{
		return false;
	}*/

/*	test->medianOfThree(test4, size4, 25, 75);		// test for an empty array
	int result4[size4] = {};
	if(!equality(test4, result4, size4))
	{
		return false;
	}*/

	test->medianOfThree(test5, size5, 0, 0);		// test for an array with only 1 element
	int result5[size5] = {1};
	if(!equality(test5, result5, size5))
	{

		return false;
	}

	test->medianOfThree(test6, size6, 0, 1);		// test for an array with 2 elements
	int result6[size6] = {2,3};
	if(!equality(test6, result6, size6))
	{

		return false;
	}

	test->medianOfThree(test7, size7, 1, 4);		// test an array with several same elements
	int result7[size7] = {1,1,1,1,1};
	if(!equality(test7, result7, size7))
	{

		return false;
	}
/*	test->medianOfThree(test7, size7, 1, 5);		// out of bounds
	if(!equality(test7, result7, size7))
	{
		return false;
	}*/
	return true;

}

/*
* testPartition
*
* Returns true if the given QSInterface object correctly partitions.
*
* @param test
* 		an implementation of the QSInterface class
* @return
* 		true if [test] correctly partitions; false otherwise
*/
bool QSTest::testPartition(QSInterface* test)
{
	const int size2 = 9;

	const int size4 = 100;
	const int size5 = 1;
	const int size6 = 2;
	const int size7 = 5;

	int test2[size2] = {44,75,23,43,55,12,64,77,33};



	int test4[size4] ={};

	int test5[size5] = {1};
	
	int test6[size6] = {2,3};

	int test7[size7] = {1,1,1,1,1};
	
	int check2 = test->partition(test2, size2, 0,8);
	if(check2 != 4)
	{

		return false;
	}
	int result2[size2] = {33,12,23,43,44,75,64,77,55};
	if(!equality(test2, result2, size2))
	{

		return false;
	}
	check2 = test->partition(test2, size2, -1, 4);		// out of bounds
	if(check2 != -1)
	{

		return false;
	}
	if(!equality(test2, result2, size2))
	{

		return false;
	}
	check2 = test->partition(test2, size2, 4, 3);			// when left is not less than right
	if(check2 != -1)
	{

		return false;
	}	
	if(!equality(test2, result2, size2))
	{

		return false;
	}

	test->partition(test4, size4, 25,75);
	int result4[size4] = {};
	if(!equality(test4, result4, size4))
	{

		return false;
	}

	int check5 = test->partition(test5, size5, 0,1);
	if(check5 != -1)
	{

		return false;
	}
	int result5[size5] = {1};
	if(!equality(test5, result5, size5))
	{

		return false;
	}

	int check6 = test->partition(test6, size6, 0, 1);
	if(check6 != 0)
	{

		return false;
	}
	int result6[size6] = {2,3};
	if(!equality(test6, result6, size6))
	{

		return false;
	}

	int check7 = test->partition(test7, size7, 0, 4);
	int result7[size7] = {1,1,1,1,1};
	if(!equality(test7, result7, size7))
	{

		return false;
	}
	return true;

}

/*
* testSwap
*
* Returns true if the given QSInterface object correctly swaps elements.
*
* @param test
* 		an implementation of the QSInterface class
* @return
* 		true if [test] correctly swaps elements = 0; false otherwise
*/
bool QSTest::testSwap(QSInterface* test)
{
	const int size1 = 5;
	const int size2 = 9;
	const int size3 = 10;
	const int size4 = 100;
	const int size5 = 1;
	const int size6 = 2;
	const int size7 = 5;


	int test1[size1] = {4,2,6,10,8};

	int test2[size2] = {44,75,23,43,55,12,64,77,33};

	int test3[size3] = {1,3,5,7,9,8,6,4,2,9};

	int test4[size4] ={};

	int test5[size5] = {1};
	
	int test6[size6] = {2,3};

	int test7[size7] = {1,1,1,1,1};

	test->swap(test1, size1, 1, 3);		// test case 1
	int result1[size1] = {4,10,6,2,8};
	if(!equality(test1, result1, size1))
	{
		return false;
	}
	test->swap(test1, size1, 1,5);		// out of bounds
	if(!equality(test1, result1, size1))
	{
		return false;
	}

	test->swap(test2, size2, 0, 8);		// test case 2
	int result2[size2] = {33,75,23,43,55,12,64,77,44};
	if(!equality(test2, result2, size2))
	{
		return false;
	}
	test->swap(test2, size2, 1,11);		// out of bounds
	if(!equality(test2, result2, size2))
	{
		return false;
	}

	test->swap(test3, size3, 4, 9);		// test case 3
	int result3[size3] = {1,3,5,7,9,8,6,4,2,9};
	if(!equality(test3, result3, size3))
	{
		return false;
	}
	test->swap(test3, size3, -1, 4);		// out of bounds
	if(!equality(test3, result3, size3))
	{
		return false;
	}

	test->swap(test4, size4, 25, 75);		// test case 4
	int result4[size4] = {};
	if(!equality(test4, result4, size4))
	{
		return false;
	}

	test->swap(test5, size5, 0, 0);		// test case 5
	int result5[size5] = {1};
	if(!equality(test5, result5, size5))
	{
		return false;
	}

	test->swap(test6, size6, 0, 1);		// test case 6
	int result6[size6] = {3,2};
	if(!equality(test6, result6, size6))
	{
		return false;
	}

	test->swap(test7, size7, 0, 4);		// test case 7
	int result7[size7] = {1,1,1,1,1};
	if(!equality(test7, result7, size7))
	{
		return false;
	}

	return true;
}