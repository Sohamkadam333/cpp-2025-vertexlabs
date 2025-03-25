// new
#include <iostream>
using namespace std;

int main(void)
{
  int *ptr1 = new (nothrow) int[99999999]; // 4 * 99999999 bytes.
  if (ptr1 != NULL)
  {
    cout << "ptr1 address = " << ptr1 << endl;
  }
  else
  {
    cout << "Memory allocation failed ptr1" << endl;
  }

  int *ptr2 = new (nothrow) int[99999999]; // 4 * 99999999 bytes.
  if (ptr2 != NULL)
  {
    cout << "ptr2 address = " << ptr2 << endl;
  }
  else
  {
    cout << "Memory allocation failed ptr2" << endl;
  }

  int *ptr3 = new (nothrow) int[99999999]; // 4 * 99999999 bytes.
  if (ptr3 != NULL)
  {
    cout << "ptr3 address = " << ptr3 << endl;
  }
  else
  {
    cout << "Memory allocation failed ptr3" << endl;
  }

  int *ptr4 = new (nothrow) int[99999999]; // 4 * 99999999 bytes.
  if (ptr4 != NULL)
  {
    cout << "ptr4 address = " << ptr4 << endl;
  }

  int *ptr5 = new (nothrow) int[99999999]; // 4 * 99999999 bytes.
  if (ptr5 != NULL)
  {
    cout << "ptr5 address = " << ptr5 << endl;
  }

  return 0;
}