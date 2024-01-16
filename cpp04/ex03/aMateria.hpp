#pragma once
# include <string>
# include "iCharacter.hpp"

class AMateria
{
protected:
    std::string type;
public:
    AMateria();
    AMateria(std::string const &type);
    AMateria(const AMateria &aMateria);
    ~AMateria();
    AMateria &operator=(const AMateria &aMateria);

    std::string const &getType() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};