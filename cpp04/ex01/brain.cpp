#include "brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = "";
    }
    
}

Brain::Brain(const Brain &brain)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = brain;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &brain)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = brain.ideas[i];
    return (*this);
}