#include <iostream>
#include <string>
#include "showarray.hpp"

void showarray(std::string frase)
{
    for (auto i=0; i< frase.length(); i++)
    {
        std::cout << frase[i] << " ";   
    }

    std::cout << "\n";
}