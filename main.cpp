/*
Author: John Zhou
Course: CSCI13500
Instructor: Prof. Zamansky
Assignment: LAB 2 TASK B
*/

#include <iostream>

#include "funcs.h"

void print_interval(int L, int U);

int main()
{
  std::cout << "print_interval(1,9) returns "; print_interval(1,9);
  std::cout << "print_interval(-5,6) returns "; print_interval(-5,6);
  std::cout << "print_interval(3,3) returns "; print_interval(3,3);
  std::cout << "print_interval(5,-31) returns "; print_interval(5,-31);

  return 0;
}
