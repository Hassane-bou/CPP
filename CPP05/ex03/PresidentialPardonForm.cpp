#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
AForm("Zaphod Beeblebrox",false,25,5), _target(target){}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj):
AForm(obj),_target(obj._target){}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    if(this != &obj)
    {
        AForm::operator=(obj);
        this->_target = obj._target;
    }
    return(*this);
}


void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    checkExecute(executor);

    std::cout << _target << " has been pardoned by Zaphod Beeblebrox " << std::endl;
}

