#pragma once

#include "AForm.hpp"


class RobotomyRequestForm: public AForm
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm& obj);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
        void execute(Bureaucrat const &executor) const ;

};