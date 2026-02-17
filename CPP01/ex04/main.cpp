#include <iostream>
#include <fstream>

int main(int argc,char *argv[])
{
    if(argc != 4)
    {
        std::cout << "Arguments must be four !!!\n";
        return 1;
    }
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if(s1.empty())
    {
        std::cout << "Can't used empty string\n";
        return 1;
    }

    std::ifstream Readfile(argv[1]);
    if(!Readfile.is_open())
    {
        std::cout << "Can't open this File!!\n";
        return 1;
    }
    std::string content;
    std::string line;
    while(getline(Readfile,content))
    {
        line += content + "\n";
    }
    size_t pos = line.find(s1);
    while(pos != std::string::npos)
    {
        line.erase(pos,s1.length());
        line.insert(pos,s2);
        pos = line.find(s1, pos + s2.length());
    }
    std::string newFileName = std::string (argv[1]) + ".replace";
    std::ofstream MyNewfile(newFileName);
    MyNewfile << line;
    return 0;
}