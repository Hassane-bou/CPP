#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Intern::Intern(const Intern &obj)
{
    (void)obj;
}

Intern& Intern::operator=(const Intern& obj)
{
    (void)obj;
    return (*this);
}

AForm* CreateShrubbery(std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm *CreateRobotomyRequest(std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm *CreatePresidentialPardon(std::string target)
{
    return new PresidentialPardonForm(target);
}

std::string names[3] =
{
    "shrubbery creation",
    "robotomy request",
    "presidential pardon"
};
AForm* (*function[3])(std::string) =
{
    CreateShrubbery,
    CreateRobotomyRequest,
    CreatePresidentialPardon
};

const char* Intern::FormNotFound::what() const throw()
{
     return " Form Not Found ";
}


AForm* Intern::makeForm(std::string nameForm,std::string targetForm)
{

    for (int i = 0 ; i < 3 ; i++)
    {
        if(nameForm ==  names[i])
        {
            std::cout << " Intern Creates " << nameForm << std::endl;
            return (function[i])(targetForm);
        }
    }
    throw FormNotFound();

}