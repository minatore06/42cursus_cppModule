#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat(const Bureaucrat &bureaucrat);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &bureaucrat);
    std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    void signForm(Form &form);
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

class GradeTooHighException : public std::exception
{
public:
    virtual const char *what() const throw();
};

class GradeTooLowException : public std::exception
{
public:
    virtual const char *what() const throw();
};

#endif