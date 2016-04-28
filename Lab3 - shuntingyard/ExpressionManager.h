#ifndef EXPRESSIONMANAGER_H
#define EXPRESSIONMANAGER_H
#include "ExpressionManagerInterface.h"
#include <iostream>
#include <string>
#include <stack>
using namespace std;


class ExpressionManager : public ExpressionManagerInterface
{
	public:

		ExpressionManager(){}
		virtual bool isBalanced(string expression);
		virtual string postfixToInfix(string postfixExpression);
		virtual string infixToPostfix(string infixExpression);
		virtual string postfixEvaluate(string postfixExpression);

};
#endif