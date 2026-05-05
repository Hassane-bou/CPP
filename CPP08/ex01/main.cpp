#include "Span.hpp"


int main()
{
        srand(time(NULL));
    try
    {
        int random = 0 ;
        Span sp = Span(10000);

        for(int i = 0; i < 10000;i++)
        {
            random =  rand() % 10000;
            std::cout << "random: " <<  random << std::endl;
            sp.AddNumber(random);
        }


        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longtestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
    

    return 0;
}