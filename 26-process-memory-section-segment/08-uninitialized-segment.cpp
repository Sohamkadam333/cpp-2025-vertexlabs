
#include <stdio.h>

int iNo1;        // uninitialized data segment by default 0
static int iNo2; // uninitialized data segment by default 0

int iNo5 = 10;         // initialized data segment
static int iNo5 = 100; // initialized data segment

int main(void)
{

  int iNo3; // stack segment by default garbage
  {
    static int iNo4; // uninitialized data segment by default 0
  }
  // iNo4 = 100; cannot access.
  return 0;
}
