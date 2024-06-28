#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <stdlib.h>
#include <algorithm>

class Span
{
private:
	unsigned int n;
	unsigned int size;
	int *array;
public:
	Span();
	Span(unsigned int n);
	Span(const Span &span);
	~Span();
	Span &operator=(const Span &span);
	void addNumber(int x);
	int shortestSpan();
	int longestSpan();
	template <typename T>
	void fill(T begin, T end)
	{
		for (; begin != end; begin++)
			addNumber(*begin);
		if (begin != end)
			throw std::exception();
	}
};

#endif