# What is Array Decay in C++? How can it be prevented?

## What is Array Decay? 
The loss of type and dimensions of an array is known as decay of an array. This generally occurs when we pass the array into function by value or pointer. What it does is, it sends first address to the array which is a pointer, hence the size of array is not the original one, but the one occupied by the pointer in the memory.


```cpp
// C++ code to demonstrate array decay
#include <iostream>
using namespace std;

// Driver function to show Array decay
// Passing array by value
void aDecay(int* p)
{
    // Printing size of pointer
    cout << "Modified size of array is by "
            " passing by value: ";
    cout << sizeof(p) << endl;
}

int main()
{
    int a[7] = {
        1, 2, 3, 4, 5, 6, 7,
    };

    // Printing original size of array
    cout << "Actual size of array is: ";
    cout << sizeof(a) << endl;

    // Passing a pointer to array
    aDecay(a);

    return 0;
}
```

## How to prevent Array Decay? 
A typical solution to handle decay is to pass size of array also as a parameter and not use sizeof on array parameters

Another way to prevent array decay is to send the array into functions by reference. This prevents conversion of array into a pointer, hence prevents the decay.

```cpp
// C++ code to demonstrate prevention of
// decay of array
#include<iostream>
using namespace std;

// A function that prevents Array decay
// by passing array by reference
void fun(int (&p)[7])
{
    // Printing size of array
    cout << "Modified size of array by "
            "passing by reference: ";
    cout << sizeof(p) << endl;
}

int main()
{
    int a[7] = {1, 2, 3, 4, 5, 6, 7,};

    // Printing original size of array
    cout << "Actual size of array is: ";
    cout << sizeof(a) <<endl;

    // Calling function by reference
    fun(a);

    return 0;
}
```


We can also preserve the size of the array by passing it as a pointer to the array which have one more dimension as compared to our array

```cpp
// C++ code to demonstrate array decay
#include <iostream>
using namespace std;

// Function to show that array decay happens
// even if we use pointer
void pDecay(int (*p)[7])
{
    // Printing size of array
    cout << "Modified size of array by "
            "passing by pointer: ";
    cout << sizeof(p) << endl;
}

int main()
{
    int a[7] = { 1, 2, 3, 4, 5, 6, 7 };

    // Printing original size of array
    cout << "Actual size of array is: ";
    cout << sizeof(a) << endl;

    // Passing a pointer to array
    pDecay(&a);

    return 0;
}
```