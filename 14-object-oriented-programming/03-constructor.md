# Constructors

Constructor is a special member function that is invoked automatically at the time an object of a class is created. It is used to initialize the data members of new objects. The constructor in C++ has the same name as the class or structure.

```cpp
#include <iostream>
using namespace std;

class Demo {
public:
  
    // Constructor of the class without
    // any parameters
    Demo() {
        cout << "Constructor called" << endl;
    }
};

int main() {
    Demo obj1;
    return 0;
}

```

### Types of Constructors in C++

- Default Constructor
- Parameterized Constructor
- Copy Constructor

### 1. Default Constructor
A default constructor is a constructor that doesn’t take any argument. It has no parameters. It is also called a zero-argument constructor. The compiler automatically creates an implicit default constructor if the programmer does not define one.

```cpp
#include <iostream>
using namespace std;

// Class with no explicity defined constructors
class Demo {
public:
};

int main() {
  
      // Creating object without any parameter
    Demo obj;
      cout << "In Main";
    return 0;
}
```


### 2. Parameterized Constructor
Parameterized constructors make it possible to pass arguments to constructors. Typically, these arguments help initialize an object when it is created. To create a parameterized constructor, simply add parameters to it the way you would to any other function. When you define the constructor’s body, use the parameters to initialize the object.

```cpp
#include <iostream>
using namespace std;

class Demo {
public:
    int val;
  
      // Parameterized Constructor
    Demo(int x) {
        val = x;
    }
};

int main() {
  
      // Creating object with a parameter
    Demo obj(10);
    cout << obj.val;
    return 0;
}

```


### 3. Copy Constructor

A copy constructor is a member function that initializes an object using another object of the same class. Copy constructor takes a reference to an object of the same class as an argument.

```cpp
#include <iostream>
using namespace std;

class Demo {
public:
    int val;
    
    // Parameterized constructor
    Demo(int x) {
        val = x;
    }
    
    // Copy constructor
    Demo(Demo& refObj) {
        val = refObj.val;
    }
};

int main() {
    Demo obj1(10);
    
    // Creating another object from obj1
    Demo obj2(a1);
    
      cout << obj2.val;
    return 0;
}
```


### Characteristics of Constructors
- The name of the constructor is the same as its class name.
- Constructors are mostly declared as public member of the class though they can be declared as private.
- Constructors do not return values, hence they do not have a return type.
- A constructor gets called automatically when we create the object of the class.
- Multiple constructors can be declared in a single class
- In case of multiple constructors, the one with matching function signature will be called.