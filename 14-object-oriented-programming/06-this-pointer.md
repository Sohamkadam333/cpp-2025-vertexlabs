# ‘this’ pointer

‘this’ pointers is a pointer to the current instance of a class. It is used to refer to the object within its own member functions.

```cpp
#include <iostream>
using namespace std;

// Class that uses this pointer
class Demo {
  public:
    int a;
    Demo(int a) {

        // Assigning a of this object to
        // function argument a
        this->a = a;
    }
    void display() {

        // Accessing a of this object
        cout << "Value: " << this->a;
    }
};

int main() {

    // Checking if this works for the object
    Demo obj(10);
    obj.display();

    return 0;
}

```

#### Understanding this Pointer
To understand ‘this’ pointer, it is important to know how objects look at functions and data members of a class.

Each object gets its own copy of the data member.
All-access the same function definition as present in the code segment.
Meaning each object gets its own copy of data members and all objects share a single copy of member functions. Then now question is that if only one copy of each member function exists and is used by multiple objects, how are the proper data members are accessed and updated? The compiler supplies an implicit pointer along with the names of the functions as ‘this’. The ‘this’ pointer is passed as a hidden argument to all nonstatic member function calls and is available as a local variable within the body of all nonstatic functions.

‘this’ pointer is not available in static member functions as static member functions can be called without any object (with class name). For a class X, the type of this pointer is ‘X* ‘. 