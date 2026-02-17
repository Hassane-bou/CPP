#include "Harl.hpp"

using namespace std;


void Harl::debug()
{
    cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << "\n";
}
void Harl::info()
{
    cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
                    "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << "\n";
}

void Harl::warning()
{
    cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
                    "years, whereas you started working here just last month." << "\n";
}

void Harl::error()
{
    cout << "This is unacceptable! I want to speak to the manager now." << "\n";
}

void Harl::complain(string level)
{
    string Elements[] = {"DEBUG","INFO","WARNING","ERROR"};

    void (Harl::*fptr[4])();
    fptr[0] = &Harl::debug;
    fptr[1] = &Harl::info;
    fptr[2] = &Harl::warning;
    fptr[3] = &Harl::error;


    for(int i = 0;i < 4 ;i++)
    {
        if(level == Elements[i])
        {
            (this->*fptr[i])();
            return;
        }
    }
        cout << "Element not found!!\n";
}