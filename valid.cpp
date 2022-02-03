/*
Author: John Zhou
Course: CSCI13500
Instructor: Prof. Zamansky
Assignment: LAB 2 TASK A
*/

#include <iostream>

int main()
{
  int input;
  std::cout << "Please enter integer: ";
  std::cin >> input;
  while (input <= 0 || input >= 100)
  {
    std::cout << "Please re-enter integer: ";
    std::cin >> input;
  }
  std::cout << "Number squared is " << input * input << "\n";
}
