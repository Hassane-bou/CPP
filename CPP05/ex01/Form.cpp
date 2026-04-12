#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string name,bool signe,const int GradeSigne,const int GradeExecute):
    _Name(name), _Signe(signe), _GradeSin(GradeSigne), _GradeEx(GradeExecute)
{
    std::cout << "Form constructor parameter called\n";
    if (_GradeSin < 1  || _GradeEx < 1)
        throw GradeTooHighException();
    if (_GradeSin > 150 || _GradeEx > 150)
        throw GradeTooLowException();
}

Form::~Form()
{
    std::cout << " Form Destructor Called\n";
}

Form::Form(const Form &obj):
    _Name(obj._Name), _Signe(obj._Signe), _GradeSin(obj._GradeSin), _GradeEx(obj._GradeEx)
{  
    std::cout << "Copy constructor Called\n";
}

Form &Form::operator=(const Form &obj)
{
    std::cout << "Copy assignement Called\n";
    if(this != &obj)
        this->_Signe = obj._Signe;
    return *this;
}

std::string Form::getName() const
{
    return _Name;
}

int Form::getGradeSin() const
{
    return _GradeSin;
}

int Form::getGradeEx() const
{
    return _GradeEx;
}

bool Form::isSigne()
{
    return _Signe;
}

void Form::beSigned(Bureaucrat &obj)
{
    if(obj.getGrade() > _GradeSin)
        throw GradeTooLowException();
    else
        _Signe = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return " Grade Too High !";
}

const char *Form::GradeTooLowException::what() const  throw()
{
    return " Grade Too Low !";
}


std::ostream& operator<<(std::ostream& os, const Form& obj)
{
    os << obj.getName() << ", Form grade Signe " << obj.getGradeSin();
    os << ", Form grade Execute " << obj.getGradeEx() << "\n";

    return os;  
}

