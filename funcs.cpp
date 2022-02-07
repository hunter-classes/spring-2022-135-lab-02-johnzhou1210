#include <iostream>

#include "funcs.h"

void print_interval(int L, int U)
{
  if (L >= U)
  {
    std::cout << "nothing because L >= U";
  }
  for (int i = L; i < U; i++)
  {
    std::cout << i << " ";
  }
  std::cout << "\n";
}
