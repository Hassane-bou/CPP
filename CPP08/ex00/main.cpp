#include "easyfind.hpp"


int main()
{
    std::vector<int> type;

    type.push_back(3);
    type.push_back(5);
    type.push_back(6);
    type.push_back(2);
    type.push_back(-1);

    easyfind(type,0);

    return 0;
}