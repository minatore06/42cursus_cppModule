#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int main()
{
	std::vector<int> v;
	std::list<int> l;

	for (size_t i = 0; i < 5; i++)
	{
		v.push_back(i);
		l.push_back(i);
	}
	
	int x = 3;
	int y = 6;

	try
	{
		std::vector<int>::iterator it = easyfind(v, x);
		std::cout << *it << std::endl;
		it = easyfind(v, y);
		std::cout << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Value not found" << std::endl;
	}

	try
	{
		std::list<int>::iterator it = easyfind(l, x);
		std::cout << *it << std::endl;
		it = easyfind(l, y);
		std::cout << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Value not found" << std::endl;
	}
	return 0;
}