#ifndef CAT_HPP
# define CAT_HPP

# include "animal.hpp"

class Cat : public Animal
{
private:
public:
    Cat();
    Cat(const Cat &cat);
    ~Cat();
    Cat &operator=(const Cat &cat);
    void makeSound() const;
};

#endif