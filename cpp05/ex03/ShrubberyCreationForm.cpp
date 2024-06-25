#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("target") {}

ShrubberyCreationForm::ShrubberyCreationForm(const string &name) : AForm("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form) {
    this = form;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form)
{
    this->target = form.target;
    return *this;
}

void AFrom::execute(Bureaucrat const &executor) const
{
    if (bureaucrat.getGrade() > this->getGradeToExecute())
        throw GradeTooLowException();
    if (!this.getSigned())
        throw NotSignedException();
    std::ofstream file;
    file.open(target + "_shrubbery");
    file << "                     . . ." << std::endl;
    file << "               .        .  .     ..    ." << std::endl;
    file << "            .                 .         .  ." << std::endl;
    file << "                            ." << std::endl;
    file << "                           .                .." << std::endl;
    file << "           .          .            .              ." << std::endl;
    file << "           .            '.,        .               ." << std::endl;
    file << "           .              'b      *" << std::endl;
    file << "            .              '$    #.                .." << std::endl;
    file << "           .    .           $:   #:               ." << std::endl;
    file << "         ..      .  ..      *#  @):        .   . ." << std::endl;
    file << "                      .     :@,@):   ,.**:'   ." << std::endl;
    file << "          .      .,         :@@*: ..**'      .   ." << std::endl;
    file << "                   '#o.    .:(@'.@*\"'  ." << std::endl;
    file << "           .  .       'bq,..:,@@*'   ,*      .  ." << std::endl;
    file << "                      ,p$q8,:@)'  .p*'      ." << std::endl;
    file << "               .     '  . '@@Pp@@*'    .  ." << std::endl;
    file << "                .  . ..    Y7'.'     .  ." << std::endl;
    file << "                          :@):." << std::endl;
    file << "                         .:@:'." << std::endl;
    file << "                       .::(@:.      -Sam Blumenstein-" << std::endl;
    file << std::endl;
    file.close();
}