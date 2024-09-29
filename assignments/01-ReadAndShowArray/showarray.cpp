#include <iostream>
#include "showarray.hpp"

void showarray(int a[10])
{
    int suma{0};

    for (auto i=0; i<10; i++)
    {
        std::cout << "a[" << i << "]=" << a[i] << "\n";
        suma += a[i];
    }

    std::cout << "La suma total de elementos es igual a " << suma << "\n";
}