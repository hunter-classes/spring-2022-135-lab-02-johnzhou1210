#include <iostream>

int main()
{
  int end = 60;
  int fib[end];

  fib[0] = 0;
  fib[1] = 1;

  for (int i = 2; i < end; i++)
  {
    fib[i] = fib[i - 1] + fib[i - 2];
  }

  for (int elem : fib)
  {
    std::cout << elem << "\n";
  }

  // As the numbers approach two billions, the numbers are alternating between becoming negative and positive. For example, after 1134903170 and 1836311903, the next number printed out was -1323752223. This happens because once the integer reaches its max value which is 2147483647, adding 1 to this number results in -2147483648. The number goes to the negative extreme once it exceeds the positive extreme.

  return 0;
}
