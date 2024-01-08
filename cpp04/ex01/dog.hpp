#ifndef DOG_HPP
# define DOG_HPP

# include "animal.hpp"
# include "brain.hpp"

class Dog : public Animal
{
private:
    Brain *brain;
public:
    Dog();
    Dog(const Dog &dog);
    ~Dog();
    Dog &operator=(const Dog &dog);
    void makeSound() const;
};

#endif