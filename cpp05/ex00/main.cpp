#include "Bureaucrat.hpp"
#include <iostream>

int main (void) {
    try
    {
        Bureaucrat b1 ("Silvio", 1);
        Bureaucrat b2 ("Simone", 150);
        //Bureaucrat b3 ("Peppino", 151);
        //Bureaucrat b4 ("Lello", 0);
        Bureaucrat b5 ("Giovanni", 75);
        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << b5 << std::endl;
        b5.incrementGrade();
        std::cout << b5 << std::endl;
        b5.decrementGrade();
        std::cout << b5 << std::endl;
        //b1.incrementGrade();
        //b2.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}