# Dangling, Void , Null and Wild Pointers

In C programming pointers are used to manipulate memory addresses, to store the address of some variable or memory location. But certain situations and characteristics related to pointers become challenging in terms of memory safety and program behavior these include Dangling (when pointing to deallocated memory), Void (pointing to some data location that doesn’t have any specific type), Null (absence of a valid address), and Wild (uninitialized) pointers.

## Dangling Pointer in C

A pointer pointing to a memory location that has been deleted (or freed) is called a dangling pointer. Such a situation can lead to unexpected behavior in the program and also serve as a source of bugs in C programs.

- 1. De-allocation of Memory
- 2. Function Call 
- 3. Variable Goes Out of Scope

### 1. De-allocation of Memory

When a memory pointed by a pointer is deallocated the pointer becomes a dangling pointer.

```c
// C program to demonstrate Deallocating a memory pointed by
// ptr causes dangling pointer
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr = (int*)malloc(sizeof(int));

    // After below free call, ptr becomes a dangling pointer
    free(ptr);
    printf("Memory freed\n");

    // removing Dangling Pointer
    ptr = NULL;

    return 0;
}
```

### 2. Function Call 

When the local variable is not static and the function returns a pointer to that local variable. The pointer pointing to the local variable becomes dangling pointer.

```c
// C program to demonstrate the pointer pointing to local
// variable becomes dangling when local variable is not
// static.
#include <stdio.h>

int* fun()
{
    // x is local variable and goes out of
    // scope after an execution of fun() is
    // over.
    int x = 5;
    return &x;
}

// Driver Code
int main()
{
    int* p = fun();
    fflush(stdin);

    // p points to something which is not
    // valid anymore
    printf("%d", *p);
    return 0;
}
```

#### Using Static Variable in fun
```c
// The pointer pointing to local variable doesn't
// become dangling when local variable is static.
#include <stdio.h>

int* fun()
{
    // x now has scope throughout the program
    static int x = 5;

    return &x;
}

int main()
{
    int* p = fun();
    fflush(stdin);

    // Not a dangling pointer as it points
    // to static variable.
    printf("%d", *p);
}
```

### 3. Variable Goes Out of Scope

When a variable goes out of scope the pointer pointing to that variable becomes a dangling pointer.

```c
// C program to demonstrate dangling pointer when variable
// goes put of scope
#include <stdio.h>
#include <stdlib.h>

// driver code
int main()
{
    int* ptr;
    // creating a block
    {
        int a = 10;
        ptr = &a;
    }

    // ptr here becomes dangling pointer
    printf("%d", *ptr);

    return 0;
}
```


## Void Pointer in C

Void pointer is a specific pointer type – void * – a pointer that points to some data location in storage, which doesn’t have any specific type. Void refers to the type. Basically, the type of data that it points to can be any. Any pointer type is convertible to a void pointer hence it can point to any value. 

```txt
Note: Void pointers cannot be dereferenced. It can however be done using typecasting the void pointer. Pointer arithmetic is not possible on pointers of void due to lack of concrete value and thus size.
```

```c
// C program to demonstrate the void pointer working

#include <stdlib.h>

int main()
{
    int x = 4;
    float y = 5.5;

    // A void pointer
    void* ptr;
    ptr = &x;

    // (int*)ptr - does type casting of void
    // *((int*)ptr) dereferences the typecasted
    // void pointer variable.
    printf("Integer variable is = %d", *((int*)ptr));

    // void pointer is now float
    ptr = &y;
    printf("\nFloat variable is = %f", *((float*)ptr));

    return 0;
}
```


## NULL Pointer in C

NULL Pointer is a pointer that is pointing to nothing(i.e. not pointing to any valid object or memory location). In case, if we don’t have an address to be assigned to a pointer, then we can simply use NULL. NULL is used to represent that there is no valid memory address.

```c
// C program to show the value of NULL pointer on printing
#include <stdio.h>
int main()
{
    // Null Pointer
    int* ptr = NULL;

    printf("The value of ptr is %p", ptr);
    return 0;
}
```

```txt
Note NULL vs Uninitialized pointer – An uninitialized pointer stores an undefined value. A null pointer stores a defined value, but one that is defined by the environment to not be a valid address for any member or object. 


NULL vs Void Pointer – Null pointer is a value, while void pointer is a type
```

## Wild pointer in C

A pointer that has not been initialized to anything (not even NULL) is known as a wild pointer. The pointer may be initialized to a non-NULL garbage value that may not be a valid address. 

```c
#include <stdio.h>

int main()
{
    int* p; /* wild pointer */

    // trying to access the value pointed by a wild pointer
    // is undefined behavior
    // printf("Value pointed by wild pointer: %d\n", *p);
    // //give error

    int x = 10;

    // Accessing the value pointed by 'p'
    printf("Value pointed by 'p' is: %d\n", *p);

    return 0;
}
```