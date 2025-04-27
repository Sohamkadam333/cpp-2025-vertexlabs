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

  bPtr->Display(); // Derived
  bPtr->Show();    // Base show
  bPtr->Hello();   // Base Hello
  // bPtr->Fun(); // ERROR not present in base class
  // bPtr->Greet(); // ERROR not present in base class

  return 0;
}
```