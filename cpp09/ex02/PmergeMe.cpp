#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &other) {
	*this = other;
}

PmergeMe::~PmergeMe() {}

PmergeMe &PmergeMe::operator=(const PmergeMe &other) {
	(void)other;
	return *this;
}

void PmergeMe::insertionSort(std::vector<int> &arr, int l, int r) {
	int i, key, j;
	for (i = l + 1; i <= r; i++) {
		key = arr[i];
		for (j = i - 1; (j >= l && arr[j] > key); j--)
			arr[j + 1] = arr[j];
		arr[j + 1] = key;
	}
}

void PmergeMe::merge(std::vector<int> &arr, int l, int size) {
	std::vector<int> m1(size), m2(size);

	for (int i = 0; i < size; i++)
		m1[i] = arr[l + i];
	for (int i = 0; i < size; i++)
		m2[i] = arr[l + size + i];

	int i = 0, j = 0, k = l;
	while (i < size && j < size) {
		if (m1[i] <= m2[j])
			arr[k++] = m1[i++];
		else
			arr[k++] = m2[j++];
	}

	while (i < size)
		arr[k++] = m1[i++];
	while (j < size)
		arr[k++] = m2[j++];
}

void PmergeMe::mergeInsertionSort(std::vector<int> &arr, int l, int r, int size) {
	if (size == -1)
		size = arr.size() / 2;
	if (size <= 2) {
		insertionSort(arr, l, r);
		return;
	}
	mergeInsertionSort(arr, l, l + size - 1, size / 2);
	mergeInsertionSort(arr, l + size, r, size / 2);
	merge(arr, l, size);
}