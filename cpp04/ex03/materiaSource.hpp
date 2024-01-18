#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "iMateriaSource.hpp"
# include "aMateria.hpp"
# include <iostream>

class MateriaSource : public IMateriaSource
{
private:
    AMateria *memory[4];
public:
    MateriaSource();
    MateriaSource(const MateriaSource &materiaSource);
    ~MateriaSource();
    MateriaSource &operator=(const MateriaSource &materiaSource);
    void learnMateria(AMateria *);
    AMateria *createMateria(std::string const &type);

};

#endif