# new vs malloc() and free() vs delete

We use new and delete operators in C++ to dynamically allocate memory whereas malloc() and free() functions are also used for the same purpose in C and C++. The functionality of the new or malloc() and delete or free() seems to be the same but they differ in various ways.
The behavior with respect to constructors and destructors calls differ in the following ways:

## malloc() vs new(): 

- malloc(): It is a C library function that can also be used in C++, while the “new” operator is specific for C++ only. 
- Both malloc() and new are used to allocate the memory dynamically in heap. But “new” does call the constructor of a class whereas “malloc()” does not.

## free() vs delete: 

- free() is a C library function that can also be used in C++, while “delete” is a C++ keyword.
- free() frees memory but doesn’t call Destructor of a class whereas “delete” frees the memory and also calls the Destructor of the class.

```cpp
// C++ program to illustrate free()
// and delete keyword in C++
#include "bits/stdc++.h"
using namespace std;
 
// Class A
class A {
    int a;
 
public:
    int* ptr;
 
    // Constructor of class A
    A()
    {
        cout << "Constructor was Called!"
             << endl;
    }
 
    // Destructor of class A
    ~A()
    {
        cout << "Destructor was Called!"
             << endl;
    }
};
 
// Driver Code
int main()
{
 
    // Create an object of class A
    // using new operator
    A* a = new A;
    cout << "Object of class A was "
         << "created using new operator!"
         << endl;
 
    delete (a);
    cout << "Object of class A was "
         << "deleted using delete keyword!"
         << endl;
 
    cout << endl;
 
    A* b = (A*)malloc(sizeof(A));
    cout << "Object of class A was "
         << "created using malloc()!"
         << endl;
 
    free(b);
    cout << "Object of class A was "
         << "deleted using free()!"
         << endl;
 
    return 0;
}
```

```cpp
// OUTPUT
Constructor was Called!
Object of class A was created using new operator!
Destructor was Called!
Object of class A was deleted using delete keyword!

Object of class A was created using malloc()!
Object of class A was deleted using free()!
```


```cpp
// C++ program to illustrate new, delete
// malloc() and free()
#include "bits/stdc++.h"
using namespace std;
 
// Class A
class A {
    int a;
 
public:
    int* ptr;
 
    // Constructor of class A
    A()
    {
        cout << "Constructor was Called!"
             << endl;
    }
 
    // Destructor of class A
    ~A()
    {
        cout << "Destructor was Called!"
             << endl;
    }
};
 
// Driver Code
int main()
{
 
    // Object Created of class A
    A a;
    exit(0);
}
```

```cpp
// OUTPUT
Constructor was Called!
```


```cpp
// C++ program to illustrate new, delete
// malloc() and free()
#include "bits/stdc++.h"
using namespace std;
 
// Class A
class A {
    int a;
 
public:
    int* ptr;
 
    // Constructor of class A
    A()
    {
        cout << "Constructor was Called!"
             << endl;
    }
 
    // Destructor of class A
    ~A()
    {
        cout << "Destructor was Called!"
             << endl;
    }
};
 
// Driver Code
int main()
{
 
    // Object Created of class A
    A *a = new A;
    return 0;
}
```

```cpp
// OUTPUT
Constructor was Called!
```

There is no Destructor call even after using the statement “return 0”. The reason lies in the difference of allocating an object of a class. When we create an object with class_name object_name within a block is created, the object has an automatic storage duration, i.e., it will automatically be destroyed on going out of scope. But when we use new class_name the object has a dynamic storage duration, which means one has to delete it explicitly using delete keyword.