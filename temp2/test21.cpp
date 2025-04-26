// Function Overriding Example
// Run Time polymorphism
// virtual function
// upcasting
#include <iostream>
using namespace std;

class Base
{
public:
  int no1;
  int no2;

  // virtual function

  // 1000
  virtual void Display()
  {
    cout << "In base class display" << endl;
  }

  // 2000
  virtual void Show()
  {
    cout << "In Base class show" << endl;
  }

  // 3000
  void Hello()
  {
    cout << "In Base class Hello" << endl;
  }
};

class Derived : public Base
{
public:
  int no3;
  int no4;

  // 4000
  void Display()
  {
    cout << "In derived class display" << endl;
  }

  // 5000
  void Fun()
  {
    cout << "In Derived class fun" << endl;
  }

  // 6000
  virtual void Greet()
  {
    cout << "In Derived class Greet" << endl;
  }
};

int main()
{

  Derived dObj;

  // Upcasting means base class pointer poiting to derived class object
  Base *bPtr = &dObj;

  bPtr->Display(); // Derived
  bPtr->Show();    // Base show
  bPtr->Hello();   // Base Hello
  // bPtr->Fun(); // ERROR not present in base class
  // bPtr->Greet(); // ERROR not present in base class

  return 0;
}