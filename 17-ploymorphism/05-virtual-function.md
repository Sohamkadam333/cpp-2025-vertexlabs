# Virtual Function 

- A virtual function is a member function that is declared within a base class and is re-defined (overridden) by a derived class.
- When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the method.

- Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for the function call.
- They are mainly used to achieve Runtime polymorphism.
- Functions are declared with a virtual keyword in a base class.
- The resolving of a function call is done at runtime.

### Rules for Virtual Functions

- Virtual functions cannot be static.
- A virtual function can be a friend function of another class.
- Virtual functions should be accessed using a pointer or reference of base class type to achieve runtime polymorphism.
- The prototype of virtual functions should be the same in the base as well as the derived class.
- They are always defined in the base class and overridden in a derived class. It is not mandatory for the derived class to override (or re-define the virtual function), in that case, the base class version of the function is used.
- A class may have a virtual destructor but it cannot have a virtual constructor.

```cpp
// C++ program to illustrate
// concept of Virtual Functions

#include <iostream>
using namespace std;

class base {
public:
    virtual void print() { cout << "print base class\n"; }

    void show() { cout << "show base class\n"; }
};

class derived : public base {
public:
    void print() { cout << "print derived class\n"; }

    void show() { cout << "show derived class\n"; }
};

int main()
{
    base* bptr;
    derived d;
    bptr = &d;

    // Virtual function, binded at runtime
    bptr->print();

    // Non-virtual function, binded at compile time
    bptr->show();

    return 0;
}

```


```cpp
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

  // Base *bPtr = new Derived();

  bPtr->Display(); // Derived
  bPtr->Show();    // Base show
  bPtr->Hello();   // Base Hello
  // bPtr->Fun(); // ERROR not present in base class
  // bPtr->Greet(); // ERROR not present in base class

  return 0;
}
```


```cpp
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

  // 1000
  virtual void fun1()
  {
    cout << "In Base fun1" << endl;
  }

  // 2000
  void fun2()
  {
    cout << "In Base fun2" << endl;
  }

  // 3000
  virtual void fun3()
  {
    cout << "In Base fun3" << endl;
  }

  // 4000
  void fun4()
  {
    cout << "In Base fun4" << endl;
  }

  // 5000
  virtual void fun5()
  {
    cout << "In Base fun5" << endl;
  }
};

class Derived1 : public Base
{
public:
  int no3;
  int no4;

  // 6000
  void fun1()
  {
    cout << "In Derived1 fun1" << endl;
  }

  // 7000
  void fun5()
  {
    cout << "In Derived1 fun5" << endl;
  }

  // 8000
  virtual void fun6()
  {
    cout << "In Derived1 fun6" << endl;
  }

  // 9000
  virtual void fun7()
  {
    cout << "In Derived1 fun7" << endl;
  }
};

class Derived2 : public Derived1
{
public:
  int no5;
  int no6;

  // 10000
  void fun1()
  {
    cout << "In Derived2 fun1" << endl;
  }

  // 11000
  void fun2()
  {
    cout << "In Derived2 fun2" << endl;
  }

  // 12000
  void fun3()
  {
    cout << "In Derived2 fun3" << endl;
  }

  // 13000
  void fun5()
  {
    cout << "In Derived2 fun5" << endl;
  }

  // 140000
  void fun7()
  {
    cout << "In Derived2 fun7" << endl;
  }
};

int main(void)
{
  // Base *bPtr = new Derived2();

  Base bObj;
  Derived1 dObj1;
  Derived2 dObj2;

  Base *bPtr = &dObj1;

  cout << "sizeof bObj = " << sizeof(bObj) << endl;   // 12
  cout << "sizeof dObj1 = " << sizeof(dObj1) << endl; // 20
  cout << "sizeof dObj2 = " << sizeof(dObj2) << endl; // 28

  bPtr->fun1(); // "In Derived1 fun1"
  bPtr->fun2(); // "In Base fun2"
  bPtr->fun3(); // "In Base fun3"
  bPtr->fun4(); // "In Base fun4"
  bPtr->fun5(); // "In Derived1 fun5"
  // bPtr->fun6(); // ERROR fun6 not in Base
  // bPtr->fun7(); // ERROR fun7 not in Base

  cout << "------------------------------------------" << endl;
  bPtr = &dObj2;

  bPtr->fun1(); // "In Derived2 fun1"
  bPtr->fun2(); // "In Base fun2"
  bPtr->fun3(); // "In Derived2 fun3"
  bPtr->fun4(); // "In Base fun4"
  bPtr->fun5(); // "In Derived2 fun5"
  // bPtr->fun6(); // ERROR fun6 not in Base
  // bPtr->fun7(); // ERROR fun7 not in Base

  cout << "------------------------------------------" << endl;
  Derived1 *dObj1Ptr = &dObj2;

  dObj1Ptr->fun1(); // "In Derived2 fun1"
  dObj1Ptr->fun2(); // "In Base fun2"
  dObj1Ptr->fun3(); // "In Derived2 fun3"
  dObj1Ptr->fun4(); // "In Base fun4"
  dObj1Ptr->fun5(); // "In Derived2 fun5"
  dObj1Ptr->fun6(); // "In Derived1 fun6"
  dObj1Ptr->fun7(); // "In Derived2 fun7"

  return 0;
}
```