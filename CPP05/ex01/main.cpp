#include "Bureaucrat.hpp"
#include "Form.hpp"


int main()
{
    try{
        Bureaucrat a("hello" , 130);
        Form f("test",false , 12, 20);

        a.incrementGrade();
        a.signForm(f);
        std::cout << a;

    }catch(std::exception &ex)
    {
        std::cout << "Exception: " << ex.what() << std::endl;
    }
}