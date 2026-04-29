#include <iostream>
#include <string>


template<typename T>
class Printer {
    public:
        void print(const T& value)
        {
            std::cout << "Generic: " << value << std::endl;
        }
};

template<>
class Printer<std::string>
{
    public:
        void print(const std::string& value)
        {
            std::cout << "String: \"" << value << "\"" << std::endl;
        }
};

template<>
class Printer<bool>
{
    public:
        void print(const bool& value)
        {
            std::cout << "Boolean: " << (value ? "true" : "false") << std::endl;
        }
};

int main()
{
    Printer<int> intprint;
    Printer<std::string> stringPrint;
    Printer<bool> boolPrint;
    Printer<double> doublePrint;


    intprint.print(12);
    stringPrint.print("hello world!");
    boolPrint.print(0);
    doublePrint.print(3.4);

    return 0;
}