#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("target") {
    srand((unsigned)time(0)); }

RobotomyRequestForm::RobotomyRequestForm(const string &name) : AForm("RobotomyRequestForm", 72, 45), target(target) {
    srand((unsigned)time(0)); 
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form) {
    srand((unsigned)time(0)); 
    this = form;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &form)
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
    std::cout << "Ttttttttrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr" << std::endl;
    int i;
    i = (rand()%2); 
    if (i) {
        std::cout << this->target << " has been robotomized successfully" << std::endl;
    } else {
        std::cout << this->target << " has failed to be robotomized" << std::endl;
    }
}