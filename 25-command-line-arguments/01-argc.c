// Command Line Arguments

#include <stdio.h>
#include <string.h>
#include <windows.h>

// int main(void)
// argc = argument count
// argv = argument variables
int main(int argc, char *argv[]) // char* envp[]
{

  // argc

  printf("argc = %d\n", argc); // get argument count

  if (argc == 1)
  {
    printf("start WIFI\n");
  }
  else if (argc == 2)
  {
    printf("start Bluetooth\n");
  }
  else if (argc == 3)
  {
    printf("Open youtube.com\n");
    ShellExecuteA(NULL, "open", "https://youtube.com/", NULL, NULL, SW_SHOWDEFAULT);
  }

  int a;
  scanf("%d", &a);
  return 0;
}

// test.exe abc xyz // command
// test.exe abc xyz // argument = 2