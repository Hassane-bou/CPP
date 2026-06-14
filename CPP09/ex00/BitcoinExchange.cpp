#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::ifstream Filedata("data.csv");
    std::string line;

    std::getline(Filedata,line);

    while(std::getline(Filedata,line))
    {
        size_t separ = line.find(',');

        std::string data = line.substr(0,separ);
        std::string rate = line.substr(separ +1);

        float value = std::stof(rate);

        _data[data] = value;

    }
    Filedata.close();
}

BitcoinExchange::~BitcoinExchange() { }


int CheckDateValide(std::string date)
{
    size_t sepa = date.find('-');
    if(sepa == std::string::npos)
        return 0;
    int i = 0;
    int count = 0;
    while(date[i])
    {
        if(date[i] == '-')
            count++;
        i++;
    }
    if(count > 2)
        return 0;
    std::string year = date.substr(0,sepa);
    if(year.empty())
    {
        std::cout << "Erreur : Year not found!\n";
        return 0;
    }
    i = 0;
    while(year[i])
    {
        if(!(std::isdigit(year[i])))
        {
            std::cout << "Erreur: Year must be numbers!!\n";
            return 0;
        }
        i++;
    }
    std::string mounth = date.substr(sepa + 1,sepa - 2);
    
    std::string day = date.substr(sepa + 4);

    std::cout << year << std::endl;
    std::cout << mounth << std::endl;
    std::cout << day << std::endl;


    return 1;
}


void BitcoinExchange::RunFile(std::string file)
{
    std::ifstream Inputfile(file);
    std::string line;

    std::getline(Inputfile,line);
    if(line != "date | value")
    {
        std::cout << "Erreur: invalid file format\n";
        return;
    }
    while(std::getline(Inputfile,line))
    {
        size_t sep = line.find('|');
        if(sep == std::string::npos)
        {
            std::cout << "bad input\n";
            return ;

        }
        std::string date = line.substr(0,sep);
        if(CheckDateValide(date) == 0)
        {
            std::cout << "date Invalid\n";
            return ;
        }
        std::string value = line.substr(sep + 1);


        // float realvalue = std::stof(value);

    }
    Inputfile.close();
}