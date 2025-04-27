
#include <iostream>
using namespace std;

// Abstract Class
class Base
{
public:
  int no1;

  virtual void Display() = 0; // pure virtual function
};

class Derived : public Base
{
public:
  int no2;

  void Show()
  {
    cout << "Hello From Derived Show" << endl;
  }

  void Display()
  {
    cout << "In Derived Display" << endl;
  }
};

int main(void)
{
  Derived dObj;
  dObj.Display();

  return 0;
}