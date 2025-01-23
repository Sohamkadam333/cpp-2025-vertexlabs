# Storage Classes

#### C++ Storage Classes are used to describe the characteristics of a variable/function. It determines the lifetime, visibility, default value, and storage location which helps us to trace the existence of a particular variable during the runtime of a program. Storage class specifiers are used to specify the storage class for a variable.

## 1. auto Storage Class
#### The auto storage class is the default class of all the variables declared inside a block. The auto stands for automatic and all the local variables that are declared in a block automatically belong to this class.

### Properties of auto Storage Class Objects
- Scope: Local
- Default Value: Garbage Value
- Memory Location: RAM
- Lifetime: Till the end of its scope

```cpp
#include <iostream>
using namespace std;

int main() {

    // Declaring an auto variable
    int a = 32;
    float b = 3.2;
    string c = "GeeksforGeeks";

    // Printing the auto variables
    cout << a << " \n";
    cout << b << " \n";
      cout << c << " \n";

    return 0;
}
```
---

## 2. extern Storage Class
#### The extern storage class simply tells us that the variable is defined elsewhere and not within the same scope (or even source file) where it is used (i.e. external linkage). Basically, the variable is created in a different scope or file and can be used in a different file as well.

#### A normal global variable can be made extern as well by placing the extern keyword before its declaration/definition in any function/block. The main purpose of using extern variables is that they can be accessed between two different files which are part of a large program.

### Properties of extern Storage Class Objects
- Scope: Global
- Default Value: Zero
- Memory Location: RAM
- Lifetime: Till the end of the program

```cpp
hello.cpp

// Defining a global variable with external linkage
int var = 10;
```

```cpp
main.cpp

#include <iostream>
using namespace std;

// Telling compiler that variable x is extern variable
// and has been defined elsewhere
extern int x;

int main() {
  
      // Printing the value of x
    cout << x;

    return 0;
}
```

---

## 3. static Storage Class
#### The static storage class is used to declare static variables that have the property of preserving their value even after they are out of their scope. They are initialized only once and exist until the termination of the program. Thus, no new memory is allocated because they are not re-declared. Global static variables can be accessed anywhere in the program but unlike extern variable, they have internal linkage so they cannot be accessed outside the program.

### Properties of static Storage Class
