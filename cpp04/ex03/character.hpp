#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "iCharacter.hpp"
# include "aMateria.hpp"

class Character : public ICharacter
{
private:
    AMateria *inventory[4];
public:
    Character();
    Character(const Character &character);
    ~Character();
    Character &operator=(const Character &character);

};

#endif