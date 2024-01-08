#ifndef ICE_HPP
# define ICE_HPP

# include "aMateria.hpp"
# include <iostream>

class Ice : public AMateria
{
private:
public:
    Ice();
    Ice(const Ice &ice);
    ~Ice();
    Ice &operator=(const Ice &ice);
    AMateria *clone() const;
    void use(ICharacter &target);
};

#endif