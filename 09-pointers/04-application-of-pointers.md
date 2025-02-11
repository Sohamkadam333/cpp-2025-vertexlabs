# Applications of Pointers in C

Pointers in C are variables that are used to store the memory address of another variable. Pointers allow us to efficiently manage the memory and hence optimize our program. In this article, we will discuss some of the major applications of pointers in C.

## 1. Passing Arguments by Reference
Passing arguments by reference serves two purposes:


i.) to modify the variable in another function.

```c
// C program to demonstrate that we can change
// local values of one function in another using pointers.

#include <stdio.h>

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x = 10, y = 20;
    swap(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}
```

ii.) For Efficiency Purpose

```c
#include <stdio.h>

// function to print an array by passing reference to array
void printArray(int* arr, int n)
{
    // here array elements are passed by reference
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    printArray(arr, 5);
    return 0;
}
```


## 2. For Accessing Array Elements

Compiler internally uses pointers to access array elements. We can also use these pointers to access and modify the elements of the given array.

```c
// C program to demonstrate that compiler
// internally uses pointer arithmetic to access
// array elements.

#include <stdio.h>

int main()
{
    int arr[] = { 100, 200, 300, 400 };

    // Compiler converts below to *(arr + 2).
    printf("%d ", arr[2]);

    // So below also works.
    printf("%d\n", *(arr + 2));

    return 0;
}
```

## 3. To Return Multiple Values
The functions in C can only return a single value, but we can use pointers to return multiple values from a C function.

```c
// C program to demonstrate that using a pointer
// we can return multiple values.

#include <math.h>
#include <stdio.h>

void fun(int n, int* square, double* sq_root)
{
    *square = n * n;
    *sq_root = sqrt(n);
}

int main()
{

    int n = 100;
    int sq;
    double sq_root;
    fun(n, &sq, &sq_root);

    printf("%d %f\n", sq, sq_root);
    return 0;
}
```

## 4. For dynamic memory Allocation

We can use pointers to dynamically allocate memory i.e Dynamic memory allocation. The advantage of dynamically allocated memory is, it is not deleted until we explicitly delete it.

```c
// C program to dynamically allocate an
// array of given size.

#include <stdio.h>
#include <stdlib.h>
int* createArr(int n)
{
    int* arr = (int*)(malloc(n * sizeof(int)));
    return arr;
}

int main()
{
    int* pt = createArr(10);
    return 0;
}
```