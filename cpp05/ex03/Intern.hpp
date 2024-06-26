#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
private:
    AForm* makePresidentialPardonForm(std::string target);
    AForm* makeRobotomyRequestForm(std::string target);
    AForm* makeShrubberyCreationForm(std::string target);
public:
    Intern();
    Intern(const Intern &i);
    ~Intern();
    Intern &operator=(const Intern &i);
    AForm* makeForm(std::string formName, std::string target);
};

#endif