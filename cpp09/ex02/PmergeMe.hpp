#ifndef PMERGEME_HPP_
#define PMERGEME_HPP_

#include <vector>

class PmergeMe {
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &other);
		~PmergeMe();
		PmergeMe &operator=(const PmergeMe &other);
		void insertionSort(std::vector<int> &arr, int l, int r);
		void merge(std::vector<int> &arr, int l, int size);
		void mergeInsertionSort(std::vector<int> &arr, int l, int r, int size = -1);
};

#endif