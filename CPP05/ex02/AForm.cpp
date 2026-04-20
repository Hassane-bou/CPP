#include "AForm.hpp"


AForm::AForm(const std::string name,bool isSigne, const int gradeToSign, const int gradeToExec):
    _Name(name),_isSigne(isSigne),_gradeToSign(gradeToSign),_gradeToExecute(gradeToExec)
{
    if(_gradeToSign < 1 || _gradeToExecute < 1)
        throw GradeTooHighException();
    if(_gradeToSign > 150 || _gradeToExecute > 150)
        throw GradeTooLowException();
}

AForm::~AForm(){}

AForm::AForm(const AForm &obj):
    _Name(obj._Name),_isSigne(obj._isSigne),_gradeToSign(obj._gradeToSign),_gradeToExecute(obj._gradeToExecute)
{
}

AForm& AForm::operator=(const AForm &obj)
{
    if(this != &obj)
        this->_isSigne = obj._isSigne;
    return (*this);
}

std::string AForm::getName() const
{
    return _Name;
}

bool AForm::getSigne() const
{
    return _isSigne;
}

int AForm::getGradeToSign() const
{
    return _gradeToSign;
}

int AForm::getGradeToExec() const
{
    return _gradeToExecute;
}

void AForm::beSigned(Bureaucrat& Bur)
{
    if(Bur.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    else
        _isSigne = true;

}

void AForm::checkExecute(Bureaucrat const &executor) const
{
    if(_isSigne == false)
        throw FormNotSignedException();
    if(executor.getGrade() > _gradeToExecute)
        throw GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Grade Too High !";
}

const char  *AForm::GradeTooLowException::what() const throw()
{
    return "Grade Too Low !";
}

const char *AForm::FormNotSignedException::what() const throw()
{
    return "Form Not Signed! ";
}

std::ostream& operator<<(std::ostream& os, const AForm &obj)
{
    os << obj.getName() << " AForm  grade Signe " << obj.getGradeToSign() << ", Form grade Execute " << obj.getGradeToExec() << std::endl;
    return os;
}