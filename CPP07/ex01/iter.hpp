#pragma once

#include <iostream>


template <typename T,typename F>
void iter(T *arr,const int length,F function)
{
    for(int  i = 0; i < length ; i++)
    {
        function(arr[i]);
    }
}
