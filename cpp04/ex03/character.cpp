#include "character.hpp"

Character::Character()
{
    std::cout << "Character default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
    this->floor = NULL;
}

Character::Character(std::string const &name) : name(name)
{
    std::cout << "Character name constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
    this->floor = NULL;
}

Character::Character(const Character &character)
{
    std::cout << "Character copy constructor called" << std::endl;
    *this = character;
    this->floor = NULL;
}

Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; i++) {
        if (this->inventory[i]) {
            delete this->inventory[i];
        }
    }
    if (this->floor)
        delete this->floor;
}

Character &Character::operator=(const Character &character)
{
    this->name = character.name;
    for (int i = 0; i < 4; i++) 
    {
        if (this->inventory[i])
            delete this->inventory[i];
        this->inventory[i] = character.inventory[i]->clone();
    }
    return (*this);
}

std::string const &Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->inventory[i])
        {
            this->inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return ;
    if (this->inventory[idx])
    {
        if (this->floor)
            delete this->floor; 
        this->floor = this->inventory[idx];
    }
    this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx > 3 || !this->inventory[idx])
        return ;
    this->inventory[idx]->use(target);
}