# Hierarchical Inheritance

In Hierarchical inheritance, more than one sub-class inherits the property of a single base class. There is one base class and multiple derived classes. Several other classes inherit the derived classes as well. Hierarchical structures thus form a tree-like structure. It is similar to that, mango and apple both are fruits; both inherit the property of fruit. Fruit will be the Base class, and mango and apple are sub-classes. 


## Syntax
```cpp
Class Base 
{  
   ............  
};  

Class Derived1: access_specifier Base
{  
   .........  
};  
Class Derived2: access_specifier Base 
{  
  ............. 
};
```   

```cpp
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
    // code
  }

  ~Base()
  {
    cout << "In Base Destructor" << endl;
    // code
  }

  void Display()
  {
    cout << "In Base1 Display()" << endl;
  }
};

class Derived1 : public Base
{
public:
  int no3;
  int no4;

  Derived1()
  {
    cout << "In Derived1 Constructor" << endl; // 2
    // code
  }

  ~Derived1()
  {
    cout << "In Derived1 Destructor" << endl;
    // code
  }

  void Display()
  {
    cout << "In Derived1 Display()" << endl;
  }
};

class Derived2 : public Base
{
public:
  Derived2()
  {
    // Base1()
    // Base2()
    cout << "In Derived2 Constructor" << endl; // 3
  }

  ~Derived2()
  {
    cout << "In Derived2 Destructor" << endl; // 4
    // Base2()
    // Base1()
  }
};

int main()
{

  Derived2 d2Obj;
  cout << "sizeof d2Obj = " << sizeof(d2Obj) << endl; // 8

  return 0;
}
```