#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    const string name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(const string &name, int grade);
    Bureaucrat(const Bureaucrat &bureaucrat);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &bureaucrat);
    std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);
    string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    void signForm(Form &form);
};


#endif