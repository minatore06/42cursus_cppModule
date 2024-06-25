#include "wrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &wrongCat)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = wrongCat;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongCat)
{
    this->type = wrongCat.type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Moew!" << std::endl;
}