#include <iostream>
#include <string>
#include <array>

template<typename T>
T Mymax(const T& a,const T& b){
    return (a < b) ? b : a;
}

template <typename T>
void swap(T& a, T& b)
{
    T temp = a;
        a  = b;
        b = temp;
}

template <typename T>
void PrintValue(const T& value)
{
    std::cout << "Value: " << value << std::endl;
}



template<typename T>
T convert(double value)
{
    return static_cast<T>(value);
}
template<typename T,typename U>
T add(T a,U b)
{
    return a + static_cast<T>(b);
}

template<typename T, size_t N>
void printArray(const std::array<T, N>& arr)
{
    std::cout << "Array of " << N << " elements: ";
    for(size_t i = 0 ; i < N ;i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}



int main()
{
    int x = 5, y = 10;
    std::cout << "Max of: " << x << " and " << y << " is: " << Mymax(x,y) << std::endl;

    double d1 = 3.14, d2 = 2.71;
    std::cout << "Max of " << d1 << " and " << d2 << " is " << Mymax(d1,d2) << std::endl;


    std::string s1 = "hello" ,s2 = "world";

    std::cout << "Max of " << s1 << " and " << s2 << " is: " << Mymax(s1,s2) << std::endl;


    std::cout << "\nBefore swap x= " << x << ", y= " << y << std::endl;
    swap(x,y);
    std::cout << "\nAfter swap x= " << x << ", y= " << y <<std::endl;

    PrintValue(42);
    PrintValue(3.16);
    PrintValue("Hello World!");


    int intValue = convert<int>(3.14);
    char charValue = convert<char>(65.7);


    std::cout << "Converted to int: " << intValue << std::endl;
    std::cout << "Converted to char: " << charValue << std::endl;


    int result = add<int, double>(5, 3.14);
    std::cout << "5 + 3.14 = " << result << std::endl;



    std::array<int ,5> intArr ={1, 2, 3, 4, 5};
    std::array<double, 3> doubleArr ={1.1, 2.2, 3.3};

    printArray(intArr);
    printArray(doubleArr);

    return 0;
}