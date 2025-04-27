# Pure Virtual Function

A pure virtual function (or abstract function) in C++ is a virtual function for which we can have an implementation, But we must override that function in the derived class, otherwise, the derived class will also become an abstract class. A pure virtual function is declared by assigning 0 in the declaration.

Sometimes implementation of all functions cannot be provided in a base class because we don’t know the implementation. Such a class is called an abstract class.


### Syntax
```cpp
// An abstract class
class Demo {
public:
    // Pure Virtual Function
    virtual void show() = 0;
};
```


#### Example
```cpp
#include <iostream>
using namespace std;

class Base {
    int x;

public:
    // pure virtual function
    virtual void fun() = 0;

    int getX() { return x; }
};

class Derived : public Base {
    int y;

public:
    // implementation of the pure virtual function
    void fun() { cout << "fun() called"; }
};

int main(void)
{
    // creating an object of Derived class
    Derived d;

    // calling the fun() function of Derived class
    d.fun();

    return 0;
}
```



#### Comparison with Java
In Java, a class can be made abstract by using an abstract keyword. Similarly, a function can be made pure virtual or abstract by using an abstract keyword.

#### Interface vs Abstract Classes
An interface does not have an implementation of any of its methods, it can be considered as a collection of method declarations. In C++, an interface can be simulated by making all methods pure virtual. In Java, there is a separate keyword for the interface.

We can think of Interface as header files in C++, like in header files we only provide the body of the class that is going to implement it. Similarly in Java in Interface we only provide the body of the class and we write the actual code in whatever class implements it.



```cpp

#include <iostream>
using namespace std;

// Abstract Class
class Base
{
public:
  int no1;

  virtual void Display() = 0; // pure virtual function
};

int main(void)
{
  Base bObj;
  return 0;
}
```


```cpp

#include <iostream>
using namespace std;

// Abstract Class
class Base
{
public:
  int no1;

  virtual void Display() = 0; // pure virtual function
};

// Abstract class
class Derived : public Base
{
public:
  int no2;

  void Show()
  {
    cout << "Hello From Derived Show" << endl;
  }
};

int main(void)
{
  Derived dObj;
  return 0;
}
```


```cpp

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
```