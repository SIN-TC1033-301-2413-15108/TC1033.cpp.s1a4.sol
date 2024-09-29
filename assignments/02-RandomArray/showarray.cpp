#include <iostream>
#include "showarray.hpp"

void showarray(int a[10])
{
    float suma{0};

    for (auto i=0; i<50; i++)
    {
        std::cout << "a[" << i << "]=" << a[i] << "\n";
        suma += a[i];
    }

    std::cout << "El promedio de los valores aleatorios es " << suma / 50 << "\n";
}