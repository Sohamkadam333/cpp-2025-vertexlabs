# Functions

#### A function is a set of statements that takes input, does some specific computation, and produces output. The idea is to put some commonly or repeatedly done tasks together to make a function so that instead of writing the same code again and again for different inputs, we can call this function.
In simple terms, a function is a block of code that runs only when it is called.

```cpp
// C++ Program to demonstrate working of a function
#include <iostream>
using namespace std;

// Following function that takes two parameters 'x' and 'y'
// as input and returns max of two input numbers
int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

// main function that doesn't receive any parameter and
// returns integer
int main()
{
    int a = 10, b = 20;

    // Calling above function to find max of 'a' and 'b'
    int m = max(a, b);

    cout << "m is " << m;
    return 0;
}
```


### Why Do We Need Functions?
#### Functions help us in reducing code redundancy. If functionality is performed at multiple places in software, then rather than writing the same code, again and again, we create a function and call it everywhere. This also helps in maintenance as we have to make changes in only one place if we make changes to the functionality in future.
#### Functions make code modular. Consider a big file having many lines of code. It becomes really simple to read and use the code,  if the code is divided into functions.
#### Functions provide abstraction. For example, we can use library functions without worrying about their internal work.


### Types of Functions

### 1. User Defined Function
#### User-defined functions are user/customer-defined blocks of code specially customized to reduce the complexity of big programs. They are also commonly known as “tailor-made functions” which are built only to satisfy the condition in which the user is facing issues meanwhile reducing the complexity of the whole program.

### 2. Library Function 
#### Library functions are also called “built-in Functions“. These functions are part of a compiler package that is already defined and consists of a special function with special and different meanings. Built-in Function gives us an edge as we can directly use them without defining them whereas in the user-defined function we have to declare and define a function before using them. 
For Example: sqrt(), setw(), strcat(), etc.