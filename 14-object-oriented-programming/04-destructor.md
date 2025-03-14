# Destructors 

Destructor is an instance member function that is invoked automatically whenever an object is going to be destroyed. Meaning, a destructor is the last function that is going to be called before an object is destroyed.

### Syntax to Define Destructor
```cpp
~ <class-name>() {
    // some instructions
}
```

### Characteristics of a Destructor

- A destructor is also a special member function like a constructor. Destructor destroys the class objects created by the constructor. 
- Destructor has the same name as their class name preceded by a tilde (~) symbol.
- It is not possible to define more than one destructor.
- The destructor is only one way to destroy the object created by the constructor. Hence, destructor cannot be overloaded.
- It cannot be declared static or const.
- Destructor neither requires any argument nor returns any value.
- It is automatically called when an object goes out of scope. 
- Destructor release memory space occupied by the objects created by the constructor.
- In destructor, objects are destroyed in the reverse of an object creation.

```cpp
// C++ program to demonstrate the execution of constructor
// and destructor

#include <iostream>
using namespace std;

class Demo {
public:
    // User-Defined Constructor
    Demo() { cout << "\n Constructor executed"; }

    // User-Defined Destructor
    ~Demo() { cout << "\nDestructor executed"; }
};
main()
{
    Demo obj;

    return 0;
}

```

### When is the destructor called?
- A destructor function is called automatically when the object goes out of scope or is deleted. Following are the cases where destructor is called:

- Destructor is called when the function ends.
- Destructor is called when the program ends.
- Destructor is called when a block containing local variables ends.
- Destructor is called when a delete operator is called.


### How to call destructors explicitly?
Destructor can also be called explicitly for an object. We can call the destructors explicitly using the following statement:

object_name.~class_name()