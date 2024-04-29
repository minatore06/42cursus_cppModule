#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "aMateria.hpp"
# include <string>

class IMateriaSource
{
private:
public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria *) = 0;
    virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif