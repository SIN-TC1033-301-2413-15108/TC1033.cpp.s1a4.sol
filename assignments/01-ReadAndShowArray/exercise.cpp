#include <iostream>
#include "showarray.hpp"

int main() 
{
  int a[10];

  for (auto i=0; i<10; i++)
  {
    std::cout << "a[" << i << "]:";
    std::cin >> a[i];
  }

  showarray(a);

  return 0;
}
