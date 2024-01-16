#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "wrongAnimal.hpp"
#include "wrongCat.hpp"

int main()
{
	const Animal* animals[6] = {new Dog(), new Dog(), new Cat(), new Dog(), new Cat(), new Cat()};
	const Dog *dog = new Dog();
	const Dog *dog2 = new Dog(*dog);

	for (int i = 0; i < 6; i++)
	{
		delete animals[i];
	}
	delete dog;
	delete dog2;
	
	return 0;
}