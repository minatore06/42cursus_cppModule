#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &i) {
    *this = i;
}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &i) {
    (void)i;
    return *this;
}

AForm* Intern::makePresidentialPardonForm(std::string target) {
    return (new PresidentialPardonForm(target));
}

AForm* Intern::makeRobotomyRequestForm(std::string target) {
    return (new RobotomyRequestForm(target));
}

AForm* Intern::makeShrubberyCreationForm(std::string target) {
    return (new ShrubberyCreationForm(target));
}

AForm* Intern::makeForm(std::string formName, std::string target) {
    std::string names[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    AForm *(Intern::*forms[3])(std::string) = {&Intern::makePresidentialPardonForm, &Intern::makeRobotomyRequestForm, &Intern::makeShrubberyCreationForm}; 

    for (int i = 0; i < 3; i++) {
        if (names[i] == formName) {
            std::cout << "Intern creates " << formName << std::endl; 
            return ((this->*forms[i])(target));
        }
    }
    std::cout << "Intern could not create the form " << formName << " because it is not a valid form" << std::endl;
    return (NULL);
}