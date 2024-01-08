#include "aMateria.hpp"

AMateria::AMateria() : type("")
{
}

AMateria::AMateria(std::string const &type) : type(type)
{
}

AMateria::AMateria(const AMateria &aMateria)
{
    *this = aMateria;
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator=(const AMateria &aMateria)
{
    this->type = aMateria.type;
    return (*this);
}