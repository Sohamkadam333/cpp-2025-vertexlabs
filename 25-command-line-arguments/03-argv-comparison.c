// Command Line Arguments

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) // char* envp[]
{
  printf("argc = %d\n", argc); // by default 1
  // printf("argv[0] = %s\n", argv[0]);

  if (strcmp(argv[1], "c") == 0)
  {
    printf("Learning C Programming language");
  }
  else if (strcmp(argv[1], "c++") == 0)
  {
    printf("Learning C++ Programming language");
  }
  else if (strcmp(argv[1], "java") == 0)
  {
    printf("Learning Java Programming language");
  }

  int a;
  scanf("%d", &a);
  return 0;
}