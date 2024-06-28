#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <cstdlib>
#include <sstream>

int main(int ac, char **av)
{
	if (ac < 3) {
		std::cout << "Error" << std::endl;
		return 1;
	}

	double time_vec;//, time_deq;
	clock_t start_v, end_v;//, start_d, end_d;
	std::vector<int> vec;
	int tmp;

	std::cout << "Before:" << std::endl;
	for (size_t i = 1; av[i]; i++) {
		std::cout << " " << av[i];
		std::istringstream iss(av[i]);
		iss >> tmp;
		vec.push_back(tmp);
	}
	std::cout << std::endl;
	PmergeMe pmm;
	start_v = clock();
	pmm.mergeInsertionSort(vec, 0, vec.size() - 1);
	end_v = clock();
	time_vec = (double)(end_v - start_v) * (1000 * 1000) / CLOCKS_PER_SEC;
	std::cout << "After:" << std::endl;
	for (size_t i = 0; i < vec.size(); i++)
		std::cout << " " << vec[i];
	std::cout << std::endl;
	std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << time_vec << "us" << std::endl;
}