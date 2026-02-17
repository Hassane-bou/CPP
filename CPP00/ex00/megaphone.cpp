#include <iostream>
#include <string>


int main(int argc,char  **argv)
{
    if(argc == 1)
        return  1;
    char *str;
    for(int i = 1;argv[i];i++)
    {
        str = argv[i];
        for(int j = 0;str[j] != '\0';j++)
        {
            str[j] = toupper(str[j]);
        }
        std::cout << str ;
    }
    std:: cout << std ::endl;

    return 0;
}