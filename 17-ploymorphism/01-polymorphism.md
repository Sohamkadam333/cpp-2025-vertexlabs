# Polymorphism

The word Polymorphism comes from Greek:
Poly = many, Morph = forms.

In C++, polymorphism means "one interface, many implementations" — the same function name or operator can behave differently on different classes or data types.

### Types of Polymorphism

- Compile-Time Polymorphism	
  - Decided at compile time	
  - Function Overloading / Operator Overloading

- Run-Time Polymorphism	
  - Decided at runtime	
  - Virtual Functions (Function Overriding)


### 1. Compile-Time Polymorphism
- Also known as Static Polymorphism.
- Function Overloading
- Operator Overloading


#### Function Overloading

You can have multiple functions with the same name but different parameters.

```cpp
#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math m;
    cout << m.add(2, 3) << endl;        // Calls int version
    cout << m.add(2.5, 3.1) << endl;    // Calls double version
    return 0;
}
```

#### Operator Overloading

You can redefine how operators work for user-defined types.

```cpp
#include <iostream>
using namespace std;

class Complex {
public:
    float real, imag;

    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    Complex operator + (const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }
};

int main() {
    Complex c1(2, 3), c2(1, 4);
    Complex c3 = c1 + c2;
    cout << "Result: " << c3.real << " + " << c3.imag << "i" << endl;
    return 0;
}

```

### 2. Run-Time Polymorphism
- Also known as Dynamic Polymorphism.
- This is achieved using:
  - Inheritance
  - Virtual Functions
  - Function Overriding

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {  // virtual function
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a;  // Pointer of base class

    Dog d;
    Cat c;

    a = &d;
    a->sound();  // Outputs: Dog barks

    a = &c;
    a->sound();  // Outputs: Cat meows

    return 0;
}
```


| Feature       | Compile-Time Polymorphism     | Run-Time Polymorphism         |
| ------------- | ----------------------------- | ----------------------------- |
| Binding Time  | Compile-time                  | Run-time                      |
| Function Name | Same                          | Same                          |
| Behavior      | Decided at compile-time       | Decided at runtime            |
| Examples      | Function/Operator Overloading | Virtual Functions, Overriding |
| Flexibility   | Less flexible                 | Highly flexible               |
