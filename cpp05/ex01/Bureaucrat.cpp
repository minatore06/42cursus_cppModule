#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Buteaucrat"), grade(150) {}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : name(bureaucrat.name){
    *this = bureaucrat;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
    if (this != &bureaucrat) {
        this->grade = bureaucrat.grade;
    }
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return os;
}

std::string Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

void Bureaucrat::incrementGrade() {
    if (grade == 1)
        throw GradeTooHighException();
    grade--;
}

void Bureaucrat::decrementGrade() {
    if (grade == 150)
        throw GradeTooLowException();
    grade++;
}

void Bureaucrat::signForm(Form &form) {
    if (form.getSigned())
        std::cout << name << " cannot sign " << form.getName() << " because it is already signed" << std::endl;
    else {
        try
        {  
            form.beSigned(*this);
            std::cout << name << " signed " << form.getName() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
        }
    }
}

const char *GradeTooHighException::what() const throw() {
    return "Grade too high";
}

const char *GradeTooLowException::what() const throw() {
    return "Grade too low";
}