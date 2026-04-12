#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
AForm("Zaphod Beeblebrox",false,25,5), _target(target)
{
    std::cout << "PresidentialPardonForm Constructor parametre Called\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Destructor Called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj):
AForm(obj),_target(obj._target)
{
    std::cout << "PresidentialPardonForm Copy contructor called\n";
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    std::cout << "PresidentialPardonForm copy assignment called\n";
    this->_target = obj._target;
    return(*this);
}


void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    checkExecute(executor);

    std::cout << _target << " has been pardoned by Zaphod Beeblebrox " << std::endl;
}

