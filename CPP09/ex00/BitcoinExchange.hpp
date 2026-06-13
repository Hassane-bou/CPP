#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <string>

class BitcoinExchange
{
    private:
        std::map<std::string, float> _data;
    
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &obj);
        BitcoinExchange& operator=(const BitcoinExchange &obj);

        void RunFile(const std::string file);
};
