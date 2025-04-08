// 01 Heap
#include <stdio.h>
#include <malloc.h>

int main(void)
{
  int *ptr1 = (int *)malloc(sizeof(int)); // 4 byte
  printf("ptr1 = %d\n", ptr1);
  printf("*ptr1 = %d\n", *ptr1);

  {
    int a = 20;
  }

  // more 100 lines

  int b = 40;

  *ptr1 = 100;
  printf("ptr1 = %d\n", ptr1);
  printf("*ptr1 = %d\n", *ptr1);

  // more 100 lines

  {
    int c = 30;
  }

  int *ptr2 = (int *)malloc(sizeof(int) * 100); // 400 byte

  ptr1 = NULL;
  printf("ptr1 = %d\n", ptr1);
  printf("*ptr1 = %d\n", *ptr1);

  *ptr1 = 400;
  printf("ptr1 = %d\n", ptr1);
  printf("*ptr1 = %d\n", *ptr1);

  printf("Hello World");

  // memory leak.
  // more 1000 line code.
  return 0;
}