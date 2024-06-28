#include "Bureaucrat.hpp"
#include "Form.hpp"

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

        Form f1 ("Form1", 1, 1);
        Form f2 ("Form2", 100, 100);
        //Form f3 ("Form3", 151, 151);
        //Form f4 ("Form4", 0, 0);
        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;
        //f2.beSigned(b2);
        b1.signForm(f1);
        b2.signForm(f2);
        b5.signForm(f2);
        b1.signForm(f2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}