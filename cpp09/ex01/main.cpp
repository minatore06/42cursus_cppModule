#include "RPN.hpp"
#include <iostream>

int main(int ac, char** av)
{
	if (ac != 2)
	{
		std::cerr << "Error: missing argument" << std::endl;
		return 1;
	}
	try
	{
		int x = RPN_run(av[1]);
		std::cout << x << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error" << std::endl;
		return 1;
	}
	return 0;
}