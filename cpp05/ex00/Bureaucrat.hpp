#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>

class Bureaucrat
{
private:
    const string name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(const string &name, int grade);
    Bureaucrat(const Bureaucrat &bureaucrat);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &bureaucrat);
    std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);
    string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
};


#endif