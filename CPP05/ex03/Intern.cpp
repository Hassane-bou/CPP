#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


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
    "Shrubbery Creation",
    "Robotomy request",
    "Presidential pardon"
};
AForm* (*function[3])(std::string) =
{
    CreateShrubbery,
    CreateRobotomyRequest,
    CreatePresidentialPardon
};

const char* Intern::FormNotFound::what() const throw()
{
    std::cout << "Form Not Found\n";
    return NULL;
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