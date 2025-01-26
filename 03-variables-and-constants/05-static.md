# Static Keyword
#### The static keyword in C++ has different meanings when used with different types.

## 1. Static Variables in a Function
#### In a function, when a variable is declared as static, space for it gets allocated for the lifetime of the program. Even if the function is called multiple times, space for the static variable is allocated only once and the value of the variable in the previous call gets carried through the next function call.

```cpp
#include <bits/stdc++.h>
using namespace std;

void f() {
  
    // Static variable
    static int count = 0;

    // The value will be updated and carried over
      // to the next function call
    count++;
      cout << count << " ";
}

int main() {
  
      // Calling function f() 5 times
    for (int i = 0; i < 5; i++)
        f();
  
    return 0;
}
```
---

## 2. Static Data Member in a Class
#### As the variables declared as static are initialized only once as they are allocated space in separate static storage so, the static member variables in a class are shared by the objects. There cannot be multiple copies of the same static variables for different objects. Also because of this reason static variables cannot be initialized using constructors.

```cpp
#include <iostream>
using namespace std;

class GfG {
public:
  
      // Static data member
    static int i;

    GfG(){
        // Do nothing
    };
};

// Static member inintialization
int GfG::i = 1;

int main() {
  
    // Prints value of i
    cout << GfG::i;
}
```
---

## 3. Static Member Functions in a Class
#### Just like the static data members or static variables inside the class, static member functions also do not depend on the object of the class. We are allowed to invoke a static member function using the object and the ‘.’ operator but it is recommended to invoke the static members using the class name and the scope resolution operator. Static member functions are allowed to access only the static data members or other static member functions, they cannot access the non-static data members or member functions of the class. 

```cpp
#include <iostream>
using namespace std;

class GfG {
public:
  
    // Static member function
    static void printMsg() { cout << "Welcome to GfG!"; }
};

int main() {
  
    // Invoking a static member function
    GfG::printMsg();
}
```
---

## 4. Global Static Variable
#### A global static variable in C++ is a static variable declared outside of any class or function. Unlike regular global variables, a global static variable has internal linkage, meaning it is accessible only within the file where it is defined. This ensures that its scope is limited to the current translation unit, preventing conflicts with variables in other files that may have the same name.

```cpp
#include <iostream>
using namespace std;

// Global static variable
static int count = 0;

void increment() {
    count++;
    cout << count << " ";
}

int main() {
    increment();
    increment();
    return 0;
}
```