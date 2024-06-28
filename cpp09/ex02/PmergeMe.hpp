#ifndef PMERGEME_HPP_
#define PMERGEME_HPP_

#include <vector>
#include <deque>
#include <sstream>
#include <iostream>

class PmergeMe {
	private:
		std::vector<unsigned int> vec;
		std::deque<unsigned int> deku;
	public:
		PmergeMe();
		PmergeMe(char **av);
		PmergeMe(const PmergeMe &other);
		~PmergeMe();
		PmergeMe &operator=(const PmergeMe &other);

		std::vector<unsigned int> getVec() const { return vec; }
		std::deque<unsigned int> getDeku() const { return deku; }

		void printVec() const;
		void printDeku() const;

		void sortVec();
		void sortDeku();

		template <typename T>
		void insertionSort(T &arr, int l, int r) {
			int i, j;
			unsigned int key;
			for (i = l + 1; i <= r; i++) {
				key = arr[i];
				for (j = i - 1; (j >= l && arr[j] > key); j--)
					arr[j + 1] = arr[j];
				arr[j + 1] = key;
			}
		}

		template <typename T>
		void merge(T &arr, int l, int size) {
			T m1(size), m2(size);

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

		template <typename T>
		void emergency_meeting(T &arr, int l, int size) {
			T m1(size), m2(1);

			for (int i = 0; i < size; i++)
				m1[i] = arr[l + i];
			m2[0] = arr[l + size];

			int i = 0, j = 0, k = l;
			while (i < size && j < 1) {
				if (m1[i] <= m2[j])
					arr[k++] = m1[i++];
				else
					arr[k++] = m2[j++];
			}

			while (i < size)
				arr[k++] = m1[i++];
			while (j < 1)
				arr[k++] = m2[j++];
		}

		template <typename T>
		void mergeInsertionSort(T &arr, int l, int r, int size = -1) {
			if (size == -1)
				size = arr.size();
			if (size <= 2) {
				insertionSort(arr, l, r);
				return;
			}
			size /= 2;
			mergeInsertionSort(arr, l, l + size - 1, size);
			mergeInsertionSort(arr, l + size, l + size * 2 - 1, size);
			merge(arr, l, size);
			if (size * 2 < r - l + 1)
				emergency_meeting(arr, l, size * 2);
		}
};

#endif