#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Demo
{
private:
  int a;

public:
  int b;

  int getA()
  {
    return a;
  }

  void setA(int ua)
  {
    a = ua;
  }
};

int main()
{
  Demo obj;

  // obj.a = 10;

  obj.b = 10;
  cout << "obj b = " << obj.b;

  return 0;
}