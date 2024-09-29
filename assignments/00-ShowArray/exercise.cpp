#include <iostream>
#include "showarray.hpp"

int main() 
{
  int a[10];

  for (auto i=0; i<10; i++)
  {
    a[i]=i*2;
  }

  showarray(a);

  return 0;
}
