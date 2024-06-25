#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "wrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
public:
    WrongCat();
    WrongCat(const WrongCat &wrongCat);
    WrongCat &operator=(const WrongCat &wrongCat);
    ~WrongCat();
    void makeSound() const;
};

#endif