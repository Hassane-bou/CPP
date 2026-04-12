#include "Bureaucrat.hpp"


int main()
{
   try{
        Bureaucrat a("test",150);
        a.decrementGrade();
        std::cout << a;
   }
   catch(std::exception &e)
   {
    std::cout << e.what() << std::endl;
   }
}