#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"


int main()
{
    Bureaucrat a("norm",13);
    ShrubberyCreationForm S("test");
    
    a.signAForm(S);
    std::cout << "test"  << "\n";
    a.executeForm(S);
}