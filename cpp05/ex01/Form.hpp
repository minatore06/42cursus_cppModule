#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string name;
    bool sign;
    const int gradeToSign;
    const int gradeToExecute;
public:
    Form();
    Form(const std::string &name, int gradeToSign, int gradeToExecute);
    Form(const Form &form);
    ~Form();
    Form &operator=(const Form &form);
    std::string getName() const;
    bool getSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    void beSigned(Bureaucrat &bureaucrat);
    class GradeTooLowException : public std::exception {
        public:
            const char *what() const throw(){
                return ("Grade is too low");
            };
    };
    class GradeTooHighException : public std::exception {
    public:
        const char *what() const throw(){
            return ("Grade is too high");
        };
    };
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif