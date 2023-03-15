#include "RPN.hpp"

RPN::RPN()
{
	return;
}

RPN::~RPN()
{
	return;
}

RPN::RPN(std::stack<double> number)
{
	this->numbers = number;
}

RPN::RPN(const RPN &var)
{
	*this = var;
}

RPN &RPN::operator=(const RPN &var)
{
	this->numbers = var.numbers;
	return (*this);
}

void RPN::calculate(std::string input)
{
	for (size_t i = 0; i < input.size(); i++)
	{
		char c = input[i];

		if (c == ' ')
		{
			// skip whitespace
			continue;
		}
		else if (isdigit(c))
		{
			int number = c - '0';
			numbers.push(number);
		}
		else if (c == '+' && numbers.size() >= 2)
		{
			double b = numbers.top();
			numbers.pop();
			double a = numbers.top();
			numbers.pop();
			numbers.push(a + b);
		}
		else if (c == '-' && numbers.size() >= 2)
		{
			double b = numbers.top();
			numbers.pop();
			double a = numbers.top();
			numbers.pop();
			numbers.push(a - b);
		}
		else if (c == '*' && numbers.size() >= 2)
		{
			double b = numbers.top();
			numbers.pop();
			double a = numbers.top();
			numbers.pop();
			numbers.push(a * b);
		}
		else if (c == '/' && numbers.size() >= 2)
		{
			double b = numbers.top();
			numbers.pop();
			double a = numbers.top();
			numbers.pop();
			numbers.push(a / b);
		}
		else
		{
			// invalid character or insufficient operands
			std::cout << "Invalid input." << std::endl;
			return;
		}
	}

	if (numbers.size() == 1)
	{
		double result = numbers.top();
		numbers.pop();
		std::cout << "Result: " << result << std::endl;
	}
	else
	{
		// insufficient operands
		std::cout << "Invalid input." << std::endl;
	}
}
