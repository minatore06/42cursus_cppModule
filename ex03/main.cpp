#include "materiaSource.hpp"
#include "character.hpp"
#include "ice.hpp"
#include "cure.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->equip(tmp);
    me->equip(tmp);
    me->equip(tmp);
    me->unequip(3);
    me->equip(tmp);
    std::cout << "end" << std::endl;
    delete bob;
    delete me;
    delete src;
    return 0;
}