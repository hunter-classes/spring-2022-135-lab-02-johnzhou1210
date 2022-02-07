/*
Author: John Zhou
Course: CSCI13500
Instructor: Prof. Zamansky
Assignment: LAB 2 TASK C
*/

#include <iostream>

int main()
{
  int arrSize = 10;
  int myData[arrSize];
  for (int i = 0; i < arrSize; i++)
  {
    myData[i] = 1;
  }

  int i,v;
  do
  {
    std::cout << "================================\n";
    for (int i = 0; i < arrSize; i++)
    {
      std::cout << myData[i] << " ";
    }
    std::cout << "\n";

    std::cout << "Input cell index: ";
    std::cin >> i;
    std::cout << "Input new value: ";
    std::cin >> v;
    myData[i] = v;

  } while (i >= 0 && i < arrSize);
  std::cout << "Invalid cell index! Exiting program.\n";


  return 0;
}
