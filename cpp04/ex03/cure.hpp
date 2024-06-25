#ifndef CURE_HPP
# define CURE_HPP

# include "aMateria.hpp"
# include <iostream>

class Cure : public AMateria
{
private:
public:
    Cure();
    Cure(const Cure &cure);
    ~Cure();
    Cure &operator=(const Cure &cure);
    AMateria *clone() const;
    void use(ICharacter &target);
};

#endif