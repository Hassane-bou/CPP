#include <iostream>

class Box{
    private:
        int *value;
    public:
        Box (int val);
        Box(const Box& other);
        Box& operator =(const Box& other);
        ~Box();
        void  show() const;

};

Box::Box(int val)
{
    std::cout << "Constructor called\n";
    value = new int(val);
}
Box::Box(const Box &other)
{
    std::cout << "Copy constructor called\n";
    value = new int(*other.value);
}

 Box& Box::operator=(const Box& other)
 {
    std::cout << "copy assignment operator called\n";
    if(this != &other)
    {
        delete value;
        value = new int (*other.value);
    }
    return *this;
 }

 Box ::~Box()
 {
    std::cout << "Destructor called\n";
    delete value;
 }

 void Box::show() const{
    std::cout << "Box value: " << *value << "\n";
 }

 int main()
 {
    Box a(100);
    Box b = a;
    Box c(999);
    c = a;

    a.show();
    b.show();
    c.show();

    return 0;
 }