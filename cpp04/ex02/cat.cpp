#include "cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    brain = new Brain();
}

Cat::Cat(const Cat &cat) : Animal()
{
    std::cout << "Cat copy constructor called" << std::endl;
    brain = new Brain();
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
    delete this->brain;
    this->brain = new Brain(*cat.brain);
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}