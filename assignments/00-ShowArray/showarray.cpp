#include <iostream>
#include "showarray.hpp"

void showarray(int a[10])
{
    for (auto i=0; i<10; i++)
    {
        std::cout << "a[" << i << "]=" << a[i] << "\n";
    }
}