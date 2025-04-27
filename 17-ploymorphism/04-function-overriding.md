# Run Time Polymorphism
# Function Overriding

What is Function Overriding in C++?
Function overriding is a type of polymorphism in which we redefine the member function of a class which it inherited from its base class. The function signature remains same but the working of the function is altered to meet the needs of the derived class. So, when we call the function using its name for the parent object, the parent class function is executed. But when we call the function using the child object, the child class version will be executed.


## Types of Function Overriding in C++
Unlike other languages such as Java where function overriding is strictly done at runtime, C++ supports two types of function overriding:

- Compile Time Overriding
- Runtime Function Overriding


### Compile Time Function Overriding
In compile time function overriding, the function call and the definition is bound at the compilation of the program. Due to this, it is also called early binding or static binding.


```cpp
// C++ program to demonstrate compile time function overriding

#include <iostream>
using namespace std;

class Parent {
public:
    void Display()
    {
        cout << "Base Function" << endl;
    }
};

class Child : public Parent {
public:
    void Display()
    {
        cout << "Derived Function" << endl;
    }
};

int main()
{
    Child Child_Derived;
    Child_Derived.Display();
    return 0;
}
```


### Runtime Function Overriding using Virtual Function

Unlike other languages like Java, the function overriding in C++ can be performed at both compile time and runtime. In all the above examples, the call to the overridden function is resolved during compile time. It is also called early binding where the function call is binded to its definition during compilation.

Function overriding can also be performed at the runtime, which means that function call will be binded to its definition during runtime (also known as late binding or dynamic binding). This can be done with the help of virtual functions.



```cpp
#include <iostream>
using namespace std;

class Base {
public:
    // Declare the function as virtual to allow overriding
    // in derived classes
    virtual void display()
    {
        cout << "Display method of Base class" << endl;
    }

    // Virtual destructor to ensure proper cleanup of
    // derived class objects
    virtual ~Base() {}
};

class Derived : public Base {
public:
    // Override the display method
    void display() override  // override keyword is optional
    {
        cout << "Display method of Derived class" << endl;
    }
};

int main()
{
    Base* basePtr;
    Derived derivedObj;

    // Point base class pointer to derived class object
    basePtr = &derivedObj;

    // Call the display function
    // This will call the display method of the Derived
    // class due to the virtual function mechanism
    basePtr->display();

    return 0;
}

```



### Advantages of Runtime Function Overriding

- Methods are selected at runtime based on object type.
- Common interfaces and implementations can be reused as we only need to implement the interface for base class.
- Changes in base classes automatically affect derived classes.
- Facilitates the implementation of design patterns different design patterns.
- Client code interacts with base class interface, not specific implementations reducing the coupling.


### Limitations of Runtime Function Overriding
- While runtime function overriding provides numerous advantages, it also comes with certain limitations:
- Virtual function calls are generally slower than non-virtual function calls due to the indirection involved in the virtual table lookup.
- Implementing and maintaining polymorphic code can be more complex compared to simpler non-polymorphic code.
- Virtual tables and virtual pointers add to the memory overhead, especially in large systems with many classes.
- Errors related to function overriding (e.g., incorrect signatures) might only be detected at runtime, leading to potential bugs.


```cpp
// Function Overriding Example
// Compile Time
#include <iostream>
using namespace std;

class Base
{
public:
  void Display()
  {
    cout << "In Base class Display" << endl;
  }
};

class Derived : public Base
{
public:
  void Display()
  {
    cout << "In Derived class Display" << endl;
  }
};

int main()
{

  Base bObj;
  Derived dObj;

  bObj.Display(); // "In Base class Display"
  dObj.Display(); // "In Derived class Display" | Ambiguous

  return 0;
}
```