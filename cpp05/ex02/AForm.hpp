#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
    const std::string name;
    bool sign;
    const int gradeToSign;
    const int gradeToExecute;
    AForm();
    AForm(const std::string &name, int gradeToSign, int gradeToExecute);
    AForm(const AForm &form);
public:
    virtual ~AForm() = 0;
    AForm &operator=(const AForm &form);
    std::string getName() const;
    bool getSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    void beSigned(Bureaucrat &bureaucrat);
    virtual void execute(Bureaucrat const &executor) const = 0;
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
    class NotSignedException : public std::exception {
    public:
        const char *what() const throw(){
            return ("Form is not signed");
        };
    };
};

std::ostream &operator<<(std::ostream &os, const AForm &form);

#endif