#include <iostream>
using namespace std;

class Base
{
public:
  int no1;
  int no2;

  Base()
  {
    cout << "In Base Constructor" << endl; // 1
  }

  ~Base()
  {
    cout << "In Base Destructor" << endl; // 4
  }

  void Display()
  {
    cout << "In Base Display()" << endl;
  }
};

class Derived : public Base
{
public:
  int no3;
  int no4;

  Derived()
  {
    // Base();
    cout << "In Derived Constructor" << endl; // 2
  }

  ~Derived()
  {
    cout << "In Derived Destructor" << endl; // 3
    // code
    // ~Base()
  }

  void Display()
  {
    cout << "In Derived Display()" << endl;
  }
};

int main()
{

  // Base bObj;
  //  cout << "sizeof bObj = " << sizeof(bObj) << endl;

  Derived dObj;
  // cout << "sizeof dObj = " << sizeof(dObj) << endl;
  // dObj.Display();

  return 0;
}