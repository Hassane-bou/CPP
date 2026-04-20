#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name,int grade):
_name(name),_grade(grade){
    if(grade < 1)
        throw GradeTooHighException();
    if(grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(const Bureaucrat &other):
_name(other._name), _grade(other._grade){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
    std::cout << "Copy assignment Called\n";
    if(this != &other)
        this->_grade = other._grade;
    return *this;
}

std::string Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade; 
}

void Bureaucrat::incrementGrade()
{
    if(_grade < 1)
        throw GradeTooHighException();
    _grade--;
}

void Bureaucrat::decrementGrade()
{
    if(_grade > 150)
        throw GradeTooLowException();
    _grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return " Grade Too High !";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return " Grade Too Low !";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
    return os;
}

