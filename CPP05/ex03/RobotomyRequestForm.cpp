#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):
    AForm("RobotmyRequestForm",false,72,45), _target(target)
{
    std::cout << "RobotomyRequestForm Constructor parameter called\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Destructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj):
    AForm(obj),_target(obj._target)
{
    std::cout << "RobotomyRequestForm  Copy constructor called\n";
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    std::cout << "RobotomyRequestForm Copy Assignement Called\n";
    if(this != &obj)
        this->_target = obj._target;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    checkExecute(executor);

    std::cout << "DRRRRRRRRRRRR.......!" << std::endl;

    if(rand() % 2 == 0)
        std::cout << _target << " has been robotomized successfully " << std::endl;
    else
        std::cout << _target << " robotomy failed " << std::endl;

}