# Operator Overloading

C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading. Operator overloading is a compile-time polymorphism. For example, we can overload an operator ‘+’ in a class like String so that we can concatenate two strings by just using +. Other example classes where arithmetic operators may be overloaded are Complex Numbers, Fractional Numbers, Big integers, etc.


```cpp
int a;
float b,sum;
sum = a + b;
```

Here, variables “a” and “b” are of types “int” and “float”, which are built-in data types. Hence the addition operator ‘+’ can easily add the contents of “a” and “b”. This is because the addition operator “+” is predefined to add variables of built-in data type only. 

```cpp
class A {
    statements;
};

int main()
{
    A a1, a2, a3;

    a3 = a1 + a2;

    return 0;
}
```


In this example, we have 3 variables “a1”, “a2” and “a3” of type “class A”. Here we are trying to add two objects “a1” and “a2”, which are of user-defined type i.e. of type “class A” using the “+” operator. This is not allowed, because the addition operator “+” is predefined to operate only on built-in data types. But here, “class A” is a user-defined type, so the compiler generates an error. This is where the concept of “Operator overloading” comes in.

Now, if the user wants to make the operator “+” add two class objects, the user has to redefine the meaning of the “+” operator such that it adds two class objects. This is done by using the concept of “Operator overloading”. So the main idea behind “Operator overloading” is to use C++ operators with class variables or class objects. Redefining the meaning of operators really does not change their original meaning; instead, they have been given additional meaning along with their existing ones.

```cpp
#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // This is automatically called when '+' is used with
    // between two Complex objects
    Complex operator+(Complex const& obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print() { cout << real << " + i" << imag << '\n'; }
};

int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();
}
```


### Difference between Operator Functions and Normal Functions

Operator functions are the same as normal functions. The only differences are, that the name of an operator function is always the operator keyword followed by the symbol of the operator, and operator functions are called when the corresponding operator is used. 


### Can We Overload All Operators? 
Almost all operators can be overloaded except a few.

### Operators that cannot be overloaded. 

```cpp
sizeof
typeid
Scope resolution (::)
Class member access operators (.(dot), .* (pointer to member operator))
Ternary or conditional (?:)
```

### Operators that can be overloaded. 

<table><thead><tr><th><span>Operators that can be overloaded</span></th><th><span>Examples</span></th></tr></thead><tbody><tr><td><span>Binary Arithmetic</span></td><td><span>+, -, *, /, %</span></td></tr><tr><td><span>Unary Arithmetic&nbsp;</span></td><td><span>+, -, ++, —</span></td></tr><tr><td><span>Assignment</span></td><td><span>=, +=,*=, /=,-=, %=</span></td></tr><tr><td><span>Bitwise</span></td><td><span>&amp; , | , &lt;&lt; , &gt;&gt; , ~ , ^</span></td></tr><tr><td><span>De-referencing</span></td><td><span>(-&gt;)</span></td></tr><tr><td><span>Dynamic memory allocation,</span><br><span>De-allocation</span></td><td><span>New, delete&nbsp;</span></td></tr><tr><td><span>Subscript</span></td><td><span>[ ]</span></td></tr><tr><td><span>Function call&nbsp;</span></td><td><span>()</span></td></tr><tr><td><span>Logical&nbsp;</span></td><td><span>&amp;, &nbsp;| |, !</span></td></tr><tr><td><span>Relational</span></td><td><span>&gt;, &lt; , = =, &lt;=, &gt;=</span></td></tr></tbody></table>


```cpp
#include <iostream>
using namespace std;

int main(void)
{
  int a = 10;
  float b = 44.44f;

  int c = a + b;               // 10 + 44.44 = 54.44
  cout << "c = " << c << endl; // 54

  string str1 = "c++";
  string str2 = "Programming";

  string str3 = str1 + str2;
  cout << "str3 = " << str3 << endl;
  return 0;
}
```


```cpp
#include <iostream>
using namespace std;

class Demo
{
public:
  int no;

  Demo()
  {
    no = 0;
  }

  Demo(int x)
  {
    no = x;
  }
};

int main(void)
{
  Demo d1(10);
  Demo d2(20);

  // Demo d3 = d1 + d2; // Error
  /*
  Demo' is not derived from 'std::__cxx11::basic_string<_CharT, _Traits, _Alloc>'
   Demo d3 = d1 + d2;
  */

  return 0;
}
```


```cpp
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
```


```cpp
// Unary Operator Overload
// ++

#include <iostream>
using namespace std;

class Demo
{
public:
  int no;

  Demo()
  {
    cout << "In Default constructor" << endl;
    no = 0;
    cout << "Out Default constructor" << endl;
  }

  void operator++()
  {
    cout << "In ++ overloadded operator" << endl;
    no = no + 10;
    cout << "Out ++ overloadded operator" << endl;
  }
};

int main()
{
  cout << "In main" << endl;
  int a = 1;
  cout << "a = " << a << endl; // 10
  a++;
  cout << "a = " << a << endl; // 11

  Demo d;

  cout << "d no = " << d.no << endl; // 0

  ++d;
  cout << "d no = " << d.no << endl; // 1

  ++d;
  cout << "d no = " << d.no << endl; // 2

  cout << "Out main" << endl;
  return 0;
}
```