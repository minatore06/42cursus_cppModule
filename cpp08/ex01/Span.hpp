#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <stdlib.h>

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
		for_each(begin, end, addNumber);
		if (begin != end)
			throw std::exception();
	}
};

#endif