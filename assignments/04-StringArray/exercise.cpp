#include <iostream>
#include <string>
#include "showarray.hpp"

int main() 
{
  std::string frase{"Pensamiento computacional orientado a objetos"};

  std::cout << "El tamaño de la frase es:" << frase.length() << "\n";

  showarray(frase);

  return 0;
}
