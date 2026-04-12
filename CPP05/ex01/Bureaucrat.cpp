#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string name,int grade):
_name(name),_grade(grade)
{
    std::cout << "Constructor parametrer Called\n";
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor Called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &other):
_name(other._name), _grade(other._grade)
{
    std::cout << "Copy constructor Called\n";
}

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
    _grade--;
    if(_grade < 1)
        throw GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
    _grade++;
    if(_grade > 150)
        throw GradeTooLowException();
}


void Bureaucrat::signForm(Form &obj)
{
    try{
        obj.beSigned(*this);
        std::cout << this->getName() << " signed " << obj.getName() << std::endl;
    }catch(Form::GradeTooLowException &e)
    {
        std::cout << this->getName() << " couldn't sign " << obj.getName() << " because " << e.what() << std::endl ;
    }
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