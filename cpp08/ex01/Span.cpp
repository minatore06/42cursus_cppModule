#include "Span.hpp"

Span::Span() : n(0), size(0), array(new int[0]) {}

Span::Span(unsigned int n) : n(n), size(0), array(new int[n]) {}

Span::Span(const Span &span) : n(span.n), size(span.size), array(new int[span.n])
{
	for (unsigned int i = 0; i < span.size; i++)
		array[i] = span.array[i];
}

Span::~Span()
{
	delete[] array;
}

Span &Span::operator=(const Span &span)
{
	if (this == &span)
		return *this;
	delete[] array;
	n = span.n;
	size = span.size;
	array = new int[span.n];
	for (unsigned int i = 0; i < span.size; i++)
		array[i] = span.array[i];
	return *this;
}

void Span::addNumber(int x)
{
	if (size >= n)
		throw std::exception();
	array[size++] = x;
}

int Span::shortestSpan()
{
	if (size <= 1)
		throw std::exception();
	int min = abs(array[0] - array[1]);
	for (unsigned int i = 0; i < size; i++)
		for (unsigned int j = i + 1; j < size; j++)
			if (abs(array[i] - array[j]) < min)
				min = abs(array[i] - array[j]);
	return min;
}

int Span::longestSpan()
{
	if (size <= 1)
		throw std::exception();
	int max = abs(array[0] - array[1]);
	for (unsigned int i = 0; i < size; i++)
		for (unsigned int j = i + 1; j < size; j++)
			if (abs(array[i] - array[j]) > max)
				max = abs(array[i] - array[j]);
	return max;
}