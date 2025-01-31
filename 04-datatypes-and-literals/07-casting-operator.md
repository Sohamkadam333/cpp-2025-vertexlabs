# Casting Operators

#### The casting operators is the modern C++ solution for converting one type of data safely to another type. This process is called typecasting where the type of the data is changed to another type either implicitly (by the compiler) or explicitly (by the programmer).

- static_cast
- dynamic_cast
- const_cast
- reinterpret_cast

### 1. static_cast
#### The static_cast operator is the most commonly used casting operator in C++. It performs compile-time type conversion and is mainly used for explicit conversions that are considered safe by the compiler. 

```cpp
static_cast <new_type> (exp);
```

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 10;

    // converting int to double
    double nd = static_cast<double>(n);

    // printing data type
    cout << typeid(n).name() << endl;

    // typecasting
    cout << typeid(static_cast<double>(n)).name() << endl;

    // Printing double type
    cout << typeid(nd).name();

    return 0;
}
```
---

### 2. dynamic_cast
#### The dynamic_cast operator is mainly used to perform downcasting (converting a pointer/reference of a base class to a derived class) in polymorphisms and inheritance. It ensures type safety by performing a runtime check to verify the validity of the conversion.

```cpp
dynamic_cast <new_type> (exp);
```

#### If the conversion is not possible, dynamic_cast returns a null pointer (for pointer conversions) or throws a bad_cast exception (for reference conversions).

```cpp
#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    virtual void speak() {
        cout << "Animal speaks." << endl;
    }
};

// Derived Class
class Dog : public Animal {
public:
    void speak() override  {
        cout << "Dog barks." << endl;
    }
};

// Derived Class
class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat meows." << endl;
    }
};

int main() {
  
    // Base class pointer to derived class object
    Animal* animalPtr = new Dog();

    // Downcasting
    Dog* dogPtr = dynamic_cast<Dog*>(animalPtr);

    // Checking if the typecasting is successfull
    if (dogPtr) {
        dogPtr->speak();
    }
    else {
        cout << "Failed to cast to Dog." << endl;
    }

    // Typecasting to other dervied class
    Cat* catPtr = dynamic_cast<Cat*>(animalPtr);
    if (catPtr) {
        catPtr->speak();
    }
    else {
        cout << "Failed to cast to Cat." << endl;
    }

    delete animalPtr;
    return 0;
}
```
---

### 3. const_cast
#### The const_cast operator is used to modify the const or volatile qualifier of a variable. It allows programmers to temporarily remove the constancy of an object and make modifications. Caution must be exercised when using const_cast, as modifying a const object can lead to undefined behavior.

```cpp
const_cast <new_type> (exp);
```

```cpp
#include <iostream>
using namespace std;

int main() {

    const int n = 5;
  
    // Pointer to a const int
    const int* ptr = &n;

    // int* nonConstPtr = ptr; if we use this
    // instead of without using const_cast
    // we will get error of invalid conversion
    int* nonConstPtr = const_cast<int*>(ptr);
    *nonConstPtr = 10;

    cout << *nonConstPtr;

    return 0;
}
```
---

### 4. reinterpret_cast
#### The reinterpret_cast operator is used to convert the pointer to any other type of pointer. It does not perform any check whether the pointer converted is of the same type or not.

```cpp
reinterpret_cast <new_type> (exp);
```

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 10;
  
    // Store the address of number in nptr
    int* nptr = &n;

    // Reinterpreting the pointer as a char pointer
    char* charptr = reinterpret_cast<char*>(nptr);

    // Printing the memory addresses and values
    cout << "Integer Address: " << nptr << endl;
    cout << "Char Address: " << charptr;

    return 0;
}
```