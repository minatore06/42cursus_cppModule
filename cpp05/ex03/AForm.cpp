#include "AForm.hpp"

AForm::AForm() : name("AForm"), sign(false), gradeToSign(150), gradeToExecute(150) {}

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm &form) : name(form.name), gradeToSign(form.gradeToSign), gradeToExecute(form.gradeToExecute){
    *this = form;
}

AForm &AForm::operator=(const AForm &form) {
    if (this != &form)
    {
        this->sign = form.sign;
    }
    return *this;
}

std::ostream &operator<<(std::ostream &os, const AForm &form) {
    os << form.getName() << ", form grade to sign " << form.getGradeToSign() << ", form grade to execute " << form.getGradeToExecute() << ", form is " << (form.getSigned() ? "sign" : "not sign") << std::endl;
    return os;
}

std::string AForm::getName() const {
    return name;
}

bool AForm::getSigned() const {
    return sign;
}

int AForm::getGradeToSign() const {
    return gradeToSign;
}

int AForm::getGradeToExecute() const {
    return gradeToExecute;
}

void AForm::beSigned(Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > gradeToSign)
        throw GradeTooLowException();
    sign = true;
}