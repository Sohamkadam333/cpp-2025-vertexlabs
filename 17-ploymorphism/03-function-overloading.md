# 1. Compile Time Polymorphism

# Function Overloading

Function overloading is a feature in C++ that allows multiple functions to share the same name but have different parameter lists (number, type, or order of parameters). The compiler distinguishes between them based on their signature (parameters), enabling compile-time polymorphism.


- Return type is not part of the function signature. Overloading based solely on return type is invalid.
- Functions must differ in at least one parameter type, count, or order.
- Overloading works for both standalone functions and class member functions (including constructors).

## Need of Function Overloading

- Semantic Clarity: Use the same function name for logically similar operations (e.g., add() for integers, floats, etc.).
- Simplify Naming: Avoid cluttering code with names like printInt, printDouble, etc.
- Constructor Flexibility: Constructors must have the same name as the class, making overloading essential for object initialization with different parameters.
- API Usability: Provide intuitive interfaces (e.g., draw(circle), draw(rectangle)).


#### Example Procedural (Non-OOP) Example

```cpp
#include <iostream>
using namespace std;

// Overloaded print functions
void print(int i) {
    cout << "Integer: " << i << endl;
}

void print(double d) {
    cout << "Double: " << d << endl;
}

void print(const char* s) {
    cout << "String: " << s << endl;
}

int main() {
    print(5);          // Calls print(int)
    print(3.14);       // Calls print(double)
    print("Hello");    // Calls print(const char*)
    return 0;
}
```


#### Example OOP

```cpp
#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int day, month, year;
public:
    // Overloaded constructors
    Date(int d, int m, int y) : day(d), month(m), year(y) {}
    Date(const string& s) { 
        // Parse date from string (e.g., "dd-mm-yyyy")
        // Implementation omitted for brevity
    }

    // Overloaded member function
    void display(const string& format) {
        cout << "Formatted date: " << format << endl;
    }

    void display() {
        cout << "Default date: " << day << "-" << month << "-" << year << endl;
    }
};

int main() {
    Date d1(15, 8, 2023);    // Calls Date(int, int, int)
    Date d2("15-08-2023");    // Calls Date(const string&)
    d1.display();             // Calls display()
    d1.display("YYYY/MM/DD"); // Calls display(const string&)
    return 0;
}
```


### Internals

Name Mangling: The compiler generates unique names for overloaded functions by encoding parameter types into the function name (e.g., _Z4funcid for func(int, double)). This ensures the linker sees distinct symbols.

Overload Resolution: The compiler selects the best match using the following priority:

Exact type match.
- Type promotions (e.g., int to long).
- Standard conversions (e.g., int to double).
- User-defined conversions (via constructors/operators).
- Ambiguity: A compile-time error occurs if multiple overloads are equally viable (e.g., func(5) with overloads func(int) and func(double) if no exact match exists).


```cpp
#include <iostream>
using namespace std;

// TEST
/*
int Addition(int no1, int no2)
{
  return no1 + no2;
}

float FloatAdd(float no1, float no2)
{
  return no1 + no2;
}
*/

// FUNCTION Overloading

int Addition(int no1, int no2)
{
  return no1 + no2;
}

float Addition(float no1, float no2)
{
  return no1 + no2;
}

int main()
{
  int result1 = Addition(10, 20);
  cout << "Result = " << result1 << endl;

  float result2 = Addition(10.5f, 20.7f);
  cout << "Result = " << result2 << endl;

  return 0;
}
```



```cpp
#include <iostream>
using namespace std;

// Name Mangling
int Addition(int no1, int no2)
{
  return no1 + no2;
}

float Addition(float no1, float no2)
{
  return no1 + no2;
}

int main()
{
  cout << Addition(10, 20) << endl;       // 30
  // cout << Addition(10.4, 20.2) << endl; // Error
  cout << Addition(10.4f, 20.2f) << endl; // 30.6

  return 0;
}
```

```cpp
#include <iostream>
using namespace std;

// Name Mangling
int Addition(int no1, int no2)
{
  return no1 + no2;
}

float Addition(int no1, int no2)
{
  return no1 + no2;
}

int main()
{
  cout << Addition(10, 20) << endl; // 30
  cout << Addition(10, 20) << endl; // 30 //30.2

  return 0;
}
```

```cpp
#include <iostream>
using namespace std;

class Demo
{
public:
  // 1 can not overload
  Demo()
  {
    cout << "In Default Constructor" << endl;
  }

  // 2 can be overload
  Demo(int a)
  {
    cout << "In Parameterized Constructor 1 param" << endl;
  }

  Demo(int a, int b)
  {
    cout << "In Parameterized Constructor 2 param" << endl;
  }

  // 3 can be overload
  Demo(Demo &refObj)
  {
    cout << "In Copy Constructor 1" << endl;
  }

  Demo(Demo &refObj, int a)
  {
    cout << "In Copy Constructor 2" << endl;
  }

  // 4 can be overload
  void Display(int a)
  {
    cout << "In Display 1 param" << endl;
  }

  void Display(int a, int b)
  {
    cout << "In Display 2 param" << endl;
  }

  // can not overload
  ~Demo()
  {
    cout << "In Destructor" << endl;
  }
};

int main()
{
  Demo obj1;           // Default
  Demo obj2(10);       // 1 param constr
  Demo obj3(10, 20);   // 2 param constr
  Demo obj4(obj3);     // copy constr
  Demo obj5(obj4, 10); // overloaded copy constr

  obj1.Display(10);     // display1
  obj1.Display(10, 20); // display2

  return 0;
}
```


```cpp
// Deafult Arguments
#include <iostream>
using namespace std;

int Add(int no1 = 0, int no2 = 0)
{
  return no1 + no2;
}

int main()
{
  cout << Add() << endl;       // 0
  cout << Add(10) << endl;     // 10
  cout << Add(10, 20) << endl; // 30
  return 0;
}
```


```cpp
// Deafult Arguments with Function Overloading
#include <iostream>
using namespace std;

int Add(int no1 = 0, int no2 = 0)
{
  cout << "In Add 2 param" << endl;
  return no1 + no2;
}

int Add()
{
  cout << "In Add 0 param" << endl;
  return 0;
}

int main()
{
  // Add();       // in add 2 param
  Add(10);     // "In Add 2 param" << endl; 10
  Add(10, 20); // "In Add 2 param" << endl; 30

  return 0;
}
```