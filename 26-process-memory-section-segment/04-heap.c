// 01 Heap
#include <stdio.h>
#include <malloc.h>

int main(void)
{
  int *ptr = (int *)malloc(sizeof(int)); // 4 byte
  printf("ptr = %d\n", ptr);
  printf("*ptr = %d\n", *ptr);

  *ptr = 10;
  printf("ptr = %d\n", ptr);
  printf("*ptr = %d\n", *ptr);

  free(ptr);
  printf("ptr = %d\n", ptr);
  printf("*ptr = %d\n", *ptr);

  *ptr = 20;
  printf("ptr = %d\n", ptr);
  printf("*ptr = %d\n", *ptr);

  return 0;
}