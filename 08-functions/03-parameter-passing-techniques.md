# Parameter Passing Techniques

#### In C++, data must be sent to functions when they are called in order to perform operations. This data is called parameters or arguments and there are various parameter passing methods available in C++, each with merits and demerits of its own. In this article, we will discuss various parameter-passing techniques in C++.

### Function Parameters:
- These variables, which indicate the data that the function anticipates receiving when called, are specified in the parameter list of a function.
  

### Actual Parameters:
- The expressions or values passed in during a function call. When the function is called, it receives these values as input.
The parameters that the function signature declares. They serve as stand-ins for the values that are provided in when the function is called.

### Parameter Passing Techniques

- Pass by Value
- Pass by Reference
- Pass by Pointers


### 1. Pass by Value

#### In Pass by Value method, a variable's actual value is copied and then passed to the function instead of the original variable. As the result, any changes to the parameter inside the function will not affect the variable's original value outside the function. Althogh it is easy to understand and implement, this method is not so useful for large size of data structures at it involves copying the value.

```cpp
// C++ program to illustrate the pass by value
#include <iostream>
using namespace std;

// function to swap variables
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 5;
    int y = 10;

    cout << "Before Swapping:\n";
    cout << "x = " << x << ", y = " << y << endl;

    // Call the 'swap' function with pass-by-value
    // parameters
    swap(x, y);

    // Print the values of 'x' and 'y' after the
    // (ineffective) swap The values remain unchanged
    // because the function works on copies.
    cout << "After Swapping:\n";
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
```


### 2. Pass by Reference

#### In pass-by-reference method, instead of passing the argument itself, we passes the reference of an argument to the function. This allows the function to change the value of the original argument.

#### Any changes we make to your argument inside your function are reflected in your original argument so we have to be careful while handling data in this method.

```cpp
// C++ program to illustrate the use of pass by reference
#include <iostream>
using namespace std;

// function to swap variables
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

// driver code
int main()
{
    int x = 5;
    int y = 10;
    cout << "Before swap:\n";
    cout << "x = " << x << ", ";
    cout << "y = " << y << endl;

    // Call the 'swap' function with pass-by-reference
    // parameters Values of 'x' and 'y' are modified in the
    // calling code because references are used.
    swap(x, y);

    cout << "After swap:\n";
    cout << "x = " << x << ", ";
    cout << "y = " << y << endl;
    return 0;
}
```


### 3. Pass by Pointer

#### The pass-by-pointer is very similar to the pass-by-reference method. The only difference is that we pass the raw pointers instead of reference to the function. It means that we pass the address of the argument to the function.

```cpp
// C++ program to illustrate the pass by pointer method.
#include <iostream>
using namespace std;

// function to swap variables
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// driver code
int main()
{

    int x = 5;
    int y = 10;

    // Print the values of 'x' and 'y' before the swap
    cout << "Before swap:\n";
    cout << "x = " << x << " ,";
    cout << "y = " << y << endl;

    // Call the 'swap' function with pass-by-pointer
    // parameters
    // Values of 'x' and 'y' are modified in the calling
    // code because pointers are used.
    swap(&x, &y);

    // Print the values of 'x' and 'y' after the swap
    cout << "After swap:\n";
    cout << "x = " << x << " ,";
    cout << "y = " << y << endl;

    return 0;
}
```