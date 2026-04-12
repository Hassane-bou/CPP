#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


int main()
{
    srand((unsigned)time(NULL));
    Bureaucrat a("norm",13);
    ShrubberyCreationForm S("test");
    
    a.signAForm(S);
    std::cout << "test"  << "\n";
    a.executeForm(S);
}