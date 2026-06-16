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

    if(date.size() != 10)
        return 0;

    if(date[4] != '-' || date[7] != '-')
        return 0;

    for(int i = 0; i < 4;i++)
        if(!std::isdigit(date[i])) { return 0;}
    
    for(int i = 5; i < 7;i++)
        if(!std::isdigit(date[i])) {return 0;}

    for(int i = 8; i < 10 ; i++)
        if(!std::isdigit(date[i])) {return 0;}

    int M = std::atoi(date.substr(5,2).c_str());
    int D = std::atoi(date.substr(8,2).c_str());

    if(M <= 0 || M > 12)
        return 0;
    if(D <= 0 || D > 31)
        return 0;

    return 1;
}
int CheckValueValide(std::string value)
{
    return 0;
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
            continue;
        }
        std::string date = line.substr(0,sep);
        while(!date.empty() && date[date.size() - 1] == ' ')
            date.erase(date.size() - 1);
        if(CheckDateValide(date) == 0)
        {
            std::cout << "date Invalid\n";
            return ;
        }

        std::string value = line.substr(sep + 1);
        while(!value.empty() && value[value.size() - 1] == ' ')
            value.erase(value.size() - 1);
        if(CheckValueValide(value) == 0)
        {
            std::cout << "Erreur : Invalid input Value!\n";
            continue;
        }
        float realvalue = std::stof(value);

        std::cout << realvalue << std::endl;
        if(realvalue <= 0 || realvalue > 1000)
        {
            std::cout << "Erreur: Value must be between 0 and 1000!!\n";    
            return;
        }

    }
    Inputfile.close();
}