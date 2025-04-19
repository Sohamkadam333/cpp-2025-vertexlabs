# Function Hiding

Function Hiding happens when a derived class has a function (with the same name) as a function in its base class — but the derived class function hides all versions of the base class function, even if the signature is different.

C++ applies name hiding — it hides all base class functions with the same name, regardless of their signature.

This allows the derived class to redefine the behavior for the entire function name, not just one overload.


#### Exampe 1
```cpp
#include <iostream>

using namespace std;

class Base
{
public:
  void Display1()
  {
    cout << "In Base Display1" << endl;
  }

  void Show()
  {
    cout << "In Base Show" << endl;
  }
};

class Derived : public Base
{
public:
  void Display1()
  {
    cout << "In Derived Display1" << endl;
  }
};

int main()
{
  Derived dObj;
  dObj.Display1();

  dObj.Show();

  return 0;
}
```


#### Example 2

```cpp
#include <iostream>

using namespace std;

class Base
{
public:
  void Display1()
  {
    cout << "In Base Display1" << endl;
  }

  void Display1(int x)
  {
    cout << "In Base Display1 1 param x = " << x << endl;
  }
};

class Derived : public Base
{
public:
  // using Base::Display1;
  void Display1()
  {
    cout << "In Derived Display1" << endl;
  }
};

int main()
{
  Derived dObj;
  dObj.Display1();

  // dObj.Display1(10);

  // dObj.Base::Display1(10);

  return 0;
}
```