#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &wrongAnimal);
    ~WrongAnimal();
    WrongAnimal &operator=(const WrongAnimal &wrongAnimal);
    std::string getType() const;
    void makeSound() const;
};

#endif