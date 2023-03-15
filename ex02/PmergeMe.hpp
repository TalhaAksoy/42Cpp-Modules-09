#pragma once

#include <iostream>
#include <deque>
#include <list>
#include <algorithm>
#include <ctime>
#include <cstdlib>



class PmergeMe
{
	public:
	PmergeMe(int ac, char **av);
	template <typename T>
	void display(const T& container);
	void mergeInsertSortDeque(std::deque<int>& arr);
	void mergeInsertSortList(std::list<int>& arr);
};
