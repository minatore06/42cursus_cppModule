#include "Form.hpp"

Form::Form() : name("Form"), signed(false), gradeToSign(150), gradeToExecute(150) {}

Form::Form(const string &name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &form) {
    *this = form;
}

Form::~Form() {}

Form &Form::operator=(const Form &form) {
    if (this != &form)
    {
        this->name = form.name;
        this->signed = form.signed;
        this->gradeToSign = form.gradeToSign;
        this->gradeToExecute = form.gradeToExecute;
    }
    return *this;
}

std::ostream &Form::operator<<(std::ostream &os, const Form &form) {
    os << form.getName() << ", form grade to sign " << form.getGradeToSign() << ", form grade to execute " << form.getGradeToExecute() << ", form is " << (form.getSigned() ? "signed" : "not signed") << std::endl;
    return os;
}

string Form::getName() const {
    return name;
}

bool Form::getSigned() const {
    return signed;
}

int Form::getGradeToSign() const {
    return gradeToSign;
}

int Form::getGradeToExecute() const {
    return gradeToExecute;
}

void Form::beSigned(Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > gradeToSign)
        throw GradeTooLowException();
    signed = true;
}