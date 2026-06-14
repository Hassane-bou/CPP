#include "BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        std::cout << "Erreur: file not found , you must be added file en second parameter!!" << std::endl;
        return 1;
    }

    BitcoinExchange Bitcoin;
    
    Bitcoin.RunFile(argv[1]);


    return 0;
    

}