#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <stdlib.h>

Base * generate(void);
void identify(Base * p);
void identify(Base & p);

int main(){
	Base *p;

	srand(time(NULL));

	for (size_t i = 0; i < 10; i++)
	{
		p = generate();
		identify(*p);
		identify(p);
		delete p;
	}
	return 0;
}

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