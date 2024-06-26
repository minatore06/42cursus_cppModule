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
		while (begin != end)
			addNumber(*begin++);
		if (begin != end)
			throw std::exception();
	}
};

#endif