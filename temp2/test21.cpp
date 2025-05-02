#include <iostream>
using namespace std;

class Demo
{
public:
  int no;

  Demo()
  {
    cout << "In default constructor" << endl;
    no = 0;
    cout << "Out default constructor" << endl;
  }

  Demo(int x)
  {
    cout << "In Parameterized constructor" << endl;
    no = x;
    cout << "Out Parameterized constructor" << endl;
  }

  // a + b = here + is binary operator
  // Binary + Operator Overloading

  Demo operator+(Demo &refObj)
  {
    cout << "In + overloaded operator" << endl;
    Demo tempObj;
    tempObj.no = no + refObj.no;

    cout << "Out + overloaded operator" << endl;
    return tempObj;
  }
};

int main(void)
{
  cout << "In main" << endl;
  Demo d1(10);
  Demo d2(20);

  // Demo d3 = d1 + d2; // Error
  /*
  Demo' is not derived from 'std::__cxx11::basic_string<_CharT, _Traits, _Alloc>'
   Demo d3 = d1 + d2;
  */

  Demo d3 = d1 + d2;

  cout << "d3 no = " << d3.no << endl;

  cout << "Out main" << endl;
  return 0;
}