#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "wrongAnimal.hpp"
#include "wrongCat.hpp"

int main()
{
	const Animal* animals[6] = {new Dog(), new Dog(), new Cat(), new Dog(), new Cat(), new Cat()};
	
	for (int i = 0; i < 6; i++)
	{
		delete animals[i];
	}
	
	return 0;
}