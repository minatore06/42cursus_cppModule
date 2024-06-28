#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(char **av) {
	unsigned int tmp;
	for (size_t i = 0; av[i]; i++) {
		std::istringstream iss(av[i]);
		iss >> tmp;
		vec.push_back(tmp);
		deku.push_back(tmp);
	}
}

PmergeMe::PmergeMe(const PmergeMe &other) {
	*this = other;
}

PmergeMe::~PmergeMe() {}

PmergeMe &PmergeMe::operator=(const PmergeMe &other) {
	(void)other;
	return *this;
}

void PmergeMe::sortVec() {
	mergeInsertionSort(vec, 0, vec.size() - 1);
}

void PmergeMe::sortDeku() {
	mergeInsertionSort(deku, 0, deku.size() - 1);
}

void PmergeMe::printVec() const {
	for (size_t i = 0; i < vec.size(); i++) {
		std::cout << vec[i];
		if (i + 1 < vec.size())
			std::cout << " ";
	}
	std::cout << std::endl;
}

void PmergeMe::printDeku() const {
	for (size_t i = 0; i < deku.size(); i++) {
		std::cout << deku[i];
		if (i + 1 < deku.size())
			std::cout << " ";
	}
	std::cout << std::endl;
}