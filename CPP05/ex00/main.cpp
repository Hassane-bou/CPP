#include "Bureaucrat.hpp"


int main()
{
   try{
        Bureaucrat a("test",-5);
        a.incrementGrade();
        std::cout << a;
        a.decrementGrade();
        std::cout << a;

   }
   catch(std::exception &e)
   {
    std::cout << e.what() << std::endl;
   }
}