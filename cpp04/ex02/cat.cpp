#include "cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    brain = new Brain();
}

Cat::Cat(const Cat &cat)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = cat;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

Cat &Cat::operator=(const Cat &cat)
{
    this->type = cat.type;
    *this->brain = *cat.brain;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}