#include "templat.hpp"

int main()
{
    Mycontainer<int> intContainer(5);
    Mycontainer<std::string >stringContainer(3);


    intContainer.add(10);
    intContainer.add(20);
    intContainer.add(30);

    stringContainer.add("First");
    stringContainer.add("Second");


    intContainer.display();
    stringContainer.display();


    std::cout << "First int: " << intContainer.get(0) << std::endl;
    std::cout << "Second string: " << stringContainer.get(1) << std::endl;

    return 0;
}
