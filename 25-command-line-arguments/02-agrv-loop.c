// Command Line Arguments

#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) // char* envp[]
{
  printf("argc = %d\n", argc); // by default 1
                               // printf("argv[0] = %s\n", argv[0]);

  // argv
  for (int iCounter = 0; iCounter < argc; iCounter++)
  {
    printf("argv[%d] = %s\n", iCounter, argv[iCounter]);
  }

  int a;
  scanf("%d", &a);
  return 0;
}