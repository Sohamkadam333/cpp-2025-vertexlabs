
#include <iostream>
using namespace std;
#include <malloc.h>

int main(void)
{
  // int *ptr1 = (int *)malloc(sizeof(int)); // 4 byte // C style
  int *ptr1 = new int;      // C++ style
  int *ptr2 = new int[100]; // 400 bytes

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
    // free(ptr1); // de-allocate C style
    delete ptr1;
    ptr1 = NULL;
  }

  if (ptr2 != NULL)
  {
    delete[] ptr2;
    ptr2 = NULL;
  }

  printf("Hello World");
  return 0;
}