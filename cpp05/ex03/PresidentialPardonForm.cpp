#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("target") {}

PresidentialPardonForm::PresidentialPardonForm(const string &name) : AForm("PresidentialPardonForm", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form) {
    this = form;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &form)
{
    this->target = form.target;
    return *this;
}

void AFrom::execute(Bureaucrat const &executor) const
{
    if (bureaucrat.getGrade() > this.getGradeToExecute())
        throw GradeTooLowException();
    if (!this.getSigned())
        throw NotSignedException();
    std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}