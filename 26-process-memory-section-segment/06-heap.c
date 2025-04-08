
#include <stdio.h>
#include <malloc.h>

int main(void)
{
  int *ptr1 = (int *)malloc(sizeof(int)); // 4 byte

  if (ptr1 == NULL)
  {
    printf("Memory Allocation failed\n");
    return 0;
  }

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

  if (ptr1 != NULL)
  {
    free(ptr1); // de-allocate
    ptr1 = NULL;
  }

  printf("Hello World");
  return 0;
}