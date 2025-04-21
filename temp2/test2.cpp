// Name Mangling
#include <iostream>
using namespace std;

// Add_1i
int Add(int no1)
{
  cout << "In Add 1 param" << endl;
  return 0;
}

// Add_2i
int Add(int no1, int no2)
{
  cout << "In Add 2 param" << endl;
  return no1 + no2;
}

int main()
{

  Add(10);     // Add_1i(10)     // "In Add 2 param" << endl; 10
  Add(10, 20); // Add_2i(10,20) // "In Add 2 param" << endl; 30
  return 0;
}
