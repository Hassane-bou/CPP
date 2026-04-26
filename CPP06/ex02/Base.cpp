#include "Base.hpp"

Base::~Base(){}

 Base* generate(void)
{
    int randomNumber = std::rand() % 3;

    if(randomNumber == 0)
        return  new A;
    else if(randomNumber ==1)
        return new B;
    else
        return new C;

}
    
void identify(Base* p)
{
    if(dynamic_cast<A*>(p) != NULL)
    {
        std::cout << "A" << std::endl;
        return ;    
    }
    if(dynamic_cast<B*>(p) != NULL)
    {
        std::cout << "B" << std::endl;
        return;
    }
    if(dynamic_cast<C*>(p) != NULL)
    {
        std::cout << "C" << std::endl;
        return;
    }
}

void identify(Base& p)
{
    try{
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(...)
    {}

    try{
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }catch(...){}


    try{
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }catch(...){}
}