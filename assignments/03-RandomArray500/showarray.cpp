#include <iostream>
#include "showarray.hpp"

void showarray(int a[25])
{
    int mayor{a[0]}, pos{0};

    for (auto i=0; i<25; i++)
    {
        std::cout << "a[" << i << "]=" << a[i] << "\n";
        if (a[i] > mayor) {
            mayor = a[i];
            pos = i;
        }
    }

    std::cout << "El valor mayor es el " << mayor << " y está en la posición " << pos << "\n";
}