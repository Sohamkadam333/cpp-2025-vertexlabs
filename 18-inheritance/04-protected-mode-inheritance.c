#include <iostream>
using namespace std;

class Base
{
private:
  int no1;
  void priDisplay()
  {
    cout << "In Base priDisplay" << endl;
  }

protected:
  int no2;
  void proDisplay()
  {
    cout << "In Base proDisplay" << endl;
  }

public:
  int no3;
  void pubDisplay()
  {
    cout << "In Base pubDisplay" << endl;
  }
};

// class Derived : Base // by default private
class Derived : protected Base
{
public:
  void Diplay1()
  {
    proDisplay();
  }

  void Display2()
  {
    pubDisplay();
  }
};

int main()
{

  Base bObj;
  cout << "sizeof bObj = " << sizeof(bObj) << endl;

  // cout << "no1 = " << bObj.no1 << endl; // error: 'int Base::no1' is private within this context
  // bObj.priDisplay(); // error: 'int Base::no1' is private within this context

  // cout << "no2 = " << bObj.no2 << endl; // error: 'int Base::no2' is protected within this context
  // bObj.proDisplay(); // error: 'void Base::proDisplay()' is protected within this context

  cout << "no3 = " << bObj.no3 << endl;
  bObj.pubDisplay();

  Derived dObj;
  cout << "sizeof dObj = " << sizeof(dObj) << endl;

  // cout << "no1 = " << dObj.no1 << endl; //  error: 'int Base::no1' is private within this context
  // dObj.priDisplay();                    // error: 'void Base::priDisplay()' is private within this context

  // cout << "no2 = " << dObj.no2 << endl; // error: 'int Base::no2' is protected within this context
  // dObj.proDisplay();                    // error: 'void Base::proDisplay()' is protected within this context

  // cout << "no3 = " << dObj.no3 << endl; // error: 'int Base::no3' is inaccessible within this context
  // dObj.pubDisplay(); //  error: 'void Base::pubDisplay()' is inaccessible within this context

  dObj.Display2();

  return 0;
}