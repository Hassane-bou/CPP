#include "Bureaucrat.hpp"
#include "Form.hpp"


int main()
{
    try{
        Bureaucrat a("hello" , 50);
        Form f("test",false , 40, 20);

        std::cout << a << std::endl;
        std::cout << f << std::endl;

        a.signForm(f);

        std::cout << f << std::endl;  


    }catch(std::exception &ex)
    {
        std::cout << "Exception: " << ex.what() << std::endl;
    }
}