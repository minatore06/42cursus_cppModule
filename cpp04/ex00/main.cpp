#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "wrongAnimal.hpp"
#include "wrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongI = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "Expected to make the right sound" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << wrongI->getType() << " " << std::endl;
	std::cout << "Expected to make the wrong sound" << std::endl;
	wrongI->makeSound();
	wrongMeta->makeSound();
	delete meta;
	delete j;
	delete i;
	delete wrongMeta;
	delete wrongI;
	return 0;
}