#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade):
    _Name(name),_Grade(grade)
{
    // std::cout << "Bureaucrat Constructor Called\n";
}   

Bureaucrat::~Bureaucrat()
{
    // std::cout << "Bureaucrat Destructor Called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj):
    _Name(obj._Name),_Grade(obj._Grade)
{
    std::cout << "Bureaucrat copy constructor Called\n";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &obj)
{
    std::cout << "Bureaucrat Copy assignement Called\n";
    this->_Grade = obj._Grade;
    return(*this);
}

std::string Bureaucrat::getName() const
{
    return _Name;
}

int Bureaucrat::getGrade() const
{
    return _Grade;
}


void Bureaucrat::incrementGrade()
{
    _Grade++;
    if(_Grade > 150)
        throw GradeTooLowException();
}


void Bureaucrat::decrementGrade()
{
    _Grade--;
    if(_Grade < 1)
        throw GradTooHighException();
}

void Bureaucrat::signAForm(AForm &other)
{
    try
    {
        other.beSigned(*this);
        std::cout << _Name << " signed " << other.getName() << std::endl;
    }
    catch(AForm::GradeTooLowException &e)
    {
        std::cout << _Name << " couldn't sign " << other.getName() << " because " << e.what() << std::endl;
    }
    
}
void Bureaucrat::executeForm(AForm const &form) const
{
    try
    {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cout << this->getName() << " cannot excuted  " << form.getName() << " because " << e.what() << std::endl ;
    }
    
}


