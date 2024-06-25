#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
    const string name;
    bool signed;
    const int gradeToSign;
    const int gradeToExecute;
public:
    AForm();
    AForm(const string &name, int gradeToSign, int gradeToExecute);
    AForm(const AForm &form);
    virtual ~AForm();
    AForm &operator=(const AForm &form);
    std::ostream &operator<<(std::ostream &os, const AForm &form);
    string getName() const;
    bool getSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    void beSigned(Bureaucrat &bureaucrat);
    virtual void execute(Bureaucrat const &executor) const;
    class GradeTooLowException : public std::exception {
    public:
        const char *what() const throw(){
            return ("Grade is too low")
        };
    };
    class GradeTooHighException : public std::exception {
    public:
        const char *what() const throw(){
            return ("Grade is too high")
        };
    };
    class NotSignedException : public std::exception {
    public:
        const char *what() const throw(){
            return ("Form is not signed")
        };
    };
};

#endif