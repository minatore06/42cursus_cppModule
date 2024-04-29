#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "iCharacter.hpp"
# include "aMateria.hpp"
# include <iostream>
# include <string>

class Character : public ICharacter
{
private:
    std::string name;
    AMateria *inventory[4];
    AMateria *floor;
public:
    Character();
    Character(std::string const &name);
    Character(const Character &character);
    ~Character();
    Character &operator=(const Character &character);
    std::string const &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};

#endif