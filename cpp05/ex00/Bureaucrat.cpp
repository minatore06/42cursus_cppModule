#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Buteaucrat"), grade(150) {}

Bureaucrat::Bureaucrat(const string &name, int grade) : name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) {
    *this = bureaucrat;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
    if (this != &bureaucrat) {
        this->name = bureaucrat.name;
        this->grade = bureaucrat.grade;
    }
    return *this;
}

std::ostream &Bureaucrat::operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return os;
}

string Bureaucrat::getName() const {
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