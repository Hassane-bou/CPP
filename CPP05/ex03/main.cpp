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
    Intern someRandomIntern;
    AForm* test;
    test = someRandomIntern.makeForm("Robotomy request", "Bender");
    if(test)
        delete test;
    }catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
}
