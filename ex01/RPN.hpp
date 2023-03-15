#pragma once

#include <iostream>
#include <stack>

class RPN
{
private:
	std::stack<double> numbers;
public:
	RPN();
	RPN(std::stack<double> number);
	RPN(const RPN &var);
	~RPN();
	RPN &operator=(const RPN &var);
	void calculate(std::string input);
		
};

