#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade):
    _Name(name),_Grade(grade){
        if(_Grade < 1)
            throw GradTooHighException();
        if(_Grade > 150)
            throw GradeTooLowException();
    }   

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(const Bureaucrat& obj):
    _Name(obj._Name),_Grade(obj._Grade){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &obj)
{
    if(this != &obj)
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
    if(_Grade > 150)
        throw GradeTooLowException();
    _Grade++;
}


void Bureaucrat::decrementGrade()
{
    if(_Grade < 1)
        throw GradTooHighException();
    _Grade--;
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

const char* Bureaucrat::GradTooHighException::what() const throw()
{
    return "Grade Too High !";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade Too Low !";
}

std::ostream& operator<<(std::ostream &os,const Bureaucrat &obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
    return os;
}

