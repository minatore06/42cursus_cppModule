#include "Animal.hpp"

Animal::Animal() : type("")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = animal;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &animal)
{
    this->type = animal.type;
    return (*this);
}

std::string Animal::getType() const
{
    return (this->type);
}