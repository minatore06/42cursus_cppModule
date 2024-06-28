#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <cstdlib>
#include <sstream>
#include <iomanip>

int main(int ac, char **av)
{
	if (ac < 3) {
		std::cout << "Error" << std::endl;
		return 1;
	}

	double time_vec, time_deq;
	clock_t start_v, end_v, start_d, end_d;
	int tmp;

	for (size_t i = 1; av[i]; i++) {
		std::istringstream iss(av[i]);
		iss >> tmp;
		if (tmp < 0) {
			std::cout << "Error" << std::endl;
			return 1;
		}
	}

	std::cout << "Before:";
	for (size_t i = 1; av[i]; i++) {
		std::cout << " " << av[i];
	}
	std::cout << std::endl;

	PmergeMe pmm(av + 1);
	start_v = clock();
	pmm.sortVec();
	end_v = clock();
	time_vec = (double)(end_v - start_v) * (1000) / CLOCKS_PER_SEC;
	start_d = clock();
	pmm.sortDeku();
	end_d = clock();
	time_deq = (double)(end_d - start_d) * (1000) / CLOCKS_PER_SEC;

	std::cout << "After: ";
	pmm.printVec();
	std::cout << "Time to process a range of " << pmm.getVec().size() << " elements with std::vector : " << std::setprecision(6) << time_vec << " ms" << std::endl;
	std::cout << "Time to process a range of " << pmm.getDeku().size() << " elements with std::deque : " << std::setprecision(6) << time_deq << " ms" << std::endl;
}