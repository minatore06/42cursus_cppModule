#include "Identify.hpp"

Base * generate(void) {
	int i = rand() % 3;
	if (i == 0) {
		std::cout << "A generated" << std::endl;
		return new A;
	} else if (i == 1) {
		std::cout << "B generated" << std::endl;
		return new B;
	} else {
		std::cout << "C generated" << std::endl;
		return new C;
	}
}

void identify(Base * p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	}
}

void identify(Base & p) {
	try
	{
		(void) dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			(void) dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				(void) dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "How did we end up here?" << std::endl;
			}
		}
	}
}