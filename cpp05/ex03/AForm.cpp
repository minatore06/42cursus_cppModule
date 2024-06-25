#include "AForm.hpp"

AForm::AForm() : name("AForm"), signed(false), gradeToSign(150), gradeToExecute(150) {}

AForm::AForm(const string &name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm &form) {
    *this = form;
}

AForm::~AForm() {}

AForm &AForm::operator=(const AForm &form) {
    if (this != &form)
    {
        this->name = form.name;
        this->signed = form.signed;
        this->gradeToSign = form.gradeToSign;
        this->gradeToExecute = form.gradeToExecute;
    }
    return *this;
}

std::ostream &AForm::operator<<(std::ostream &os, const AForm &form) {
    os << form.getName() << ", form grade to sign " << form.getGradeToSign() << ", form grade to execute " << form.getGradeToExecute() << ", form is " << (form.getSigned() ? "signed" : "not signed") << std::endl;
    return os;
}

string AForm::getName() const {
    return name;
}

bool AForm::getSigned() const {
    return signed;
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
    signed = true;
}