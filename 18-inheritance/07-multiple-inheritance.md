# Multiple Inheritance

Multiple Inheritance is a feature of C++ where a class can inherit from more than one classes.  The constructors of inherited classes are called in the same order in which they are inherited. 

## Syntax
```cpp
class Base1
{ 
... .. ... 
};

class Base2
{
... .. ...
};

class Derived: public Base1,public Base2
{
... ... ...
};
```


```cpp
#include <iostream>
using namespace std;

class Base1
{
public:
  int no1;
  int no2;

  Base1()
  {
    cout << "In Base1 Constructor" << endl; // 1
    // code
  }

  ~Base1()
  {
    cout << "In Base1 Destructor" << endl;
    // code
  }

  void Display()
  {
    cout << "In Base1 Display1()" << endl;
  }
};

class Base2
{
public:
  int no3;
  int no4;

  Base2()
  {
    cout << "In Base2 Constructor" << endl; // 2
    // code
  }

  ~Base2()
  {
    cout << "In Base2 Destructor" << endl;
    // code
  }

  void Display()
  {
    cout << "In Base Display2()" << endl;
  }
};

class Derived : public Base1, public Base2
{
public:
  Derived()
  {
    // Base1()
    // Base2()
    cout << "In Derived Constructor" << endl; // 3
  }

  ~Derived()
  {
    cout << "In Derived Destructor" << endl; // 4
    // Base2()
    // Base1()
  }
};

int main()
{
  Derived dObj;
  cout << "sizeof dObj = " << sizeof(dObj) << endl; // 16

  // dObj.Display1();
  // dObj.Display2();

  // dObj.Display();

  return 0;
}
```