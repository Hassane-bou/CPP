#include "Harl.hpp"


int main(int argc,char *argv[])
{
    if(argc != 2)
    {
        std::cout << "Can't use more the two parameters!!\n";
        return 1;
    }
    Harl h;
    h.complain(argv[1]);
    return 0;
}