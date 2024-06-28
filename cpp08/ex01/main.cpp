#include "Span.hpp"
#include <iostream>
#include <vector>

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	Span sp2 = Span(1000);
	std::vector<int> v(10000);
	for (int i = 0; i < 10000; i++)
		v[i] = i;

	try
	{
		sp2.fill(v.begin(), v.end());
	}
	catch(const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	
	return 0;
}