# new and delete Operators

Dynamic memory allocation in C/C++ refers to performing memory allocation manually by a programmer. Dynamically allocated memory is allocated on Heap, and non-static and local variables get memory allocated on Stack.

### What are applications? 

- One use of dynamically allocated memory is to allocate memory of variable size, which is not possible with compiler allocated memory except for variable-length arrays.
- The most important use is the flexibility provided to programmers. We are free to allocate and deallocate memory whenever we need it and whenever we don’t need it anymore. There are many cases where this flexibility helps. Examples of such cases are Linked List, Tree, etc.

### How is it different from memory allocated to normal variables?

- For normal variables like “int a”, “char str[10]”, etc, memory is automatically allocated and deallocated. For dynamically allocated memory like “int *p = new int[10]”, it is the programmer’s responsibility to deallocate memory when no longer needed. If the programmer doesn’t deallocate memory, it causes a memory leak (memory is not deallocated until the program terminates). 

## new operator

The new operator denotes a request for memory allocation on the Free Store. If sufficient memory is available, a new operator initializes the memory and returns the address of the newly allocated and initialized memory to the pointer variable. 

```cpp
pointer-variable = new data-type;
```

Here, the pointer variable is the pointer of type data-type. Data type could be any built-in data type including array or any user-defined data type including structure and class. 

```cpp
// Pointer initialized with NULL
// Then request memory for the variable
int *p = NULL; 
p = new int;   

            OR

// Combine declaration of pointer 
// and their assignment
int *p = new int;
```


```cpp
// C++ program to demonstrate how to create dynamic variable
// using new
#include <iostream>
#include <memory>
using namespace std;

int main()
{
    // pointer to store the address returned by the new
    int* ptr;
    // allocating memory for integer
    ptr = new int;

    // assigning value using dereference operator
    *ptr = 10;

    // printing value and address
    cout << "Address: " << ptr << endl;
    cout << "Value: " << *ptr;

    return 0;
}
```

```cpp
// C++ program to illustrate how to initialize a dynamic
// variable with allocation
#include <iostream>
#include <memory>
using namespace std;

int main()
{
    // creating inbuit data types with initial value
    int* p = new int(25);
    float* q = new float(75.25);
   
    return 0;
}

```


### What if enough memory is not available during runtime? 

If enough memory is not available in the heap to allocate, the new request indicates failure by throwing an exception of type std::bad_alloc, unless “nothrow” is used with the new operator, in which case it returns a NULL pointer. Therefore, it may be a good idea to check for the pointer variable produced by the new before using its program. 

```cpp
int *p = new(nothrow) int;
if (!p)
{
   cout << "Memory allocation failed\n";
}
```

## delete operator

Since it is the programmer’s responsibility to deallocate dynamically allocated memory, programmers are provided delete operator in C++ language. 

```cpp
// Release memory pointed by pointer-variable
delete pointer-variable;
```


```cpp
// Release block of memory 
// pointed by pointer-variable
delete[] pointer-variable;  

Example:
// It will free the entire array
// pointed by p.
   delete[] p;
```


```cpp
// C++ program to illustrate dynamic allocation
// and deallocation of memory using new and delete
#include <iostream>
using namespace std;

int main()
{
    // Pointer initialization to null
    int* p = NULL;

    // Request memory for the variable
    // using new operator
    p = new (nothrow) int;
    if (!p)
        cout << "allocation of memory failed\n";
    else {
        // Store value at allocated address
        *p = 29;
        cout << "Value of p: " << *p << endl;
    }

    // Request block of memory
    // using new operator
    float* r = new float(75.25);

    cout << "Value of r: " << *r << endl;

    // Request block of memory of size n
    int n = 5;
    int* q = new (nothrow) int[n];

    if (!q)
        cout << "allocation of memory failed\n";
    else {
        for (int i = 0; i < n; i++)
            q[i] = i + 1;

        cout << "Value store in block of memory: ";
        for (int i = 0; i < n; i++)
            cout << q[i] << " ";
    }

    // freed the allocated memory
    delete p;
    delete r;

    // freed the block of allocated memory
    delete[] q;

    return 0;
}

```