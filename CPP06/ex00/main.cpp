#include "ScalarConverter.hpp"



int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        std::cout << "Error: Number of argument you must use just two argument !!" << std::endl ;
        return 1;
    }
    std::string input  = argv[1];
    

    ScalarConverter::convert(input);

}

