# Structures

A structure is a user-defined data type in C/C++. A structure creates a data type that can be used to group items of possibly different types into a single type. The ‘struct’ keyword is used to create a structure.

### Structures in C++ can contain two types of members:  

- Data Member: These members are normal C++ variables. We can create a structure with variables of different data types in C++.
- Member Functions: These members are normal C++ functions. Along with variables, we can also include functions inside a structure declaration.

```cpp
// A variable declaration like basic data types
struct Point
{
   int x, y;
}; 

int main()
{
   struct Point p1;  // The variable p1 is defined like a normal variable
}

```

### initialize structure members? 

Structure members cannot be initialized with declaration. For example the following C program fails in compilation. 
But is considered correct in C++11 and above. 

```cpp
struct Point
{
   int x = 0;  // COMPILER ERROR:  cannot initialize members here
   int y = 0;  // COMPILER ERROR:  cannot initialize members here
};
```
The reason for above error is simple, when a datatype is declared, no memory is allocated for it. Memory is allocated only when variables are created.


Structure members can be initialized with declaration in C++
```cpp

#include <iostream>
using namespace std;

struct Point {
    int x = 0; 
    int y = 1;
};

int main()
{
    struct Point p1;
    cout << "x = " << p1.x << ", y = " << p1.y<<endl;
  

    p1.y = 20;
    cout << "x = " << p1.x << ", y = " << p1.y;
    return 0;
}
```


Structure members can be initialized using curly braces ‘{}’. For example, following is a valid initialization.

```cpp
struct Point {
    int x, y;
};

int main()
{
    struct Point p1 = { 0, 1 };
}
```



### Array of structures.
```cpp
#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

int main()
{
    // Create an array of structures
    struct Point arr[10];

    // Access array members
    arr[0].x = 10;
    arr[0].y = 20;

    cout << arr[0].x << " " << arr[0].y;
    return 0;
}
```


### Structure Pointer.
Like primitive types, we can have pointer to a structure. If we have a pointer to structure, members are accessed using arrow ( -> ) operator instead of the dot (.) operator.

```cpp
#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

int main()
{
    struct Point p1 = { 1, 2 };

    // p2 is a pointer to structure p1
    struct Point* p2 = &p1;

    // Accessing structure members using
    // structure pointer
    cout << p2->x << " " << p2->y;
    return 0;
}
```