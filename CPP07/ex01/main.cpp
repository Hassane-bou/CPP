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

// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }

// template< typename T >
// void print( T& x )
// {
//   std::cout << x << std::endl;
//   return;
// }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];

//   iter( tab, 5, print<const int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }