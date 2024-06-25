#include "materiaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->memory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource)
{
    std::cout << "MateriaSource copy constructor called" << std::endl;
    *this = materiaSource;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->memory[i])
            delete this->memory[i];
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource)
{
    for (int i = 0; i < 4; i++)
    {
        delete this->memory[i];
        this->memory[i] = materiaSource.memory[i];
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->memory[i])
        {
            this->memory[i] = m;
            break;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->memory[i]->getType() == type)
        {
            return (this->memory[i]->clone());
        }
    }
    return (0);
}