#include "iter.hpp"


int max(int arr[])
{
    int max = 0;
    for(int i = 1 ; i <= 4 ;i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}
void printMax(int element)
{
    std::cout << element  << std::endl ;
}

int main()
{
    int arr[] ={3,6 ,-2,1};

    // std::cout << "Max value is: " << max(arr) << std::endl;

    iter(arr,4,printMax);
    std::cout << "\n";

}