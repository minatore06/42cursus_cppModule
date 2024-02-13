#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm

int main (void) {
    Bureaucrat b1 ("Silvio", 1);
    Bureaucrat b2 ("Simone", 150);
    Bureaucrat b3 ("Giovanni", 75);
    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;
    std::cout << b3 << std::endl;
    PresidentialPardonForm f1 ("Silvio");
    RobotomyRequestForm f2 ("Simone");
    ShrubberyCreationForm f3 ("Tommaso");
    std::cout << f1 << std::endl;
    std::cout << f2 << std::endl;
    std::cout << f3 << std::endl;
    try
    {
        f2.beSigned(b2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    b1.signForm(f1);
    f1.execute(b1);
    b1.signForm(f2); 
    b2.executeForm(f2);
    b1.executeForm(f2);
    b1.executeForm(f3);
    b3.signForm(f3);
    b3.executeForm(f3);

    return 0;
}