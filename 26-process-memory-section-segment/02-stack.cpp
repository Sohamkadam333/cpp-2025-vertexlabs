// 01 Stack
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
  int a = 10;
  int b = 20;

  {
    int c = 20;
  }

  a = 30;
  b = 40;
  // c = 50; // error

  return 0;
}