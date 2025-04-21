#include <stdio.h>

void Hello()
{
  printf("Hello1");
}

void Hello(int x)
{
  printf("Hello2");
}

int main()
{
  Hello();
  return 0;
}