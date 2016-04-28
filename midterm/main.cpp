#include <iostream>
#include <string>
#include "Stack.h"
#include "Queue.h"
#include "Deque.h"
#include "IRd.h"
#include "ORd.h"
#include "LinkedList.h"

using namespace std;

int main()
{

	int choice = 0;
	bool again = true;

	do		// Extra credit part 1 - user can select
	{
		cout << "Select ANY ADT or All ADT to test, or Quit" << endl;
		cout << "[1] ADT_Stack" << endl;
		cout << "[2] ADT_Queue" << endl;
		cout << "[3] ADT_Deque" << endl;
		cout << "[4] ADT_IR_Deque" << endl;
		cout << "[5] ADT_OR_Deque" << endl;
		cout << "[6] Y_Vector" << endl;
		cout << "[7] ALL_ADT" << endl;
		cout << "[8] Quit" << endl;

		cin >> choice;

		if(choice == 1)		// stack testing
		{
			Stack<int> int_stack1;
			Stack<double> double_stack1;
			Stack<double> double_stack2;
			Stack<string> string_stack1;


			cout << "***Testing for pushing onto the stack and size function***" << endl << endl; // Testing for pushing onto the stack and size function

			int_stack1.push(1);
			cout << int_stack1.top() << " is pushed onto 'int_stack1'" << endl;
			cout << "The size of the stack is " << int_stack1.size() << endl;
			int_stack1.push(3);
			cout << int_stack1.top() << " is pushed onto 'int_stack1'" << endl;
			cout << "The size of the stack is " << int_stack1.size() << endl;
			int_stack1.push(5);
			cout << int_stack1.top() << " is pushed onto 'int_stack1'" << endl;
			cout << "The size of the stack is " << int_stack1.size() << endl;
			int_stack1.push(7);
			cout << int_stack1.top() << " is pushed onto 'int_stack1'" << endl;
			cout << "The size of the stack is " << int_stack1.size() << endl;
			int_stack1.push(9);
			cout << int_stack1.top() << " is pushed onto 'int_stack1'" << endl;
			cout << "The size of the stack is " << int_stack1.size() << endl << endl;

			cout << "***Testing for popping and access the top of the stack***" << endl << endl; // Testing for popping and access the top of the stack

			cout << "Top of the stack is " << int_stack1.top() << endl;
			int_stack1.pop();
			cout << "Top of the stack is popped" << endl;
			cout << "Top of the stack is " << int_stack1.top() << endl;
			int_stack1.pop();
			cout << "Top of the stack is popped" << endl;
			cout << "Top of the stack is " << int_stack1.top() << endl;
			int_stack1.pop();
			cout << "Top of the stack is popped" << endl;
			cout << "Top of the stack is " << int_stack1.top() << endl;
			int_stack1.pop();
			cout << "Top of the stack is popped" << endl;
			cout << "Top of the stack is " << int_stack1.top() << endl;
			int_stack1.pop();
			cout << "Top of the stack is popped" << endl;
			cout << "The size of the stack is " << int_stack1.size() << endl << endl;

			cout << "***Testing if the stack works with string inputs***" << endl << endl; // Testing if the stack works with string inputs

			string_stack1.push("A");
			cout << string_stack1.top() << " is pushed onto 'string_stack1'" << endl;
			cout << "The size of the stack is " << string_stack1.size() << endl;
			string_stack1.push("B");
			cout << string_stack1.top() << " is pushed onto 'string_stack1'" << endl;
			cout << "The size of the stack is " << string_stack1.size() << endl;
			string_stack1.push("C");
			cout << string_stack1.top() << " is pushed onto 'string_stack1'" << endl;
			cout << "The size of the stack is " << string_stack1.size() << endl;
			string_stack1.push("D");
			cout << string_stack1.top() << " is pushed onto 'string_stack1'" << endl;
			cout << "The size of the stack is " << string_stack1.size() << endl;
			string_stack1.push("E");
			cout << string_stack1.top() << " is pushed onto 'string_stack1'" << endl;
			cout << "The size of the stack is " << string_stack1.size() << endl << endl;

			cout << "Top of the stack is " << string_stack1.top() << endl;
			string_stack1.pop();
			cout << "Top of the stack is popped" << endl;
			cout << "Top of the stack is " << string_stack1.top() << endl;
			string_stack1.pop();
			cout << "Top of the stack is popped" << endl;
			cout << "Top of the stack is " << string_stack1.top() << endl;
			string_stack1.pop();
			cout << "Top of the stack is popped" << endl;
			cout << "Top of the stack is " << string_stack1.top() << endl;
			string_stack1.pop();
			cout << "Top of the stack is popped" << endl;
			cout << "Top of the stack is " << string_stack1.top() << endl;
			string_stack1.pop();
			cout << "Top of the stack is popped" << endl;
			cout << "The size of the stack is " << string_stack1.size() << endl << endl;

			cout << "***equality test with double value***" << endl << endl; // equality test with double value

			double_stack1.push(1.1);
			cout << double_stack1.top() << " is pushed onto 'double_stack1'" << endl;
			cout << "The size of the stack is " << double_stack1.size() << endl;
			double_stack1.push(2.2);
			cout << double_stack1.top() << " is pushed onto 'double_stack1'" << endl;
			cout << "The size of the stack is " << double_stack1.size() << endl;
			double_stack1.push(3.3);
			cout << double_stack1.top() << " is pushed onto 'double_stack1'" << endl;
			cout << "The size of the stack is " << double_stack1.size() << endl;
			double_stack1.push(4.4);
			cout << double_stack1.top() << " is pushed onto 'double_stack1'" << endl;
			cout << "The size of the stack is " << double_stack1.size() << endl;
			double_stack1.push(5.5);
			cout << double_stack1.top() << " is pushed onto 'double_stack1'" << endl;
			cout << "The size of the stack is " << double_stack1.size() << endl << endl;

			double_stack2.push(1.1);
			cout << double_stack2.top() << " is pushed onto 'double_stack2'" << endl;
			cout << "The size of the stack is " << double_stack1.size() << endl;
			double_stack2.push(2.2);
			cout << double_stack2.top() << " is pushed onto 'double_stack2'" << endl;
			cout << "The size of the stack is " << double_stack1.size() << endl;
			double_stack2.push(3.3);
			cout << double_stack2.top() << " is pushed onto 'double_stack2'" << endl;
			cout << "The size of the stack is " << double_stack2.size() << endl;
			double_stack2.push(4.4);
			cout << double_stack2.top() << " is pushed onto 'double_stack2'" << endl;
			cout << "The size of the stack is " << double_stack2.size() << endl;
			double_stack2.push(5.5);
			cout << double_stack2.top() << " is pushed onto 'double_stack2'" << endl;
			cout << "The size of the stack is " << double_stack2.size() << endl << endl;

			cout << "Now double_stack1 and double_stack2 are same stacks" << endl;

			if(double_stack1 == double_stack2)		// double_stack1 and double_stack2 contain same elements in same sequence. So they are same stacks
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}
			else
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}

			cout << "Now I will pop one element from double_stack2 to make them different" << endl;

			double_stack2.pop();
			if(double_stack1 == double_stack2)		// double_stack1 and double_stack2 are different in size
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}
			else
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}

			cout << "Now I will push one element onto double_stack2 to make them same size, but different element" << endl;

			double_stack2.push(25);		
			if(double_stack1 == double_stack2)		// double_stack1 and double_stack2 are same in their sizes, but contain different element
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}
			else
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}

		}
		else if(choice == 2)		// queue testing
		{
			Queue<int> int_queue1;
			Queue<double> double_queue1;
			Queue<double> double_queue2;
			Queue<string> string_queue1;


			cout << "***Testing for pushing onto the queue and size function***" << endl << endl; // Testing for pushing onto the queue and size function

			int_queue1.push(1);
			cout << "1 is pushed onto 'int_queue1'" << endl;
			cout << "Front of the queue is " << int_queue1.front() << endl;
			cout << "The size of the queue is " << int_queue1.size() << endl;
			int_queue1.push(3);
			cout << "3 is pushed onto 'int_queue1'" << endl;
			cout << "Front of the queue is " << int_queue1.front() << endl;
			cout << "The size of the queue is " << int_queue1.size() << endl;
			int_queue1.push(5);
			cout << "5 is pushed onto 'int_queue1'" << endl;
			cout << "Front of the queue is " << int_queue1.front() << endl;
			cout << "The size of the queue is " << int_queue1.size() << endl;
			int_queue1.push(7);
			cout << "7 is pushed onto 'int_queue1'" << endl;
			cout << "Front of the queue is " << int_queue1.front() << endl;
			cout << "The size of the queue is " << int_queue1.size() << endl;
			int_queue1.push(9);
			cout << int_queue1.front() << " is pushed onto 'int_queue1'" << endl;
			cout << "9 is pushed onto 'int_queue1'" << endl;
			cout << "The size of the queue is " << int_queue1.size() << endl << endl;

			cout << "***Testing for popping and access the front of the queue***" << endl << endl; // Testing for popping and access the front of the queue

			cout << "Front of the queue is " << int_queue1.front() << endl;
			int_queue1.pop();
			cout << "Front of the queue is popped" << endl;
			cout << "Front of the queue is " << int_queue1.front() << endl;
			int_queue1.pop();
			cout << "Front of the queue is popped" << endl;
			cout << "Front of the queue is " << int_queue1.front() << endl;
			int_queue1.pop();
			cout << "Front of the queue is popped" << endl;
			cout << "Front of the queue is " << int_queue1.front() << endl;
			int_queue1.pop();
			cout << "Front of the queue is popped" << endl;
			cout << "Front of the queue is " << int_queue1.front() << endl;
			int_queue1.pop();
			cout << "Front of the queue is popped" << endl;
			cout << "The size of the queue is " << int_queue1.size() << endl << endl;

			cout << "***Testing if the queue works with string inputs***" << endl << endl; // Testing if the queue works with string inputs

			string_queue1.push("A");
			cout << "A is pushed onto 'string_queue1'" << endl;
			cout << "Front of the queue is " << string_queue1.front() << endl;
			cout << "The size of the queue is " << string_queue1.size() << endl;
			string_queue1.push("B");
			cout << "B is pushed onto 'string_queue1'" << endl;
			cout << "Front of the queue is " << string_queue1.front() << endl;
			cout << "The size of the queue is " << string_queue1.size() << endl;
			string_queue1.push("C");
			cout << "C is pushed onto 'string_queue1'" << endl;
			cout << "Front of the queue is " << string_queue1.front() << endl;
			cout << "The size of the queue is " << string_queue1.size() << endl;
			string_queue1.push("D");
			cout << "D is pushed onto 'string_queue1'" << endl;
			cout << "Front of the queue is " << string_queue1.front() << endl;
			cout << "The size of the queue is " << string_queue1.size() << endl;
			string_queue1.push("E");
			cout << "E is pushed onto 'string_queue1'" << endl;
			cout << "Front of the queue is " << string_queue1.front() << endl;
			cout << "The size of the queue is " << string_queue1.size() << endl << endl;

			cout << "Front of the queue is " << string_queue1.front() << endl;
			string_queue1.pop();
			cout << "Front of the queue is popped" << endl;
			cout << "Front of the queue is " << string_queue1.front() << endl;
			string_queue1.pop();
			cout << "Front of the queue is popped" << endl;
			cout << "Front of the queue is " << string_queue1.front() << endl;
			string_queue1.pop();
			cout << "Front of the queue is popped" << endl;
			cout << "Front of the queue is " << string_queue1.front() << endl;
			string_queue1.pop();
			cout << "Front of the queue is popped" << endl;
			cout << "Front of the queue is " << string_queue1.front() << endl;
			string_queue1.pop();
			cout << "Front of the queue is popped" << endl;
			cout << "The size of the queue is " << string_queue1.size() << endl << endl;

			cout << "***equality test with double value***" << endl << endl; // equality test with double value

			double_queue1.push(1.1);
			cout << "1.1 is pushed onto 'double_queue1'" << endl;
			cout << "The size of the queue is " << double_queue1.size() << endl;
			double_queue1.push(2.2);
			cout << "2.2 is pushed onto 'double_queue1'" << endl;
			cout << "The size of the queue is " << double_queue1.size() << endl;
			double_queue1.push(3.3);
			cout << "3.3 is pushed onto 'double_queue1'" << endl;
			cout << "The size of the queue is " << double_queue1.size() << endl;
			double_queue1.push(4.4);
			cout << "4.4 is pushed onto 'double_queue1'" << endl;
			cout << "The size of the queue is " << double_queue1.size() << endl;
			double_queue1.push(5.5);
			cout << "5.5 is pushed onto 'double_queue1'" << endl;
			cout << "The size of the queue is " << double_queue1.size() << endl << endl;

			double_queue2.push(1.1);
			cout << "1.1 is pushed onto 'double_queue2'" << endl;
			cout << "The size of the queue is " << double_queue2.size() << endl;
			double_queue2.push(2.2);
			cout << "2.2 is pushed onto 'double_queue2'" << endl;
			cout << "The size of the queue is " << double_queue2.size() << endl;
			double_queue2.push(3.3);
			cout << "3.3 is pushed onto 'double_queue2'" << endl;
			cout << "The size of the queue is " << double_queue2.size() << endl;
			double_queue2.push(4.4);
			cout << "4.4 is pushed onto 'double_queue2'" << endl;
			cout << "The size of the queue is " << double_queue2.size() << endl;
			double_queue2.push(5.5);
			cout << "5.5 is pushed onto 'double_queue2'" << endl;
			cout << "The size of the queue is " << double_queue2.size() << endl << endl;

			cout << "Now double_queue1 and double_queue2 are same queues" << endl;

			if(double_queue1 == double_queue2)		// double_queue1 and double_queue2 contain same elements in same sequence. So they are same queues
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}
			else
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}

			cout << "Now I will pop one element from double_queue2 to make them different" << endl;

			double_queue2.pop();
			if(double_queue1 == double_queue2)		// double_queue1 and double_queue2 are different in size
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}
			else
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}

			cout << "Now I will push one element onto double_queue2 to make them same size, but different element" << endl;

			double_queue2.push(25);		
			if(double_queue1 == double_queue2)		// double_queue1 and double_queue2 are same in their sizes, but contain different element
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}
			else
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}

		}	
		else if(choice == 3)		// deque testing
		{
			Deque<int> int_deque1;
			Deque<double> double_deque1;
			Deque<double> double_deque2;
			Deque<string> string_deque1;

			cout << "***Testing for pushing onto the deque from left and right, and size function***" << endl << endl; // Testing for pushing onto the deque from left and right, and size function

			int_deque1.push_left(1);
			cout << int_deque1.show_left() << " is pushed left onto 'int_deque1'" << endl;
			cout << "Left of the deque is " << int_deque1.show_left() << endl;
			cout << "The size of the deque is " << int_deque1.size() << endl;
			int_deque1.push_left(3);
			cout << int_deque1.show_left() << " is pushed left onto 'int_deque1'" << endl;
			cout << "Left of the deque is " << int_deque1.show_left() << endl;
			cout << "The size of the deque is " << int_deque1.size() << endl;
			int_deque1.push_left(5);
			cout << int_deque1.show_left() << " is pushed left onto 'int_deque1'" << endl;
			cout << "Left of the deque is " << int_deque1.show_left() << endl;
			cout << "The size of the deque is " << int_deque1.size() << endl;
			int_deque1.push_left(7);
			cout << int_deque1.show_left() << " is pushed left onto 'int_deque1'" << endl;
			cout << "Left of the deque is " << int_deque1.show_left() << endl;
			cout << "The size of the deque is " << int_deque1.size() << endl;
			int_deque1.push_left(9);
			cout << int_deque1.show_left() << " is pushed left onto 'int_deque1'" << endl;
			cout << "Left of the deque is " << int_deque1.show_left() << endl;
			cout << "The size of the deque is " << int_deque1.size() << endl << endl;

			int_deque1.push_right(2);
			cout << int_deque1.show_right() << " is pushed right onto 'int_deque1'" << endl;
			cout << "Right of the deque is " << int_deque1.show_right() << endl;
			cout << "The size of the deque is " << int_deque1.size() << endl;
			int_deque1.push_right(4);
			cout << int_deque1.show_right() << " is pushed right onto 'int_deque1'" << endl;
			cout << "Right of the deque is " << int_deque1.show_right() << endl;
			cout << "The size of the deque is " << int_deque1.size() << endl;
			int_deque1.push_right(6);
			cout << int_deque1.show_right() << " is pushed right onto 'int_deque1'" << endl;
			cout << "Right of the deque is " << int_deque1.show_right() << endl;
			cout << "The size of the deque is " << int_deque1.size() << endl;
			int_deque1.push_right(8);
			cout << int_deque1.show_right() << " is pushed right onto 'int_deque1'" << endl;
			cout << "Right of the deque is " << int_deque1.show_right() << endl;
			cout << "The size of the deque is " << int_deque1.size() << endl;
			int_deque1.push_right(10);
			cout << int_deque1.show_right() << " is pushed right onto 'int_deque1'" << endl;
			cout << "Right of the deque is " << int_deque1.show_right() << endl;
			cout << "The size of the deque is " << int_deque1.size() << endl << endl;
						
			cout << "***Testing for popping and access the left and right of the deque***" << endl << endl; // Testing for popping and access the left and right of the deque

			cout << "Left of the deque is " << int_deque1.show_left() << endl;
			int_deque1.pop_left();
			cout << "Left of the deque is popped" << endl;
			cout << "Left of the deque is " << int_deque1.show_left() << endl;
			int_deque1.pop_left();
			cout << "Left of the deque is popped" << endl;
			cout << "Left of the deque is " << int_deque1.show_left() << endl;
			int_deque1.pop_left();
			cout << "Left of the deque is popped" << endl;
			cout << "Left of the deque is " << int_deque1.show_left() << endl;
			int_deque1.pop_left();
			cout << "Left of the deque is popped" << endl;
			cout << "Left of the deque is " << int_deque1.show_left() << endl;
			int_deque1.pop_left();
			cout << "Left of the deque is popped" << endl;
			cout << "The size of the deque is " << int_deque1.size() << endl << endl;

			cout << "Right of the deque is " << int_deque1.show_right() << endl;
			int_deque1.pop_right();
			cout << "Right of the deque is popped" << endl;
			cout << "Right of the deque is " << int_deque1.show_right() << endl;
			int_deque1.pop_right();
			cout << "Right of the deque is popped" << endl;
			cout << "Right of the deque is " << int_deque1.show_right() << endl;
			int_deque1.pop_right();
			cout << "Right of the deque is popped" << endl;
			cout << "Right of the deque is " << int_deque1.show_right() << endl;
			int_deque1.pop_right();
			cout << "Right of the deque is popped" << endl;
			cout << "Right of the deque is " << int_deque1.show_right() << endl;
			int_deque1.pop_right();
			cout << "Right of the deque is popped" << endl;
			cout << "The size of the deque is " << int_deque1.size() << endl << endl;

			cout << "***Testing if the deque works with string inputs***" << endl << endl; // Testing if the deque works with string inputs

			string_deque1.push_left("A");
			cout << string_deque1.show_left() << " is pushed left onto 'string_deque1'" << endl;
			cout << "Left of the deque is " << string_deque1.show_left() << endl;
			cout << "The size of the deque is " << string_deque1.size() << endl;
			string_deque1.push_left("B");
			cout << string_deque1.show_left() << " is pushed left onto 'string_deque1'" << endl;
			cout << "Left of the deque is " << string_deque1.show_left() << endl;
			cout << "The size of the deque is " << string_deque1.size() << endl;
			string_deque1.push_left("C");
			cout << string_deque1.show_left() << " is pushed left onto 'string_deque1'" << endl;
			cout << "Left of the deque is " << string_deque1.show_left() << endl;
			cout << "The size of the deque is " << string_deque1.size() << endl;
			string_deque1.push_left("D");
			cout << string_deque1.show_left() << " is pushed left onto 'string_deque1'" << endl;
			cout << "Left of the deque is " << string_deque1.show_left() << endl;
			cout << "The size of the deque is " << string_deque1.size() << endl;
			string_deque1.push_left("E");
			cout << string_deque1.show_left() << " is pushed left onto 'string_deque1'" << endl;
			cout << "Left of the deque is " << string_deque1.show_left() << endl;
			cout << "The size of the deque is " << string_deque1.size() << endl << endl;

			string_deque1.push_right("V");
			cout << string_deque1.show_right() << " is pushed right onto 'string_deque1'" << endl;
			cout << "Right of the deque is " << string_deque1.show_right() << endl;
			cout << "The size of the deque is " << string_deque1.size() << endl;
			string_deque1.push_right("W");
			cout << string_deque1.show_right() << " is pushed right onto 'string_deque1'" << endl;
			cout << "Right of the deque is " << string_deque1.show_right() << endl;
			cout << "The size of the deque is " << string_deque1.size() << endl;
			string_deque1.push_right("X");
			cout << string_deque1.show_right() << " is pushed right onto 'string_deque1'" << endl;
			cout << "Right of the deque is " << string_deque1.show_right() << endl;
			cout << "The size of the deque is " << string_deque1.size() << endl;
			string_deque1.push_right("Y");
			cout << string_deque1.show_right() << " is pushed right onto 'string_deque1'" << endl;
			cout << "Right of the deque is " << string_deque1.show_right() << endl;
			cout << "The size of the deque is " << string_deque1.size() << endl;
			string_deque1.push_right("Z");
			cout << string_deque1.show_right() << " is pushed right onto 'string_deque1'" << endl;
			cout << "Right of the deque is " << string_deque1.show_right() << endl;
			cout << "The size of the deque is " << string_deque1.size() << endl << endl;


			cout << "Left of the deque is " << string_deque1.show_left() << endl;
			string_deque1.pop_left();
			cout << "Left of the deque is popped" << endl;
			cout << "Left of the deque is " << string_deque1.show_left() << endl;
			string_deque1.pop_left();
			cout << "Left of the deque is popped" << endl;
			cout << "Left of the deque is " << string_deque1.show_left() << endl;
			string_deque1.pop_left();
			cout << "Left of the deque is popped" << endl;
			cout << "Left of the deque is " << string_deque1.show_left() << endl;
			string_deque1.pop_left();
			cout << "Left of the deque is popped" << endl;
			cout << "Left of the deque is " << string_deque1.show_left() << endl;
			string_deque1.pop_left();
			cout << "Left of the deque is popped" << endl;
			cout << "The size of the deque is " << string_deque1.size() << endl << endl;

			cout << "Right of the deque is " << string_deque1.show_right() << endl;
			string_deque1.pop_right();
			cout << "Right of the deque is popped" << endl;
			cout << "Right of the deque is " << string_deque1.show_right() << endl;
			string_deque1.pop_right();
			cout << "Right of the deque is popped" << endl;
			cout << "Right of the deque is " << string_deque1.show_right() << endl;
			string_deque1.pop_right();
			cout << "Right of the deque is popped" << endl;
			cout << "Right of the deque is " << string_deque1.show_right() << endl;
			string_deque1.pop_right();
			cout << "Right of the deque is popped" << endl;
			cout << "Right of the deque is " << string_deque1.show_right() << endl;
			string_deque1.pop_right();
			cout << "Right of the deque is popped" << endl;
			cout << "The size of the deque is " << string_deque1.size() << endl << endl;

			cout << "***equality test with double value***" << endl << endl; // equality test with double value

			double_deque1.push_left(1.1);
			cout << double_deque1.show_left() << " is pushed left onto 'double_deque1'" << endl;
			cout << "The size of the deque is " << double_deque1.size() << endl;
			double_deque1.push_left(2.2);
			cout << double_deque1.show_left() << " is pushed left onto 'double_deque1'" << endl;
			cout << "The size of the deque is " << double_deque1.size() << endl;
			double_deque1.push_left(3.3);
			cout << double_deque1.show_left() << " is pushed left onto 'double_deque1'" << endl;
			cout << "The size of the deque is " << double_deque1.size() << endl;
			double_deque1.push_left(4.4);
			cout << double_deque1.show_left() << " is pushed left onto 'double_deque1'" << endl;
			cout << "The size of the deque is " << double_deque1.size() << endl;
			double_deque1.push_left(5.5);
			cout << double_deque1.show_left() << " is pushed left onto 'double_deque1'" << endl;
			cout << "The size of the deque is " << double_deque1.size() << endl << endl;

			double_deque2.push_right(5.5);
			cout << double_deque2.show_right() << " is pushed right onto 'double_deque2'" << endl;
			cout << "The size of the deque is " << double_deque2.size() << endl;
			double_deque2.push_right(4.4);
			cout << double_deque2.show_right() << " is pushed right onto 'double_deque2'" << endl;
			cout << "The size of the deque is " << double_deque2.size() << endl;
			double_deque2.push_right(3.3);
			cout << double_deque2.show_right() << " is pushed right onto 'double_deque2'" << endl;
			cout << "The size of the deque is " << double_deque2.size() << endl;
			double_deque2.push_right(2.2);
			cout << double_deque2.show_right() << " is pushed right onto 'double_deque2'" << endl;
			cout << "The size of the deque is " << double_deque2.size() << endl;
			double_deque2.push_right(1.1);
			cout << double_deque2.show_right() << " is pushed right onto 'double_deque2'" << endl;
			cout << "The size of the deque is " << double_deque2.size() << endl << endl;

			cout << "Now double_deque1 and double_deque2 are same deques" << endl;

			if(double_deque1 == double_deque2)		// double_deque1 and double_deque2 contain same elements in same sequence. So they are same deques
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}
			else
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}

			cout << "Now I will pop one element from double_deque2 to make them different" << endl;

			double_deque2.pop_right();
			if(double_deque1 == double_deque2)		// double_deque1 and double_deque2 are different in size
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}
			else
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}

			cout << "Now I will push one element onto double_deque2 to make them same size, but different element" << endl;

			double_deque2.push_right(25);		
			if(double_deque1 == double_deque2)		// double_deque1 and double_deque2 are same in their sizes, but contain different element
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}
			else
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}


		}
		else if(choice == 4)		// IRd testing
		{
			IRd<int> int_ird1;
			IRd<double> double_ird1;
			IRd<double> double_ird2;
			IRd<string> string_ird1;

			cout << "***Testing for pushing onto the IRd from left, and size function***" << endl << endl; // Testing for pushing onto the IRd from left, and size function

			int_ird1.push_left(1);
			cout << int_ird1.show_left() << " is pushed left onto 'int_ird1'" << endl;
			cout << "Left of the IRd is " << int_ird1.show_left() << endl;
			cout << "The size of the IRd is " << int_ird1.size() << endl;
			int_ird1.push_left(3);
			cout << int_ird1.show_left() << " is pushed left onto 'int_ird1'" << endl;
			cout << "Left of the IRd is " << int_ird1.show_left() << endl;
			cout << "The size of the IRd is " << int_ird1.size() << endl;
			int_ird1.push_left(5);
			cout << int_ird1.show_left() << " is pushed left onto 'int_ird1'" << endl;
			cout << "Left of the IRd is " << int_ird1.show_left() << endl;
			cout << "The size of the IRd is " << int_ird1.size() << endl;
			int_ird1.push_left(7);
			cout << int_ird1.show_left() << " is pushed left onto 'int_ird1'" << endl;
			cout << "Left of the IRd is " << int_ird1.show_left() << endl;
			cout << "The size of the IRd is " << int_ird1.size() << endl;
			int_ird1.push_left(9);
			cout << int_ird1.show_left() << " is pushed left onto 'int_ird1'" << endl;
			cout << "Left of the IRd is " << int_ird1.show_left() << endl;
			cout << "The size of the IRd is " << int_ird1.size() << endl << endl;

			int_ird1.push_left(2);
			cout << int_ird1.show_left() << " is pushed left onto 'int_ird1'" << endl;
			cout << "Right of the IRd is " << int_ird1.show_right() << endl;
			cout << "The size of the IRd is " << int_ird1.size() << endl;
			int_ird1.push_left(4);
			cout << int_ird1.show_left() << " is pushed left onto 'int_ird1'" << endl;
			cout << "Right of the IRd is " << int_ird1.show_right() << endl;
			cout << "The size of the IRd is " << int_ird1.size() << endl;
			int_ird1.push_left(6);
			cout << int_ird1.show_left() << " is pushed left onto 'int_ird1'" << endl;
			cout << "Right of the IRd is " << int_ird1.show_right() << endl;
			cout << "The size of the IRd is " << int_ird1.size() << endl;
			int_ird1.push_left(8);
			cout << int_ird1.show_left() << " is pushed left onto 'int_ird1'" << endl;
			cout << "Right of the IRd is " << int_ird1.show_right() << endl;
			cout << "The size of the IRd is " << int_ird1.size() << endl;
			int_ird1.push_left(10);
			cout << int_ird1.show_left() << " is pushed left onto 'int_ird1'" << endl;
			cout << "Right of the IRd is " << int_ird1.show_right() << endl;
			cout << "The size of the IRd is " << int_ird1.size() << endl << endl;

			cout << "***Testing for popping and access the left and right of the IRd***" << endl << endl; // Testing for popping and access the left and right of the IRd

			cout << "Left of the IRd is " << int_ird1.show_left() << endl;
			int_ird1.pop_left();
			cout << "Left of the IRd is popped" << endl;
			cout << "Left of the IRd is " << int_ird1.show_left() << endl;
			int_ird1.pop_left();
			cout << "Left of the IRd is popped" << endl;
			cout << "Left of the IRd is " << int_ird1.show_left() << endl;
			int_ird1.pop_left();
			cout << "Left of the IRd is popped" << endl;
			cout << "Left of the IRd is " << int_ird1.show_left() << endl;
			int_ird1.pop_left();
			cout << "Left of the IRd is popped" << endl;
			cout << "Left of the IRd is " << int_ird1.show_left() << endl;
			int_ird1.pop_left();
			cout << "Left of the IRd is popped" << endl;
			cout << "The size of the IRd is " << int_ird1.size() << endl << endl;

			cout << "Right of the IRd is " << int_ird1.show_right() << endl;
			int_ird1.pop_right();
			cout << "Right of the IRd is popped" << endl;
			cout << "Right of the IRd is " << int_ird1.show_right() << endl;
			int_ird1.pop_right();
			cout << "Right of the IRd is popped" << endl;
			cout << "Right of the IRd is " << int_ird1.show_right() << endl;
			int_ird1.pop_right();
			cout << "Right of the IRd is popped" << endl;
			cout << "Right of the IRd is " << int_ird1.show_right() << endl;
			int_ird1.pop_right();
			cout << "Right of the IRd is popped" << endl;
			cout << "Right of the IRd is " << int_ird1.show_right() << endl;
			int_ird1.pop_right();
			cout << "Right of the IRd is popped" << endl;
			cout << "The size of the IRd is " << int_ird1.size() << endl << endl;

			cout << "***Testing if the IRd works with string inputs***" << endl << endl; // Testing if the IRd works with string inputs

			string_ird1.push_left("A");
			cout << string_ird1.show_left() << " is pushed left onto 'string_ird1'" << endl;
			cout << "Left of the IRd is " << string_ird1.show_left() << endl;
			cout << "The size of the IRd is " << string_ird1.size() << endl;
			string_ird1.push_left("B");
			cout << string_ird1.show_left() << " is pushed left onto 'string_ird1'" << endl;
			cout << "Left of the IRd is " << string_ird1.show_left() << endl;
			cout << "The size of the IRd is " << string_ird1.size() << endl;
			string_ird1.push_left("C");
			cout << string_ird1.show_left() << " is pushed left onto 'string_ird1'" << endl;
			cout << "Left of the IRd is " << string_ird1.show_left() << endl;
			cout << "The size of the IRd is " << string_ird1.size() << endl;
			string_ird1.push_left("D");
			cout << string_ird1.show_left() << " is pushed left onto 'string_ird1'" << endl;
			cout << "Left of the IRd is " << string_ird1.show_left() << endl;
			cout << "The size of the IRd is " << string_ird1.size() << endl;
			string_ird1.push_left("E");
			cout << string_ird1.show_left() << " is pushed left onto 'string_ird1'" << endl;
			cout << "Left of the IRd is " << string_ird1.show_left() << endl;
			cout << "The size of the IRd is " << string_ird1.size() << endl << endl;

			string_ird1.push_left("V");
			cout << string_ird1.show_left() << " is pushed left onto 'string_ird1'" << endl;
			cout << "Right of the IRd is " << string_ird1.show_right() << endl;
			cout << "The size of the IRd is " << string_ird1.size() << endl;
			string_ird1.push_left("W");
			cout << string_ird1.show_left() << " is pushed left onto 'string_ird1'" << endl;
			cout << "Right of the IRd is " << string_ird1.show_right() << endl;
			cout << "The size of the IRd is " << string_ird1.size() << endl;
			string_ird1.push_left("X");
			cout << string_ird1.show_left() << " is pushed left onto 'string_ird1'" << endl;
			cout << "Right of the IRd is " << string_ird1.show_right() << endl;
			cout << "The size of the IRd is " << string_ird1.size() << endl;
			string_ird1.push_left("Y");
			cout << string_ird1.show_left() << " is pushed left onto 'string_ird1'" << endl;
			cout << "Right of the IRd is " << string_ird1.show_right() << endl;
			cout << "The size of the IRd is " << string_ird1.size() << endl;
			string_ird1.push_left("Z");
			cout << string_ird1.show_left() << " is pushed left onto 'string_ird1'" << endl;
			cout << "Right of the IRd is " << string_ird1.show_right() << endl;
			cout << "The size of the IRd is " << string_ird1.size() << endl << endl;


			cout << "Left of the IRd is " << string_ird1.show_left() << endl;
			string_ird1.pop_left();
			cout << "Left of the IRd is popped" << endl;
			cout << "Left of the IRd is " << string_ird1.show_left() << endl;
			string_ird1.pop_left();
			cout << "Left of the IRd is popped" << endl;
			cout << "Left of the IRd is " << string_ird1.show_left() << endl;
			string_ird1.pop_left();
			cout << "Left of the IRd is popped" << endl;
			cout << "Left of the IRd is " << string_ird1.show_left() << endl;
			string_ird1.pop_left();
			cout << "Left of the IRd is popped" << endl;
			cout << "Left of the IRd is " << string_ird1.show_left() << endl;
			string_ird1.pop_left();
			cout << "Left of the IRd is popped" << endl;
			cout << "The size of the IRd is " << string_ird1.size() << endl << endl;

			cout << "Right of the IRd is " << string_ird1.show_right() << endl;
			string_ird1.pop_right();
			cout << "Right of the IRd is popped" << endl;
			cout << "Right of the IRd is " << string_ird1.show_right() << endl;
			string_ird1.pop_right();
			cout << "Right of the IRd is popped" << endl;
			cout << "Right of the IRd is " << string_ird1.show_right() << endl;
			string_ird1.pop_right();
			cout << "Right of the IRd is popped" << endl;
			cout << "Right of the IRd is " << string_ird1.show_right() << endl;
			string_ird1.pop_right();
			cout << "Right of the IRd is popped" << endl;
			cout << "Right of the IRd is " << string_ird1.show_right() << endl;
			string_ird1.pop_right();
			cout << "Right of the IRd is popped" << endl;
			cout << "The size of the IRd is " << string_ird1.size() << endl << endl;

			cout << "***equality test with double value***" << endl << endl; // equality test with double value

			double_ird1.push_left(1.1);
			cout << double_ird1.show_left() << " is pushed left onto 'double_ird1'" << endl;
			cout << "The size of the IRd is " << double_ird1.size() << endl;
			double_ird1.push_left(2.2);
			cout << double_ird1.show_left() << " is pushed left onto 'double_ird1'" << endl;
			cout << "The size of the IRd is " << double_ird1.size() << endl;
			double_ird1.push_left(3.3);
			cout << double_ird1.show_left() << " is pushed left onto 'double_ird1'" << endl;
			cout << "The size of the IRd is " << double_ird1.size() << endl;
			double_ird1.push_left(4.4);
			cout << double_ird1.show_left() << " is pushed left onto 'double_ird1'" << endl;
			cout << "The size of the IRd is " << double_ird1.size() << endl;
			double_ird1.push_left(5.5);
			cout << double_ird1.show_left() << " is pushed left onto 'double_ird1'" << endl;
			cout << "The size of the IRd is " << double_ird1.size() << endl << endl;

			double_ird2.push_left(1.1);
			cout << double_ird2.show_left() << " is pushed left onto 'double_ird2'" << endl;
			cout << "The size of the IRd is " << double_ird2.size() << endl;
			double_ird2.push_left(2.2);
			cout << double_ird2.show_left() << " is pushed left onto 'double_ird2'" << endl;
			cout << "The size of the IRd is " << double_ird2.size() << endl;
			double_ird2.push_left(3.3);
			cout << double_ird2.show_left() << " is pushed left onto 'double_ird2'" << endl;
			cout << "The size of the IRd is " << double_ird2.size() << endl;
			double_ird2.push_left(4.4);
			cout << double_ird2.show_left() << " is pushed left onto 'double_ird2'" << endl;
			cout << "The size of the IRd is " << double_ird2.size() << endl;
			double_ird2.push_left(5.5);
			cout << double_ird2.show_left() << " is pushed left onto 'double_ird2'" << endl;
			cout << "The size of the IRd is " << double_ird2.size() << endl << endl;

			cout << "Now double_ird1 and double_ird2 are same IRds" << endl;

			if(double_ird1 == double_ird2)		// double_ird1 and double_ird2 contain same elements in same sequence. So they are same IRds
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}
			else
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}

			cout << "Now I will pop one element from double_ird2 to make them different" << endl;

			double_ird2.pop_right();
			if(double_ird1 == double_ird2)		// double_ird1 and double_ird2 are different in size
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}
			else
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}

			cout << "Now I will push one element onto double_IRd2 to make them same size, but different element" << endl;

			double_ird2.push_left(25);		
			if(double_ird1 == double_ird2)		// double_ird1 and double_ird2 are same in their sizes, but contain different element
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}
			else
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}


		}
		else if(choice == 5)		// ORd testing
		{
			ORd<int> int_ord1;
			ORd<double> double_ord1;
			ORd<double> double_ord2;
			ORd<string> string_ord1;

			cout << "***Testing for pushing onto the ORd from left and right, and size function***" << endl << endl; // Testing for pushing onto the ORd from left and right, and size function

			int_ord1.push_left(1);
			cout << int_ord1.show_left() << " is pushed left onto 'int_ord1'" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			cout << "The size of the ORd is " << int_ord1.size() << endl;
			int_ord1.push_left(3);
			cout << int_ord1.show_left() << " is pushed left onto 'int_ord1'" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			cout << "The size of the ORd is " << int_ord1.size() << endl;
			int_ord1.push_left(5);
			cout << int_ord1.show_left() << " is pushed left onto 'int_ord1'" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			cout << "The size of the ORd is " << int_ord1.size() << endl;
			int_ord1.push_left(7);
			cout << int_ord1.show_left() << " is pushed left onto 'int_ord1'" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			cout << "The size of the ORd is " << int_ord1.size() << endl;
			int_ord1.push_left(9);
			cout << int_ord1.show_left() << " is pushed left onto 'int_ord1'" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			cout << "The size of the ORd is " << int_ord1.size() << endl << endl;

			int_ord1.push_right(2);
			cout << "2 is pushed right onto 'int_ord1'" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			cout << "The size of the ORd is " << int_ord1.size() << endl;
			int_ord1.push_right(4);
			cout << "4 is pushed right onto 'int_ord1'" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			cout << "The size of the ORd is " << int_ord1.size() << endl;
			int_ord1.push_right(6);
			cout << "6 is pushed right onto 'int_ord1'" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			cout << "The size of the ORd is " << int_ord1.size() << endl;
			int_ord1.push_right(8);
			cout << "8 is pushed right onto 'int_ord1'" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			cout << "The size of the ORd is " << int_ord1.size() << endl;
			int_ord1.push_right(10);
			cout << "10 is pushed right onto 'int_ord1'" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			cout << "The size of the ORd is " << int_ord1.size() << endl << endl;

			cout << "***Testing for popping and access the left of the ORd***" << endl << endl; // Testing for popping and access the left of the ORd

			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			int_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			int_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			int_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			int_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			int_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "The size of the ORd is " << int_ord1.size() << endl << endl;

			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			int_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			int_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			int_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			int_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			int_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "The size of the ORd is " << int_ord1.size() << endl << endl;



			cout << "***Testing if the ORd works with string inputs***" << endl << endl; // Testing if the ORd works with string inputs

			string_ord1.push_left("A");
			cout << string_ord1.show_left() << " is pushed left onto 'string_ord1'" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			cout << "The size of the ORd is " << string_ord1.size() << endl;
			string_ord1.push_left("B");
			cout << string_ord1.show_left() << " is pushed left onto 'string_ord1'" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			cout << "The size of the ORd is " << string_ord1.size() << endl;
			string_ord1.push_left("C");
			cout << string_ord1.show_left() << " is pushed left onto 'string_ord1'" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			cout << "The size of the ORd is " << string_ord1.size() << endl;
			string_ord1.push_left("D");
			cout << string_ord1.show_left() << " is pushed left onto 'string_ord1'" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			cout << "The size of the ORd is " << string_ord1.size() << endl;
			string_ord1.push_left("E");
			cout << string_ord1.show_left() << " is pushed left onto 'string_ord1'" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			cout << "The size of the ORd is " << string_ord1.size() << endl << endl;

			string_ord1.push_right("V");
			cout << "V is pushed Right onto 'string_ord1'" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			cout << "The size of the ORd is " << string_ord1.size() << endl;
			string_ord1.push_right("W");
			cout << "W is pushed right onto 'string_ord1'" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			cout << "The size of the ORd is " << string_ord1.size() << endl;
			string_ord1.push_right("X");
			cout << "X is pushed right onto 'string_ord1'" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			cout << "The size of the ORd is " << string_ord1.size() << endl;
			string_ord1.push_right("Y");
			cout << "Y is pushed right onto 'string_ord1'" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			cout << "The size of the ORd is " << string_ord1.size() << endl;
			string_ord1.push_right("Z");
			cout << "Z is pushed right onto 'string_ord1'" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			cout << "The size of the ORd is " << string_ord1.size() << endl << endl;


			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			string_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			string_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			string_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			string_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			string_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "The size of the ORd is " << string_ord1.size() << endl << endl;

			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			string_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			string_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			string_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			string_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			string_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "The size of the ORd is " << string_ord1.size() << endl << endl;

			cout << "***equality test with double value***" << endl << endl; // equality test with double value

			double_ord1.push_left(1.1);
			cout << double_ord1.show_left() << " is pushed left onto 'double_ord1'" << endl;
			cout << "The size of the ORd is " << double_ord1.size() << endl;
			double_ord1.push_left(2.2);
			cout << double_ord1.show_left() << " is pushed left onto 'double_ord1'" << endl;
			cout << "The size of the ORd is " << double_ord1.size() << endl;
			double_ord1.push_left(3.3);
			cout << double_ord1.show_left() << " is pushed left onto 'double_ord1'" << endl;
			cout << "The size of the ORd is " << double_ord1.size() << endl;
			double_ord1.push_left(4.4);
			cout << double_ord1.show_left() << " is pushed left onto 'double_ord1'" << endl;
			cout << "The size of the ORd is " << double_ord1.size() << endl;
			double_ord1.push_left(5.5);
			cout << double_ord1.show_left() << " is pushed left onto 'double_ord1'" << endl;
			cout << "The size of the ORd is " << double_ord1.size() << endl << endl;

			double_ord2.push_right(5.5);
			cout << "5.5 is pushed right onto 'double_ord2'" << endl;
			cout << "The size of the ORd is " << double_ord2.size() << endl;
			double_ord2.push_right(4.4);
			cout << "4.4 is pushed right onto 'double_ord2'" << endl;
			cout << "The size of the ORd is " << double_ord2.size() << endl;
			double_ord2.push_right(3.3);
			cout << "3.3 is pushed right onto 'double_ord2'" << endl;
			cout << "The size of the ORd is " << double_ord2.size() << endl;
			double_ord2.push_right(2.2);
			cout << "2.2 is pushed right onto 'double_ord2'" << endl;
			cout << "The size of the ORd is " << double_ord2.size() << endl;
			double_ord2.push_right(1.1);
			cout << "1.1 is pushed right onto 'double_ord2'" << endl;
			cout << "The size of the ORd is " << double_ord2.size() << endl << endl;

			cout << "Now double_ord1 and double_ord2 are same ORds" << endl;

			if(double_ord1 == double_ord2)		// double_ord1 and double_ord2 contain same elements in same sequence. So they are same ORds
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}
			else
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}

			cout << "Now I will pop one element from double_ord2 to make them different" << endl;

			double_ord2.pop_left();
			if(double_ord1 == double_ord2)		// double_ord1 and double_ord2 are different in size
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}
			else
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}

			cout << "Now I will push one element onto double_ord2 to make them same size, but different element" << endl;

			double_ord2.push_right(25);		
			if(double_ord1 == double_ord2)		// double_ord1 and double_ord2 are same in their sizes, but contain different element
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}\
			else
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}


		}
		else if(choice == 6)		// Y_Vector testing
		{
			// I didn't have enough time for this,,, so I decided not to work on Y_Vector class

		}		
		else if(choice == 7)		// Test all of them
		{

			cout << "*****Testing for Stack*****" << endl << endl;		// Stack testing


			Stack<int> int_stack1;
			Stack<double> double_stack1;
			Stack<double> double_stack2;
			Stack<string> string_stack1;


			cout << "***Testing for pushing onto the stack and size function***" << endl << endl; // Testing for pushing onto the stack and size function

			int_stack1.push(1);
			cout << int_stack1.top() << " is pushed onto 'int_stack1'" << endl;
			cout << "The size of the stack is " << int_stack1.size() << endl;
			int_stack1.push(3);
			cout << int_stack1.top() << " is pushed onto 'int_stack1'" << endl;
			cout << "The size of the stack is " << int_stack1.size() << endl;
			int_stack1.push(5);
			cout << int_stack1.top() << " is pushed onto 'int_stack1'" << endl;
			cout << "The size of the stack is " << int_stack1.size() << endl;
			int_stack1.push(7);
			cout << int_stack1.top() << " is pushed onto 'int_stack1'" << endl;
			cout << "The size of the stack is " << int_stack1.size() << endl;
			int_stack1.push(9);
			cout << int_stack1.top() << " is pushed onto 'int_stack1'" << endl;
			cout << "The size of the stack is " << int_stack1.size() << endl << endl;

			cout << "***Testing for popping and access the top of the stack***" << endl << endl; // Testing for popping and access the top of the stack

			cout << "Top of the stack is " << int_stack1.top() << endl;
			int_stack1.pop();
			cout << "Top of the stack is popped" << endl;
			cout << "Top of the stack is " << int_stack1.top() << endl;
			int_stack1.pop();
			cout << "Top of the stack is popped" << endl;
			cout << "Top of the stack is " << int_stack1.top() << endl;
			int_stack1.pop();
			cout << "Top of the stack is popped" << endl;
			cout << "Top of the stack is " << int_stack1.top() << endl;
			int_stack1.pop();
			cout << "Top of the stack is popped" << endl;
			cout << "Top of the stack is " << int_stack1.top() << endl;
			int_stack1.pop();
			cout << "Top of the stack is popped" << endl;
			cout << "The size of the stack is " << int_stack1.size() << endl << endl;

			cout << "***Testing if the stack works with string inputs***" << endl << endl; // Testing if the stack works with string inputs

			string_stack1.push("A");
			cout << string_stack1.top() << " is pushed onto 'string_stack1'" << endl;
			cout << "The size of the stack is " << string_stack1.size() << endl;
			string_stack1.push("B");
			cout << string_stack1.top() << " is pushed onto 'string_stack1'" << endl;
			cout << "The size of the stack is " << string_stack1.size() << endl;
			string_stack1.push("C");
			cout << string_stack1.top() << " is pushed onto 'string_stack1'" << endl;
			cout << "The size of the stack is " << string_stack1.size() << endl;
			string_stack1.push("D");
			cout << string_stack1.top() << " is pushed onto 'string_stack1'" << endl;
			cout << "The size of the stack is " << string_stack1.size() << endl;
			string_stack1.push("E");
			cout << string_stack1.top() << " is pushed onto 'string_stack1'" << endl;
			cout << "The size of the stack is " << string_stack1.size() << endl << endl;

			cout << "Top of the stack is " << string_stack1.top() << endl;
			string_stack1.pop();
			cout << "Top of the stack is popped" << endl;
			cout << "Top of the stack is " << string_stack1.top() << endl;
			string_stack1.pop();
			cout << "Top of the stack is popped" << endl;
			cout << "Top of the stack is " << string_stack1.top() << endl;
			string_stack1.pop();
			cout << "Top of the stack is popped" << endl;
			cout << "Top of the stack is " << string_stack1.top() << endl;
			string_stack1.pop();
			cout << "Top of the stack is popped" << endl;
			cout << "Top of the stack is " << string_stack1.top() << endl;
			string_stack1.pop();
			cout << "Top of the stack is popped" << endl;
			cout << "The size of the stack is " << string_stack1.size() << endl << endl;

			cout << "***equality test with double value***" << endl << endl; // equality test with double value

			double_stack1.push(1.1);
			cout << double_stack1.top() << " is pushed onto 'double_stack1'" << endl;
			cout << "The size of the stack is " << double_stack1.size() << endl;
			double_stack1.push(2.2);
			cout << double_stack1.top() << " is pushed onto 'double_stack1'" << endl;
			cout << "The size of the stack is " << double_stack1.size() << endl;
			double_stack1.push(3.3);
			cout << double_stack1.top() << " is pushed onto 'double_stack1'" << endl;
			cout << "The size of the stack is " << double_stack1.size() << endl;
			double_stack1.push(4.4);
			cout << double_stack1.top() << " is pushed onto 'double_stack1'" << endl;
			cout << "The size of the stack is " << double_stack1.size() << endl;
			double_stack1.push(5.5);
			cout << double_stack1.top() << " is pushed onto 'double_stack1'" << endl;
			cout << "The size of the stack is " << double_stack1.size() << endl << endl;

			double_stack2.push(1.1);
			cout << double_stack2.top() << " is pushed onto 'double_stack2'" << endl;
			cout << "The size of the stack is " << double_stack1.size() << endl;
			double_stack2.push(2.2);
			cout << double_stack2.top() << " is pushed onto 'double_stack2'" << endl;
			cout << "The size of the stack is " << double_stack1.size() << endl;
			double_stack2.push(3.3);
			cout << double_stack2.top() << " is pushed onto 'double_stack2'" << endl;
			cout << "The size of the stack is " << double_stack2.size() << endl;
			double_stack2.push(4.4);
			cout << double_stack2.top() << " is pushed onto 'double_stack2'" << endl;
			cout << "The size of the stack is " << double_stack2.size() << endl;
			double_stack2.push(5.5);
			cout << double_stack2.top() << " is pushed onto 'double_stack2'" << endl;
			cout << "The size of the stack is " << double_stack2.size() << endl << endl;

			cout << "Now double_stack1 and double_stack2 are same stacks" << endl;

			if(double_stack1 == double_stack2)		// double_stack1 and double_stack2 contain same elements in same sequence. So they are same stacks
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}
			else
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}

			cout << "Now I will pop one element from double_stack2 to make them different" << endl;

			double_stack2.pop();
			if(double_stack1 == double_stack2)		// double_stack1 and double_stack2 are different in size
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}
			else
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}

			cout << "Now I will push one element onto double_stack2 to make them same size, but different element" << endl;

			double_stack2.push(25);		
			if(double_stack1 == double_stack2)		// double_stack1 and double_stack2 are same in their sizes, but contain different element
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}
			else
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}


			cout << "*****Testing for Queue*****" << endl << endl;		// Queue testing

			Queue<int> int_queue1;
			Queue<double> double_queue1;
			Queue<double> double_queue2;
			Queue<string> string_queue1;


			cout << "***Testing for pushing onto the queue and size function***" << endl << endl; // Testing for pushing onto the queue and size function

			int_queue1.push(1);
			cout << "1 is pushed onto 'int_queue1'" << endl;
			cout << "Front of the queue is " << int_queue1.front() << endl;
			cout << "The size of the queue is " << int_queue1.size() << endl;
			int_queue1.push(3);
			cout << "3 is pushed onto 'int_queue1'" << endl;
			cout << "Front of the queue is " << int_queue1.front() << endl;
			cout << "The size of the queue is " << int_queue1.size() << endl;
			int_queue1.push(5);
			cout << "5 is pushed onto 'int_queue1'" << endl;
			cout << "Front of the queue is " << int_queue1.front() << endl;
			cout << "The size of the queue is " << int_queue1.size() << endl;
			int_queue1.push(7);
			cout << "7 is pushed onto 'int_queue1'" << endl;
			cout << "Front of the queue is " << int_queue1.front() << endl;
			cout << "The size of the queue is " << int_queue1.size() << endl;
			int_queue1.push(9);
			cout << int_queue1.front() << " is pushed onto 'int_queue1'" << endl;
			cout << "9 is pushed onto 'int_queue1'" << endl;
			cout << "The size of the queue is " << int_queue1.size() << endl << endl;

			cout << "***Testing for popping and access the front of the queue***" << endl << endl; // Testing for popping and access the front of the queue

			cout << "Front of the queue is " << int_queue1.front() << endl;
			int_queue1.pop();
			cout << "Front of the queue is popped" << endl;
			cout << "Front of the queue is " << int_queue1.front() << endl;
			int_queue1.pop();
			cout << "Front of the queue is popped" << endl;
			cout << "Front of the queue is " << int_queue1.front() << endl;
			int_queue1.pop();
			cout << "Front of the queue is popped" << endl;
			cout << "Front of the queue is " << int_queue1.front() << endl;
			int_queue1.pop();
			cout << "Front of the queue is popped" << endl;
			cout << "Front of the queue is " << int_queue1.front() << endl;
			int_queue1.pop();
			cout << "Front of the queue is popped" << endl;
			cout << "The size of the queue is " << int_queue1.size() << endl << endl;

			cout << "***Testing if the queue works with string inputs***" << endl << endl; // Testing if the queue works with string inputs

			string_queue1.push("A");
			cout << "A is pushed onto 'string_queue1'" << endl;
			cout << "Front of the queue is " << string_queue1.front() << endl;
			cout << "The size of the queue is " << string_queue1.size() << endl;
			string_queue1.push("B");
			cout << "B is pushed onto 'string_queue1'" << endl;
			cout << "Front of the queue is " << string_queue1.front() << endl;
			cout << "The size of the queue is " << string_queue1.size() << endl;
			string_queue1.push("C");
			cout << "C is pushed onto 'string_queue1'" << endl;
			cout << "Front of the queue is " << string_queue1.front() << endl;
			cout << "The size of the queue is " << string_queue1.size() << endl;
			string_queue1.push("D");
			cout << "D is pushed onto 'string_queue1'" << endl;
			cout << "Front of the queue is " << string_queue1.front() << endl;
			cout << "The size of the queue is " << string_queue1.size() << endl;
			string_queue1.push("E");
			cout << "E is pushed onto 'string_queue1'" << endl;
			cout << "Front of the queue is " << string_queue1.front() << endl;
			cout << "The size of the queue is " << string_queue1.size() << endl << endl;

			cout << "Front of the queue is " << string_queue1.front() << endl;
			string_queue1.pop();
			cout << "Front of the queue is popped" << endl;
			cout << "Front of the queue is " << string_queue1.front() << endl;
			string_queue1.pop();
			cout << "Front of the queue is popped" << endl;
			cout << "Front of the queue is " << string_queue1.front() << endl;
			string_queue1.pop();
			cout << "Front of the queue is popped" << endl;
			cout << "Front of the queue is " << string_queue1.front() << endl;
			string_queue1.pop();
			cout << "Front of the queue is popped" << endl;
			cout << "Front of the queue is " << string_queue1.front() << endl;
			string_queue1.pop();
			cout << "Front of the queue is popped" << endl;
			cout << "The size of the queue is " << string_queue1.size() << endl << endl;

			cout << "***equality test with double value***" << endl << endl; // equality test with double value

			double_queue1.push(1.1);
			cout << "1.1 is pushed onto 'double_queue1'" << endl;
			cout << "The size of the queue is " << double_queue1.size() << endl;
			double_queue1.push(2.2);
			cout << "2.2 is pushed onto 'double_queue1'" << endl;
			cout << "The size of the queue is " << double_queue1.size() << endl;
			double_queue1.push(3.3);
			cout << "3.3 is pushed onto 'double_queue1'" << endl;
			cout << "The size of the queue is " << double_queue1.size() << endl;
			double_queue1.push(4.4);
			cout << "4.4 is pushed onto 'double_queue1'" << endl;
			cout << "The size of the queue is " << double_queue1.size() << endl;
			double_queue1.push(5.5);
			cout << "5.5 is pushed onto 'double_queue1'" << endl;
			cout << "The size of the queue is " << double_queue1.size() << endl << endl;

			double_queue2.push(1.1);
			cout << "1.1 is pushed onto 'double_queue2'" << endl;
			cout << "The size of the queue is " << double_queue2.size() << endl;
			double_queue2.push(2.2);
			cout << "2.2 is pushed onto 'double_queue2'" << endl;
			cout << "The size of the queue is " << double_queue2.size() << endl;
			double_queue2.push(3.3);
			cout << "3.3 is pushed onto 'double_queue2'" << endl;
			cout << "The size of the queue is " << double_queue2.size() << endl;
			double_queue2.push(4.4);
			cout << "4.4 is pushed onto 'double_queue2'" << endl;
			cout << "The size of the queue is " << double_queue2.size() << endl;
			double_queue2.push(5.5);
			cout << "5.5 is pushed onto 'double_queue2'" << endl;
			cout << "The size of the queue is " << double_queue2.size() << endl << endl;

			cout << "Now double_queue1 and double_queue2 are same queues" << endl;

			if(double_queue1 == double_queue2)		// double_queue1 and double_queue2 contain same elements in same sequence. So they are same queues
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}
			else
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}

			cout << "Now I will pop one element from double_queue2 to make them different" << endl;

			double_queue2.pop();
			if(double_queue1 == double_queue2)		// double_queue1 and double_queue2 are different in size
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}
			else
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}

			cout << "Now I will push one element onto double_queue2 to make them same size, but different element" << endl;

			double_queue2.push(25);		
			if(double_queue1 == double_queue2)		// double_queue1 and double_queue2 are same in their sizes, but contain different element
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}
			else
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}


			cout << "*****Testing for Deque*****" << endl << endl;		// Deque testing


			Deque<int> int_deque1;
			Deque<double> double_deque1;
			Deque<double> double_deque2;
			Deque<string> string_deque1;

			cout << "***Testing for pushing onto the deque from left and right, and size function***" << endl << endl; // Testing for pushing onto the deque from left and right, and size function

			int_deque1.push_left(1);
			cout << int_deque1.show_left() << " is pushed left onto 'int_deque1'" << endl;
			cout << "Left of the deque is " << int_deque1.show_left() << endl;
			cout << "The size of the deque is " << int_deque1.size() << endl;
			int_deque1.push_left(3);
			cout << int_deque1.show_left() << " is pushed left onto 'int_deque1'" << endl;
			cout << "Left of the deque is " << int_deque1.show_left() << endl;
			cout << "The size of the deque is " << int_deque1.size() << endl;
			int_deque1.push_left(5);
			cout << int_deque1.show_left() << " is pushed left onto 'int_deque1'" << endl;
			cout << "Left of the deque is " << int_deque1.show_left() << endl;
			cout << "The size of the deque is " << int_deque1.size() << endl;
			int_deque1.push_left(7);
			cout << int_deque1.show_left() << " is pushed left onto 'int_deque1'" << endl;
			cout << "Left of the deque is " << int_deque1.show_left() << endl;
			cout << "The size of the deque is " << int_deque1.size() << endl;
			int_deque1.push_left(9);
			cout << int_deque1.show_left() << " is pushed left onto 'int_deque1'" << endl;
			cout << "Left of the deque is " << int_deque1.show_left() << endl;
			cout << "The size of the deque is " << int_deque1.size() << endl << endl;

			int_deque1.push_right(2);
			cout << int_deque1.show_right() << " is pushed right onto 'int_deque1'" << endl;
			cout << "Right of the deque is " << int_deque1.show_right() << endl;
			cout << "The size of the deque is " << int_deque1.size() << endl;
			int_deque1.push_right(4);
			cout << int_deque1.show_right() << " is pushed right onto 'int_deque1'" << endl;
			cout << "Right of the deque is " << int_deque1.show_right() << endl;
			cout << "The size of the deque is " << int_deque1.size() << endl;
			int_deque1.push_right(6);
			cout << int_deque1.show_right() << " is pushed right onto 'int_deque1'" << endl;
			cout << "Right of the deque is " << int_deque1.show_right() << endl;
			cout << "The size of the deque is " << int_deque1.size() << endl;
			int_deque1.push_right(8);
			cout << int_deque1.show_right() << " is pushed right onto 'int_deque1'" << endl;
			cout << "Right of the deque is " << int_deque1.show_right() << endl;
			cout << "The size of the deque is " << int_deque1.size() << endl;
			int_deque1.push_right(10);
			cout << int_deque1.show_right() << " is pushed right onto 'int_deque1'" << endl;
			cout << "Right of the deque is " << int_deque1.show_right() << endl;
			cout << "The size of the deque is " << int_deque1.size() << endl << endl;
						
			cout << "***Testing for popping and access the left and right of the deque***" << endl << endl; // Testing for popping and access the left and right of the deque

			cout << "Left of the deque is " << int_deque1.show_left() << endl;
			int_deque1.pop_left();
			cout << "Left of the deque is popped" << endl;
			cout << "Left of the deque is " << int_deque1.show_left() << endl;
			int_deque1.pop_left();
			cout << "Left of the deque is popped" << endl;
			cout << "Left of the deque is " << int_deque1.show_left() << endl;
			int_deque1.pop_left();
			cout << "Left of the deque is popped" << endl;
			cout << "Left of the deque is " << int_deque1.show_left() << endl;
			int_deque1.pop_left();
			cout << "Left of the deque is popped" << endl;
			cout << "Left of the deque is " << int_deque1.show_left() << endl;
			int_deque1.pop_left();
			cout << "Left of the deque is popped" << endl;
			cout << "The size of the deque is " << int_deque1.size() << endl << endl;

			cout << "Right of the deque is " << int_deque1.show_right() << endl;
			int_deque1.pop_right();
			cout << "Right of the deque is popped" << endl;
			cout << "Right of the deque is " << int_deque1.show_right() << endl;
			int_deque1.pop_right();
			cout << "Right of the deque is popped" << endl;
			cout << "Right of the deque is " << int_deque1.show_right() << endl;
			int_deque1.pop_right();
			cout << "Right of the deque is popped" << endl;
			cout << "Right of the deque is " << int_deque1.show_right() << endl;
			int_deque1.pop_right();
			cout << "Right of the deque is popped" << endl;
			cout << "Right of the deque is " << int_deque1.show_right() << endl;
			int_deque1.pop_right();
			cout << "Right of the deque is popped" << endl;
			cout << "The size of the deque is " << int_deque1.size() << endl << endl;

			cout << "***Testing if the deque works with string inputs***" << endl << endl; // Testing if the deque works with string inputs

			string_deque1.push_left("A");
			cout << string_deque1.show_left() << " is pushed left onto 'string_deque1'" << endl;
			cout << "Left of the deque is " << string_deque1.show_left() << endl;
			cout << "The size of the deque is " << string_deque1.size() << endl;
			string_deque1.push_left("B");
			cout << string_deque1.show_left() << " is pushed left onto 'string_deque1'" << endl;
			cout << "Left of the deque is " << string_deque1.show_left() << endl;
			cout << "The size of the deque is " << string_deque1.size() << endl;
			string_deque1.push_left("C");
			cout << string_deque1.show_left() << " is pushed left onto 'string_deque1'" << endl;
			cout << "Left of the deque is " << string_deque1.show_left() << endl;
			cout << "The size of the deque is " << string_deque1.size() << endl;
			string_deque1.push_left("D");
			cout << string_deque1.show_left() << " is pushed left onto 'string_deque1'" << endl;
			cout << "Left of the deque is " << string_deque1.show_left() << endl;
			cout << "The size of the deque is " << string_deque1.size() << endl;
			string_deque1.push_left("E");
			cout << string_deque1.show_left() << " is pushed left onto 'string_deque1'" << endl;
			cout << "Left of the deque is " << string_deque1.show_left() << endl;
			cout << "The size of the deque is " << string_deque1.size() << endl << endl;

			string_deque1.push_right("V");
			cout << string_deque1.show_right() << " is pushed right onto 'string_deque1'" << endl;
			cout << "Right of the deque is " << string_deque1.show_right() << endl;
			cout << "The size of the deque is " << string_deque1.size() << endl;
			string_deque1.push_right("W");
			cout << string_deque1.show_right() << " is pushed right onto 'string_deque1'" << endl;
			cout << "Right of the deque is " << string_deque1.show_right() << endl;
			cout << "The size of the deque is " << string_deque1.size() << endl;
			string_deque1.push_right("X");
			cout << string_deque1.show_right() << " is pushed right onto 'string_deque1'" << endl;
			cout << "Right of the deque is " << string_deque1.show_right() << endl;
			cout << "The size of the deque is " << string_deque1.size() << endl;
			string_deque1.push_right("Y");
			cout << string_deque1.show_right() << " is pushed right onto 'string_deque1'" << endl;
			cout << "Right of the deque is " << string_deque1.show_right() << endl;
			cout << "The size of the deque is " << string_deque1.size() << endl;
			string_deque1.push_right("Z");
			cout << string_deque1.show_right() << " is pushed right onto 'string_deque1'" << endl;
			cout << "Right of the deque is " << string_deque1.show_right() << endl;
			cout << "The size of the deque is " << string_deque1.size() << endl << endl;


			cout << "Left of the deque is " << string_deque1.show_left() << endl;
			string_deque1.pop_left();
			cout << "Left of the deque is popped" << endl;
			cout << "Left of the deque is " << string_deque1.show_left() << endl;
			string_deque1.pop_left();
			cout << "Left of the deque is popped" << endl;
			cout << "Left of the deque is " << string_deque1.show_left() << endl;
			string_deque1.pop_left();
			cout << "Left of the deque is popped" << endl;
			cout << "Left of the deque is " << string_deque1.show_left() << endl;
			string_deque1.pop_left();
			cout << "Left of the deque is popped" << endl;
			cout << "Left of the deque is " << string_deque1.show_left() << endl;
			string_deque1.pop_left();
			cout << "Left of the deque is popped" << endl;
			cout << "The size of the deque is " << string_deque1.size() << endl << endl;

			cout << "Right of the deque is " << string_deque1.show_right() << endl;
			string_deque1.pop_right();
			cout << "Right of the deque is popped" << endl;
			cout << "Right of the deque is " << string_deque1.show_right() << endl;
			string_deque1.pop_right();
			cout << "Right of the deque is popped" << endl;
			cout << "Right of the deque is " << string_deque1.show_right() << endl;
			string_deque1.pop_right();
			cout << "Right of the deque is popped" << endl;
			cout << "Right of the deque is " << string_deque1.show_right() << endl;
			string_deque1.pop_right();
			cout << "Right of the deque is popped" << endl;
			cout << "Right of the deque is " << string_deque1.show_right() << endl;
			string_deque1.pop_right();
			cout << "Right of the deque is popped" << endl;
			cout << "The size of the deque is " << string_deque1.size() << endl << endl;

			cout << "***equality test with double value***" << endl << endl; // equality test with double value

			double_deque1.push_left(1.1);
			cout << double_deque1.show_left() << " is pushed left onto 'double_deque1'" << endl;
			cout << "The size of the deque is " << double_deque1.size() << endl;
			double_deque1.push_left(2.2);
			cout << double_deque1.show_left() << " is pushed left onto 'double_deque1'" << endl;
			cout << "The size of the deque is " << double_deque1.size() << endl;
			double_deque1.push_left(3.3);
			cout << double_deque1.show_left() << " is pushed left onto 'double_deque1'" << endl;
			cout << "The size of the deque is " << double_deque1.size() << endl;
			double_deque1.push_left(4.4);
			cout << double_deque1.show_left() << " is pushed left onto 'double_deque1'" << endl;
			cout << "The size of the deque is " << double_deque1.size() << endl;
			double_deque1.push_left(5.5);
			cout << double_deque1.show_left() << " is pushed left onto 'double_deque1'" << endl;
			cout << "The size of the deque is " << double_deque1.size() << endl << endl;

			double_deque2.push_right(5.5);
			cout << double_deque2.show_right() << " is pushed right onto 'double_deque2'" << endl;
			cout << "The size of the deque is " << double_deque2.size() << endl;
			double_deque2.push_right(4.4);
			cout << double_deque2.show_right() << " is pushed right onto 'double_deque2'" << endl;
			cout << "The size of the deque is " << double_deque2.size() << endl;
			double_deque2.push_right(3.3);
			cout << double_deque2.show_right() << " is pushed right onto 'double_deque2'" << endl;
			cout << "The size of the deque is " << double_deque2.size() << endl;
			double_deque2.push_right(2.2);
			cout << double_deque2.show_right() << " is pushed right onto 'double_deque2'" << endl;
			cout << "The size of the deque is " << double_deque2.size() << endl;
			double_deque2.push_right(1.1);
			cout << double_deque2.show_right() << " is pushed right onto 'double_deque2'" << endl;
			cout << "The size of the deque is " << double_deque2.size() << endl << endl;

			cout << "Now double_deque1 and double_deque2 are same deques" << endl;

			if(double_deque1 == double_deque2)		// double_deque1 and double_deque2 contain same elements in same sequence. So they are same deques
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}
			else
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}

			cout << "Now I will pop one element from double_deque2 to make them different" << endl;

			double_deque2.pop_right();
			if(double_deque1 == double_deque2)		// double_deque1 and double_deque2 are different in size
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}
			else
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}

			cout << "Now I will push one element onto double_deque2 to make them same size, but different element" << endl;

			double_deque2.push_right(25);		
			if(double_deque1 == double_deque2)		// double_deque1 and double_deque2 are same in their sizes, but contain different element
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}
			else
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}
			
			
			cout << "*****Testing for IRd*****" << endl << endl;		// IRd testing


			IRd<int> int_ird1;
			IRd<double> double_ird1;
			IRd<double> double_ird2;
			IRd<string> string_ird1;

			cout << "***Testing for pushing onto the IRd from left, and size function***" << endl << endl; // Testing for pushing onto the IRd from left, and size function

			int_ird1.push_left(1);
			cout << int_ird1.show_left() << " is pushed left onto 'int_ird1'" << endl;
			cout << "Left of the IRd is " << int_ird1.show_left() << endl;
			cout << "The size of the IRd is " << int_ird1.size() << endl;
			int_ird1.push_left(3);
			cout << int_ird1.show_left() << " is pushed left onto 'int_ird1'" << endl;
			cout << "Left of the IRd is " << int_ird1.show_left() << endl;
			cout << "The size of the IRd is " << int_ird1.size() << endl;
			int_ird1.push_left(5);
			cout << int_ird1.show_left() << " is pushed left onto 'int_ird1'" << endl;
			cout << "Left of the IRd is " << int_ird1.show_left() << endl;
			cout << "The size of the IRd is " << int_ird1.size() << endl;
			int_ird1.push_left(7);
			cout << int_ird1.show_left() << " is pushed left onto 'int_ird1'" << endl;
			cout << "Left of the IRd is " << int_ird1.show_left() << endl;
			cout << "The size of the IRd is " << int_ird1.size() << endl;
			int_ird1.push_left(9);
			cout << int_ird1.show_left() << " is pushed left onto 'int_ird1'" << endl;
			cout << "Left of the IRd is " << int_ird1.show_left() << endl;
			cout << "The size of the IRd is " << int_ird1.size() << endl << endl;

			int_ird1.push_left(2);
			cout << int_ird1.show_left() << " is pushed left onto 'int_ird1'" << endl;
			cout << "Right of the IRd is " << int_ird1.show_right() << endl;
			cout << "The size of the IRd is " << int_ird1.size() << endl;
			int_ird1.push_left(4);
			cout << int_ird1.show_left() << " is pushed left onto 'int_ird1'" << endl;
			cout << "Right of the IRd is " << int_ird1.show_right() << endl;
			cout << "The size of the IRd is " << int_ird1.size() << endl;
			int_ird1.push_left(6);
			cout << int_ird1.show_left() << " is pushed left onto 'int_ird1'" << endl;
			cout << "Right of the IRd is " << int_ird1.show_right() << endl;
			cout << "The size of the IRd is " << int_ird1.size() << endl;
			int_ird1.push_left(8);
			cout << int_ird1.show_left() << " is pushed left onto 'int_ird1'" << endl;
			cout << "Right of the IRd is " << int_ird1.show_right() << endl;
			cout << "The size of the IRd is " << int_ird1.size() << endl;
			int_ird1.push_left(10);
			cout << int_ird1.show_left() << " is pushed left onto 'int_ird1'" << endl;
			cout << "Right of the IRd is " << int_ird1.show_right() << endl;
			cout << "The size of the IRd is " << int_ird1.size() << endl << endl;

			cout << "***Testing for popping and access the left and right of the IRd***" << endl << endl; // Testing for popping and access the left and right of the IRd

			cout << "Left of the IRd is " << int_ird1.show_left() << endl;
			int_ird1.pop_left();
			cout << "Left of the IRd is popped" << endl;
			cout << "Left of the IRd is " << int_ird1.show_left() << endl;
			int_ird1.pop_left();
			cout << "Left of the IRd is popped" << endl;
			cout << "Left of the IRd is " << int_ird1.show_left() << endl;
			int_ird1.pop_left();
			cout << "Left of the IRd is popped" << endl;
			cout << "Left of the IRd is " << int_ird1.show_left() << endl;
			int_ird1.pop_left();
			cout << "Left of the IRd is popped" << endl;
			cout << "Left of the IRd is " << int_ird1.show_left() << endl;
			int_ird1.pop_left();
			cout << "Left of the IRd is popped" << endl;
			cout << "The size of the IRd is " << int_ird1.size() << endl << endl;

			cout << "Right of the IRd is " << int_ird1.show_right() << endl;
			int_ird1.pop_right();
			cout << "Right of the IRd is popped" << endl;
			cout << "Right of the IRd is " << int_ird1.show_right() << endl;
			int_ird1.pop_right();
			cout << "Right of the IRd is popped" << endl;
			cout << "Right of the IRd is " << int_ird1.show_right() << endl;
			int_ird1.pop_right();
			cout << "Right of the IRd is popped" << endl;
			cout << "Right of the IRd is " << int_ird1.show_right() << endl;
			int_ird1.pop_right();
			cout << "Right of the IRd is popped" << endl;
			cout << "Right of the IRd is " << int_ird1.show_right() << endl;
			int_ird1.pop_right();
			cout << "Right of the IRd is popped" << endl;
			cout << "The size of the IRd is " << int_ird1.size() << endl << endl;

			cout << "***Testing if the IRd works with string inputs***" << endl << endl; // Testing if the IRd works with string inputs

			string_ird1.push_left("A");
			cout << string_ird1.show_left() << " is pushed left onto 'string_ird1'" << endl;
			cout << "Left of the IRd is " << string_ird1.show_left() << endl;
			cout << "The size of the IRd is " << string_ird1.size() << endl;
			string_ird1.push_left("B");
			cout << string_ird1.show_left() << " is pushed left onto 'string_ird1'" << endl;
			cout << "Left of the IRd is " << string_ird1.show_left() << endl;
			cout << "The size of the IRd is " << string_ird1.size() << endl;
			string_ird1.push_left("C");
			cout << string_ird1.show_left() << " is pushed left onto 'string_ird1'" << endl;
			cout << "Left of the IRd is " << string_ird1.show_left() << endl;
			cout << "The size of the IRd is " << string_ird1.size() << endl;
			string_ird1.push_left("D");
			cout << string_ird1.show_left() << " is pushed left onto 'string_ird1'" << endl;
			cout << "Left of the IRd is " << string_ird1.show_left() << endl;
			cout << "The size of the IRd is " << string_ird1.size() << endl;
			string_ird1.push_left("E");
			cout << string_ird1.show_left() << " is pushed left onto 'string_ird1'" << endl;
			cout << "Left of the IRd is " << string_ird1.show_left() << endl;
			cout << "The size of the IRd is " << string_ird1.size() << endl << endl;

			string_ird1.push_left("V");
			cout << string_ird1.show_left() << " is pushed left onto 'string_ird1'" << endl;
			cout << "Right of the IRd is " << string_ird1.show_right() << endl;
			cout << "The size of the IRd is " << string_ird1.size() << endl;
			string_ird1.push_left("W");
			cout << string_ird1.show_left() << " is pushed left onto 'string_ird1'" << endl;
			cout << "Right of the IRd is " << string_ird1.show_right() << endl;
			cout << "The size of the IRd is " << string_ird1.size() << endl;
			string_ird1.push_left("X");
			cout << string_ird1.show_left() << " is pushed left onto 'string_ird1'" << endl;
			cout << "Right of the IRd is " << string_ird1.show_right() << endl;
			cout << "The size of the IRd is " << string_ird1.size() << endl;
			string_ird1.push_left("Y");
			cout << string_ird1.show_left() << " is pushed left onto 'string_ird1'" << endl;
			cout << "Right of the IRd is " << string_ird1.show_right() << endl;
			cout << "The size of the IRd is " << string_ird1.size() << endl;
			string_ird1.push_left("Z");
			cout << string_ird1.show_left() << " is pushed left onto 'string_ird1'" << endl;
			cout << "Right of the IRd is " << string_ird1.show_right() << endl;
			cout << "The size of the IRd is " << string_ird1.size() << endl << endl;


			cout << "Left of the IRd is " << string_ird1.show_left() << endl;
			string_ird1.pop_left();
			cout << "Left of the IRd is popped" << endl;
			cout << "Left of the IRd is " << string_ird1.show_left() << endl;
			string_ird1.pop_left();
			cout << "Left of the IRd is popped" << endl;
			cout << "Left of the IRd is " << string_ird1.show_left() << endl;
			string_ird1.pop_left();
			cout << "Left of the IRd is popped" << endl;
			cout << "Left of the IRd is " << string_ird1.show_left() << endl;
			string_ird1.pop_left();
			cout << "Left of the IRd is popped" << endl;
			cout << "Left of the IRd is " << string_ird1.show_left() << endl;
			string_ird1.pop_left();
			cout << "Left of the IRd is popped" << endl;
			cout << "The size of the IRd is " << string_ird1.size() << endl << endl;

			cout << "Right of the IRd is " << string_ird1.show_right() << endl;
			string_ird1.pop_right();
			cout << "Right of the IRd is popped" << endl;
			cout << "Right of the IRd is " << string_ird1.show_right() << endl;
			string_ird1.pop_right();
			cout << "Right of the IRd is popped" << endl;
			cout << "Right of the IRd is " << string_ird1.show_right() << endl;
			string_ird1.pop_right();
			cout << "Right of the IRd is popped" << endl;
			cout << "Right of the IRd is " << string_ird1.show_right() << endl;
			string_ird1.pop_right();
			cout << "Right of the IRd is popped" << endl;
			cout << "Right of the IRd is " << string_ird1.show_right() << endl;
			string_ird1.pop_right();
			cout << "Right of the IRd is popped" << endl;
			cout << "The size of the IRd is " << string_ird1.size() << endl << endl;

			cout << "***equality test with double value***" << endl << endl; // equality test with double value

			double_ird1.push_left(1.1);
			cout << double_ird1.show_left() << " is pushed left onto 'double_ird1'" << endl;
			cout << "The size of the IRd is " << double_ird1.size() << endl;
			double_ird1.push_left(2.2);
			cout << double_ird1.show_left() << " is pushed left onto 'double_ird1'" << endl;
			cout << "The size of the IRd is " << double_ird1.size() << endl;
			double_ird1.push_left(3.3);
			cout << double_ird1.show_left() << " is pushed left onto 'double_ird1'" << endl;
			cout << "The size of the IRd is " << double_ird1.size() << endl;
			double_ird1.push_left(4.4);
			cout << double_ird1.show_left() << " is pushed left onto 'double_ird1'" << endl;
			cout << "The size of the IRd is " << double_ird1.size() << endl;
			double_ird1.push_left(5.5);
			cout << double_ird1.show_left() << " is pushed left onto 'double_ird1'" << endl;
			cout << "The size of the IRd is " << double_ird1.size() << endl << endl;

			double_ird2.push_left(1.1);
			cout << double_ird2.show_left() << " is pushed left onto 'double_ird2'" << endl;
			cout << "The size of the IRd is " << double_ird2.size() << endl;
			double_ird2.push_left(2.2);
			cout << double_ird2.show_left() << " is pushed left onto 'double_ird2'" << endl;
			cout << "The size of the IRd is " << double_ird2.size() << endl;
			double_ird2.push_left(3.3);
			cout << double_ird2.show_left() << " is pushed left onto 'double_ird2'" << endl;
			cout << "The size of the IRd is " << double_ird2.size() << endl;
			double_ird2.push_left(4.4);
			cout << double_ird2.show_left() << " is pushed left onto 'double_ird2'" << endl;
			cout << "The size of the IRd is " << double_ird2.size() << endl;
			double_ird2.push_left(5.5);
			cout << double_ird2.show_left() << " is pushed left onto 'double_ird2'" << endl;
			cout << "The size of the IRd is " << double_ird2.size() << endl << endl;

			cout << "Now double_ird1 and double_ird2 are same IRds" << endl;

			if(double_ird1 == double_ird2)		// double_ird1 and double_ird2 contain same elements in same sequence. So they are same IRds
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}
			else
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}

			cout << "Now I will pop one element from double_ird2 to make them different" << endl;

			double_ird2.pop_right();
			if(double_ird1 == double_ird2)		// double_ird1 and double_ird2 are different in size
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}
			else
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}

			cout << "Now I will push one element onto double_ird2 to make them same size, but different element" << endl;

			double_ird2.push_left(25);		
			if(double_ird1 == double_ird2)		// double_ird1 and double_ird2 are same in their sizes, but contain different element
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}
			else
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}


			cout << "*****Testing for ORd*****" << endl << endl;		// ORd testing


			ORd<int> int_ord1;
			ORd<double> double_ord1;
			ORd<double> double_ord2;
			ORd<string> string_ord1;

			cout << "***Testing for pushing onto the ORd from left and right, and size function***" << endl << endl; // Testing for pushing onto the ORd from left and right, and size function

			int_ord1.push_left(1);
			cout << int_ord1.show_left() << " is pushed left onto 'int_ord1'" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			cout << "The size of the ORd is " << int_ord1.size() << endl;
			int_ord1.push_left(3);
			cout << int_ord1.show_left() << " is pushed left onto 'int_ord1'" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			cout << "The size of the ORd is " << int_ord1.size() << endl;
			int_ord1.push_left(5);
			cout << int_ord1.show_left() << " is pushed left onto 'int_ord1'" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			cout << "The size of the ORd is " << int_ord1.size() << endl;
			int_ord1.push_left(7);
			cout << int_ord1.show_left() << " is pushed left onto 'int_ord1'" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			cout << "The size of the ORd is " << int_ord1.size() << endl;
			int_ord1.push_left(9);
			cout << int_ord1.show_left() << " is pushed left onto 'int_ord1'" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			cout << "The size of the ORd is " << int_ord1.size() << endl << endl;

			int_ord1.push_right(2);
			cout << "2 is pushed right onto 'int_ord1'" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			cout << "The size of the ORd is " << int_ord1.size() << endl;
			int_ord1.push_right(4);
			cout << "4 is pushed right onto 'int_ord1'" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			cout << "The size of the ORd is " << int_ord1.size() << endl;
			int_ord1.push_right(6);
			cout << "6 is pushed right onto 'int_ord1'" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			cout << "The size of the ORd is " << int_ord1.size() << endl;
			int_ord1.push_right(8);
			cout << "8 is pushed right onto 'int_ord1'" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			cout << "The size of the ORd is " << int_ord1.size() << endl;
			int_ord1.push_right(10);
			cout << "10 is pushed right onto 'int_ord1'" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			cout << "The size of the ORd is " << int_ord1.size() << endl << endl;

			cout << "***Testing for popping and access the left of the ORd***" << endl << endl; // Testing for popping and access the left of the ORd

			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			int_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			int_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			int_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			int_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			int_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "The size of the ORd is " << int_ord1.size() << endl << endl;

			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			int_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			int_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			int_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			int_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << int_ord1.show_left() << endl;
			int_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "The size of the ORd is " << int_ord1.size() << endl << endl;



			cout << "***Testing if the ORd works with string inputs***" << endl << endl; // Testing if the ORd works with string inputs

			string_ord1.push_left("A");
			cout << string_ord1.show_left() << " is pushed left onto 'string_ord1'" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			cout << "The size of the ORd is " << string_ord1.size() << endl;
			string_ord1.push_left("B");
			cout << string_ord1.show_left() << " is pushed left onto 'string_ord1'" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			cout << "The size of the ORd is " << string_ord1.size() << endl;
			string_ord1.push_left("C");
			cout << string_ord1.show_left() << " is pushed left onto 'string_ord1'" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			cout << "The size of the ORd is " << string_ord1.size() << endl;
			string_ord1.push_left("D");
			cout << string_ord1.show_left() << " is pushed left onto 'string_ord1'" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			cout << "The size of the ORd is " << string_ord1.size() << endl;
			string_ord1.push_left("E");
			cout << string_ord1.show_left() << " is pushed left onto 'string_ord1'" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			cout << "The size of the ORd is " << string_ord1.size() << endl << endl;

			string_ord1.push_right("V");
			cout << "V is pushed Right onto 'string_ord1'" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			cout << "The size of the ORd is " << string_ord1.size() << endl;
			string_ord1.push_right("W");
			cout << "W is pushed right onto 'string_ord1'" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			cout << "The size of the ORd is " << string_ord1.size() << endl;
			string_ord1.push_right("X");
			cout << "X is pushed right onto 'string_ord1'" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			cout << "The size of the ORd is " << string_ord1.size() << endl;
			string_ord1.push_right("Y");
			cout << "Y is pushed right onto 'string_ord1'" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			cout << "The size of the ORd is " << string_ord1.size() << endl;
			string_ord1.push_right("Z");
			cout << "Z is pushed right onto 'string_ord1'" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			cout << "The size of the ORd is " << string_ord1.size() << endl << endl;


			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			string_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			string_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			string_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			string_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			string_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "The size of the ORd is " << string_ord1.size() << endl << endl;

			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			string_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			string_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			string_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			string_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "Left of the ORd is " << string_ord1.show_left() << endl;
			string_ord1.pop_left();
			cout << "Left of the ORd is popped" << endl;
			cout << "The size of the ORd is " << string_ord1.size() << endl << endl;

			cout << "***equality test with double value***" << endl << endl; // equality test with double value

			double_ord1.push_left(1.1);
			cout << double_ord1.show_left() << " is pushed left onto 'double_ord1'" << endl;
			cout << "The size of the ORd is " << double_ord1.size() << endl;
			double_ord1.push_left(2.2);
			cout << double_ord1.show_left() << " is pushed left onto 'double_ord1'" << endl;
			cout << "The size of the ORd is " << double_ord1.size() << endl;
			double_ord1.push_left(3.3);
			cout << double_ord1.show_left() << " is pushed left onto 'double_ord1'" << endl;
			cout << "The size of the ORd is " << double_ord1.size() << endl;
			double_ord1.push_left(4.4);
			cout << double_ord1.show_left() << " is pushed left onto 'double_ord1'" << endl;
			cout << "The size of the ORd is " << double_ord1.size() << endl;
			double_ord1.push_left(5.5);
			cout << double_ord1.show_left() << " is pushed left onto 'double_ord1'" << endl;
			cout << "The size of the ORd is " << double_ord1.size() << endl << endl;

			double_ord2.push_right(5.5);
			cout << "5.5 is pushed right onto 'double_ord2'" << endl;
			cout << "The size of the ORd is " << double_ord2.size() << endl;
			double_ord2.push_right(4.4);
			cout << "4.4 is pushed right onto 'double_ord2'" << endl;
			cout << "The size of the ORd is " << double_ord2.size() << endl;
			double_ord2.push_right(3.3);
			cout << "3.3 is pushed right onto 'double_ord2'" << endl;
			cout << "The size of the ORd is " << double_ord2.size() << endl;
			double_ord2.push_right(2.2);
			cout << "2.2 is pushed right onto 'double_ord2'" << endl;
			cout << "The size of the ORd is " << double_ord2.size() << endl;
			double_ord2.push_right(1.1);
			cout << "1.1 is pushed right onto 'double_ord2'" << endl;
			cout << "The size of the ORd is " << double_ord2.size() << endl << endl;

			cout << "Now double_ord1 and double_ord2 are same ORds" << endl;

			if(double_ord1 == double_ord2)		// double_ord1 and double_ord2 contain same elements in same sequence. So they are same ORds
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}
			else
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}

			cout << "Now I will pop one element from double_ord2 to make them different" << endl;

			double_ord2.pop_left();
			if(double_ord1 == double_ord2)		// double_ord1 and double_ord2 are different in size
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}
			else
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}

			cout << "Now I will push one element onto double_ord2 to make them same size, but different element" << endl;

			double_ord2.push_right(25);		
			if(double_ord1 == double_ord2)		// double_ord1 and double_ord2 are same in their sizes, but contain different element
			{
				cout << "I failed to make '==' correctly" << endl << endl;		// when '==' is not working properly
			}
			else
			{
				cout << "I verified that '==' is working properly" << endl << endl;		// when '==' is working properly
			}
		}		
		else if(choice == 8)		// Quit the test
		{
			again = false;
		}		
		else
		{
			cout << "That's not an option. Please try again" << endl;
		}

		cout << endl;
	}
	while(again);

	system("pause");
	return 0;
}


