#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Identify.hpp"
#include <iostream>
#include <stdlib.h>

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
