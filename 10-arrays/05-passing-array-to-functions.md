# Pass Array to Functions

Passing arrays to functions is done to perform various operations on array elements without messing up with the main code.

In C++, an array can be passed in a function using a pointer or reference. Understanding the different approaches to pass arrays is important for writing code according to the needs.

### Methods to Pass Array to a Function

- As a sized array
- As an unsized array
- As a pointer (pass by pointer)
- As a reference (pass by reference)

## 1. Passing as a Sized Array

In this method, we pass the array in the same way we declare it with the array type, name, and size. As we can see, we still have to pass the size of the array as another parameter because at the end, the array will be treated as a pointer in the function

```cpp
return_type function_name (datatype array_name [size], int size)
```

```cpp
// C++ program to demonstrate the passing of array as sized
// array.

#include <iostream>
using namespace std;

// function to update array elements
void printarray(int a[10])
{
    for (int i = 0; i < 5; i++)
        a[i] = a[i] + 5;
}

int main()
{
    // array declaration
    int a[5] = { 1, 2, 3, 4, 5 };
    printarray(a); // Passing array to function

    // printing array elements
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    return 0;
}
```

## 2. Passing as an Unsized Array

This method is similar to the previous method, but the difference is that we dont specify the size of the array.

```cpp
return_type function_name (data_type array_name[])
```

```cpp
// C++ program to demonstrate the passing of array as
// unsized array.

#include <iostream>
using namespace std;

// function to update array elements
void printarray(int a[],int size)
{
    for (int i = 0; i < size; i++)
        a[i] = a[i] + 5;
}

int main()
{
    // array creation
    int a[5] = { 1, 2, 3, 4, 5 };
    int n=5;
    printarray(a,n); // Passing array to function

    // printing array elements
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
```

## 3. Passing Array as a Pointer

In this method, we pass the memory address of the first element of the array. This method also allows for dynamic array sizes.

```cpp
return_type function_name (datatype *array_name)
```

```cpp
// C++ program to demonstratethe passing of array by
// pointer.

#include <iostream>
using namespace std;

// function to print array elements
void printarray(int* a)
{
    for (int i = 0; i < 5; i++)
        *(a + i) = *(a + i) + 5;
}

int main()
{
    // array creation
    int a[5] = { 1, 2, 3, 4, 5 };
    printarray(a); // Passing array to function
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    return 0;
}
```


## 4. Passing Array as a Reference

In this method, we pass an array to a function as a reference and also explicitly pass its size i.e. we are passing both the reference to the first element and the size of the array.

```cpp
return_type function_name(data_type (&arr)[size])
```


```cpp
// C++ to demonstrate array passing by pass by reference
#include <iostream>
using namespace std;

void modifyArray(int (&arr)[5])
{
  // deducing size
  int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; ++i) {
        arr[i] *= 2;
    }
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = 5;
    modifyArray(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```