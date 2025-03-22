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

- Each object gets its own copy of the data member.
- All-access the same function definition as present in the code segment.
- Meaning each object gets its own copy of data members and all objects share a single copy of member functions. 
- Then now question is that if only one copy of each member function exists and is used by multiple objects, how are the proper data members are accessed and updated? 
- The compiler supplies an implicit pointer along with the names of the functions as ‘this’. The ‘this’ pointer is passed as a hidden argument to all nonstatic member function calls and is available as a local variable within the body of all nonstatic functions.

‘this’ pointer is not available in static member functions as static member functions can be called without any object (with class name). For a class X, the type of this pointer is ‘X* ‘. 


### 1) When local variable’s name is same as member’s name
```cpp
#include<iostream>
using namespace std;

/* local variable is same as a member's name */
class Test
{
private:
   int x;
public:
   void setX (int x)
   {
       // The 'this' pointer is used to retrieve the object's x
       // hidden by the local variable 'x'
       this->x = x;
   }
   void print() 
   { 
    cout << "x = " << x << endl; 
    }
};

int main()
{
   Test obj;
   int x = 20;
   obj.setX(x);
   obj.print();
   return 0;
}
```

### 2) To return reference to the calling object

```cpp
// Reference to the calling object can be returned
Test& Test::func () {
    // Some processing
    return *this;
} 
```

When a reference to a local object is returned, the returned reference can be used to chain function calls on a single object.

```cpp
#include<iostream>
using namespace std;

class Test
{
private:
  int x;
  int y;
public:
  Test(int x = 0, int y = 0) { this->x = x; this->y = y; }
  Test &setX(int a) { x = a; return *this; }
  Test &setY(int b) { y = b; return *this; }
  void print() { cout << "x = " << x << " y = " << y << endl; }
};

int main()
{
  Test obj1(5, 5);

  // Chained function calls.  All calls modify the same object
  // as the same object is returned by reference
  obj1.setX(10).setY(20);

  obj1.print();
  return 0;
}

```