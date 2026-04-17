#include "AForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try
    {
        Intern inter;
        Bureaucrat b("boss",1);

        AForm* f= inter.makeForm("shrubbery creation", "home");

        b.signAForm(*f);
        b.executeForm(*f);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
}
