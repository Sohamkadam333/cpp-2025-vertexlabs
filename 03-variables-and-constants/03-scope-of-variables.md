# Scope of Variables
#### In C++, the scope of a variable is the extent in the code upto which the variable can be accessed or worked with. It is the region of the program where the variable is accessible using the name it was declared with.

## Global Scope
#### Global scope refers to the region outside any function or a block. The variables declared here are accessible throughout the entire program and are called Global Variables.

```cpp
#include<iostream>
using namespace std;

// Global variable
int global = 5;

// Global variable accessed from within
// a function
void display() {
    cout << global << endl;
}

int main() {
    display();
    
    // Changing value of global from main
      // function before calling display()
    global = 10;
    display();
  
      return 0;
}
```

---

## Local Scope
#### The local scope is the region inside the curly braces { }. Variables defined within a function or block are said to be local to those functions or a block and are called local variables. Local variables do not exist outside the block in which they are declared, i.e. they cannot be accessed or used outside that block.

```cpp
#include<iostream>
using namespace std;

void func() {
  
    // This variable is local to function func() and
      // cannot be accessed outside this function
    int age = 18;
}

int main() {
  
      // Accessing variable from func() in main function
    cout << "Age is: " << age;
    
    return 0;
}
```

---

## Variable Shadowing
#### Consider that there is a local variable inside a function with the same name as that of a global variable. If the function tries to access the variable with that name, then which variable will be given precedence? Look at the below program to understand the question:  


```cpp
#include<iostream>
using namespace std;

// Global variable
int a = 5;

int main() {
  
    // Local variable with same name as that of
      // global variable
    int a = 100;
  
      // Accessing a
    cout << a;
  
      return 0;
}
```

### Access Global Variable in Variable Shadowing

- The global a is still available in the main function but is shadowed by the local a as it is available everywhere. One may ask if there is any way we can access the global a in the main function.

- Yes, C++ allows the users to access global variable with the same name as local variable using scope resolution operator

```cpp
#include<iostream>
using namespace std;

// Global variable
int a = 5;

int main() {
  
    // Local variable with same name as that of
      // global variable
    int a = 100;
  
      // Accessing global a
    cout << ::a;
  
      return 0;
}
```

---

## Variations of Scopes in C++

1. Instance Scope
2. Static Member Scope
3. Namespace Scope

### Instance Scope
#### In C++, instance scope refers to the region inside a class but outside any member function of the class. The variable declared here are called instance variables and are accessible to whole class. They can be accessed by the objects of the class.

```cpp
#include <iostream>
using namespace std;

class A {
public:
  
      // Instance variable with instance scope i.e. accessible
      // in whole class
    int instanceVar;

    A(int val) {
        instanceVar = val;
    }

    void display() {
        cout << instanceVar << endl;
    }
};

int main() {
  
      // Creates a1 with instanceVar = 10
    A a1(1);
    a1.display();

      // Creates a2 with instanceVar = 20
    A a2(33);
    a2.display();

    return 0;
}
```
---

### Static Member Scope
#### The static scope applies to variables and functions declared with the static keyword within the class. These variables are shared across all instances of a class and can be accessed using the class name without creating the instance.

```cpp
#include <iostream>
using namespace std;

class A {
public:
  
      // Static variable with static scope i.e. accessible
      // in whole class
    static int staticVar;
};

int A::staticVar = 1;

int main() {
  
      // Access static variable
      cout << A::staticVar;

    return 0;
}
```
---

### Namespace Scope
#### A namespace in C++ is a container that allows users to create a separate scope where the given variables are defined. It is used to avoid name conflicts and group related code together. These variables can be then accessed using their namespace name and scope resolution operator.

```cpp
#include <iostream>
using namespace std;

namespace N {
      
      // Variable with namespace scope
    int namespaceVar = 10;
}

int main() {
  
      // Access variable using namespace
    cout << N::namespaceVar;  

    return 0;
}
```