#include "dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog &dog)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = dog;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

Dog &Dog::operator=(const Dog &dog)
{
    this->type = dog.type;
    *this->brain = *dog.brain;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}