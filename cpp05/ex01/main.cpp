#include "Bureaucrat.hpp"
#include "Form.hpp"

int main (void) {
    try
    {
        Bureaucrat b1 ("Silvio", 1);
        Bureaucrat b2 ("Simone", 150);
        Bureaucrat b3 ("Peppino", 151);
        Bureaucrat b4 ("Lello", 0);
        Bureaucrat b5 ("Giovanni", 75);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;
    std::cout << b5 << std::endl;
    b5.incrementGrade();
    std::cout << b5 << std::endl;
    b5.decrementGrade();
    std::cout << b5 << std::endl;
    try
    {
        b1.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        b2.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Form f1 ("Form1", 1, 1);
        Form f2 ("Form2", 100, 100);
        Form f3 ("Form3", 151, 151);
        Form f4 ("Form4", 0, 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << f1 << std::endl;
    std::cout << f2 << std::endl;
    try
    {
        f2.beSigned(b2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    b1.signForm(f1);
    b2.signForm(f2);
    b5.signForm(f2);
    b1.signForm(f2);

    return 0;
}