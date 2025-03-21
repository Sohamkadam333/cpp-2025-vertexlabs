// 1. Destructor.

#include <iostream>
using namespace std;

class Demo
{
public:
  int a;

  Demo()
  {
    cout << "In Default Constructor" << endl;
  }

  ~Demo()
  {
    cout << "In Destructor" << endl;
  }
};

int main(void)
{
  Demo obj1;

  {
    Demo obj2;
  }

  Demo obj3;

  return 0;
}