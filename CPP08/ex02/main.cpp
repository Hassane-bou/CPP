#include"MutantStack.hpp"


int main()
{

    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() <<std::endl;

    mstack.pop();

    std::cout << mstack.size() <<std::endl;

    mstack.push(3);
    mstack.push(5);

    mstack.push(0);
    mstack.push(737);


    std::cout << mstack.top() <<std::endl;

    return 0;
}