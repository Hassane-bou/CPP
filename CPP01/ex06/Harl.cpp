#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << "\n";
}
void Harl::info()
{
    std::cout << "\nI cannot believe adding extra bacon costs more money. You didn’t put"
                    "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << "\n";
}

void Harl::warning()
{
    std::cout << "\nI think I deserve to have some extra bacon for free. I’ve been coming for"
                    "years, whereas you started working here just last month." << "\n";
}

void Harl::error()
{
    std::cout << "\nThis is unacceptable! I want to speak to the manager now." << "\n";
}

void Harl::complain(std::string level)
{
    std::string Element[] = {"DEBUG","INFO","WARNING","ERROR"};
    
    int i;
    for(i = 0; i < 4 ; i++)
    {
        if(level == Element[i])
            break;
    }
    switch(i){
        case 0:
            Harl::debug();
        case 1:
            Harl::info();
        case 2:
            Harl::warning();
        case 3 :
            Harl::error();
            break;
        default:
            std::cout << " [Probably complaining about insignificant problems ]";
    }
}