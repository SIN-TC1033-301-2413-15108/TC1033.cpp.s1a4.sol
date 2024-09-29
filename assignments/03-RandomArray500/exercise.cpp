#include <iostream>
#include <cstdlib>
#include "showarray.hpp"

int main() 
{
  int a[25];

// Usando la hora actual como semilla para el generador de números aleatorios
  srand(time(0));

  for (auto i=0; i<25; i++)
  {
    a[i]=rand() % 500;
  }

  showarray(a);

  return 0;
}
