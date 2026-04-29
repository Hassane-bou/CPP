#include <iostream>
#include <string>


template <typename T>
class Base{
    private:
        T element;

    public:
        Base(const T& elem) : element(elem){}

        T GetElement() const{
            return element;
        }  

        void SetElement(const T& elem){
            element = elem;
        }
        void display() const{
            std::cout << "Container holds: " << element << std::endl;
        }
};

int main()
{
    Base<int> intContiner(42);
    Base<std::string> stringContainer("Hello Templates");
    Base<double> doubleContainer(3.14159);

    intContiner.display();
    stringContainer.display();
    doubleContainer.display();



    intContiner.SetElement(100);
    stringContainer.SetElement("Updated string");

    std::cout << "\nAfter updates: " <<std::endl;

    intContiner.display();
    stringContainer.display();

}