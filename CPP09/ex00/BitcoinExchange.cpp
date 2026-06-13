#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::ifstream Filedata("data.csv");
    std::string line;

    std::getline(Filedata,line);

    while(std::getline(Filedata,line))
    {
        short virgule = line.find(',');

        std::string data = line.substr(0,virgule);
        std::string rate = line.substr(virgule +1);

        float value = std::stof(rate);

        _data[data] = value;

    }
    std::cout << _data["2018-03-10"] << std::endl;
    Filedata.close();
}

BitcoinExchange::~BitcoinExchange() { }


void BitcoinExchange::RunFile(std::string file)
{
    file = "test";
}