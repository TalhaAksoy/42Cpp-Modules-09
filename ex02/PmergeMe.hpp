#pragma once

#include <vector>
#include <iostream>

class PmergeMe
{
private:
	std::vector<int> numbers;
public:
	PmergeMe();
	~PmergeMe();
	std::vector<std::string> splitString(std::string str, char delimiter);
};