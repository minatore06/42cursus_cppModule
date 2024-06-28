#include "Form.hpp"

Form::Form() : name("Form"), sign(false), gradeToSign(150), gradeToExecute(150) {}

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &form) : name(form.name), gradeToSign(form.gradeToSign), gradeToExecute(form.gradeToExecute){
    *this = form;
}

Form::~Form() {}

Form &Form::operator=(const Form &form) {
    if (this != &form)
    {
        this->sign = form.sign;
    }
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
    os << form.getName() << ", form grade to sign " << form.getGradeToSign() << ", form grade to execute " << form.getGradeToExecute() << ", form is " << (form.getSigned() ? "sign" : "not sign") << std::endl;
    return os;
}

std::string Form::getName() const {
    return name;
}

bool Form::getSigned() const {
    return sign;
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
    sign = true;
}