#include "Base.hpp"


int main()
{
    srand(time(NULL));
    Base *p = generate();

    std::cout << "Via pointeur: ";
    
    identify(*p);


    std::cout << "Via Reference: ";
     
    identify(p);
  
    delete(p);

    return 0;
}