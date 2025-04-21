#include <iostream>
using namespace std;

/*
int Add1(int no1, int no2)
{
  return no1 + no2;
}

int Add2(int no1, int no2, int no3)
{
  return no1 + no2 + no3;
}
*/

// Name Mangling
int Addition(int no1, int no2)
{
  return no1 + no2;
}

float Addition(float no1, float no2)
{
  return no1 + no2;
}

int Addition(int no1, int no2, int no3)
{
  return no1 + no2 + no3;
}

int main()
{
  cout << Addition(10, 20) << endl;     // 30
  cout << Addition(10, 20, 30) << endl; // 60
  cout << Addition(10.4, 20.2) << endl; // 30.6

  return 0;
}