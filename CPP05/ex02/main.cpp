#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


int main()
{
    srand(time(NULL));

    Bureaucrat a("norm",15);
    RobotomyRequestForm R("test");

    a.signAForm(R);
    a.executeForm(R);

}