#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):
    AForm("RobotmyRequestForm",false,72,45), _target(target){}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj):
    AForm(obj),_target(obj._target){}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    if(this != &obj)
    {
        AForm::operator=(obj);
        this->_target = obj._target;
    }
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