# Recursion

#### Recursion in C++ is a technique in which a function calls itself repeatedly until a given condition is satisfied. In other words, recursion is the process of solving a problem by breaking it down into smaller, simpler sub-problems.

#### Recursive Function
A function that calls itself is called a recursive function. When a recursive function is called, it executes a set of instructions and then calls itself to execute the same set of instructions with a smaller input. This process continues until a base case is reached, which is a condition that stops the recursion and returns a value.

#### Base Condition
The base condition is the condition that is used to terminate the recursion. The recursive function will keep calling itself till the base condition is satisfied.

#### Recursive Case.
Recursive case is the way in which the recursive call is present in the function. Recursive case can contain multiple recursive calls, or different parameters such that at the end, the base condition is satisfied and the recursion is terminated.

```cpp
// C++ Program to calculate the sum of first N natural
// numbers using recursion
#include <iostream>
using namespace std;

int nSum(int n)
{
    // base condition to terminate the recursion when N = 0
    if (n == 0) {
        return 0;
    }

    // recursive case / recursive call
    int res = n + nSum(n - 1);

    return res;
}

int main()
{
    int n = 5;

    // calling the function
    int sum = nSum(n);

    cout << "Sum = " << sum;
    return 0;
}
```

### Types of Recursion

### 1. Direct Recursion
#### In direct recursion, the function contains one or more recursive calls to itself. The function directly calls itself in the direct recursion and there is no intermediate function. Direct recursion can also be classified into three types based on how and how many recursive calls are present in the body of the function.

#### a) Head Recursion: 
In head recursion, the recursive call is present at the start of the function. It is a kind of linear recursion where only a single recursive call is used.

#### b) Tail Recursion: 
Tail recursion is a linear recursion where it’s one and only recursive call is present at the end of the function. The recursive call is generally the last statement in the function. The significance of tail recursion is that we can reduce its memory consumption by using tail call optimization.

#### c) Tree Recursion: 
In Tree Recursion, there are multiple recursive calls present in the body of the function. While tracing tree recursion, we get a tree-like structure where multiple recursive calls branch from one function.

### 2. Indirect Recursion
#### In indirect recursion, the function does not call itself directly but instead, it calls another function which then eventually calls the first function creating a cycle of function calls.


### Examples of Recursion

#### 1: Fibonacci Series using Recursion
```cpp
// C++ Program to find fibonacci series using recursion
#include <iostream>
using namespace std;

// Function for fibonacci
int fib(int n)
{
    // Stop condition
    if (n == 0)
        return 0;
    // Stop condition
    if (n == 1 || n == 2)
        return 1;
    // Recursion function
    else
        return (fib(n - 1) + fib(n - 2));
}

// Driver Code
int main()
{
    // Initialize variable n.
    int n = 5;
    cout << "Fibonacci series of 5 numbers is: ";
    // for loop to print the fibonacci series.
    for (int i = 0; i < n; i++) {
        cout << fib(i) << " ";
    }
    return 0;
}
```

#### 2: Print Array in reverse order using recursion.

```cpp
// C++ Program to print array using
// recursion
#include <iostream>
using namespace std;

// recursive function to print array
void pArray(int* arr, int n)
{
    // base condition
    if (n == 0) {
        return;
    }
    // recursive call
    cout << arr[n - 1] << ' ';
    pArray(arr, n - 1);  
}

int main()
{
    // declaring array
    int arr[5] = { 1, 2, 3, 4, 5 };
    // calling function
    pArray(arr, 5);
    return 0;
}
```

### Applications of Recursion

- Solving: Fibonacci sequences, Factorial Function, Reversing an array, Tower of Hanoi.
- Backtracking: It is a technique for solving problems by trying out different solutions and undoing them if they do not work. Recursive algorithms are often used in backtracking.
- Searching and Sorting Algorithms: Many searching and sorting algorithms, such as binary search and quicksort, use recursion to divide the problem into smaller sub-problems.
- Tree and Graph Traversal: Recursive algorithms are often used to traverse trees and graphs, such as depth-first search and breadth-first search.
- Mathematical Computations: Recursion is also used in many mathematical computations, such as the factorial function and the Fibonacci sequence.
- Dynamic Programming: It is a technique for solving optimization problems by breaking them down into smaller sub-problems. Recursive algorithms are often used in dynamic programming.


### Drawbacks of Recursion
- Performance: Recursive algorithms can be less efficient than iterative algorithms in some cases, particularly if the data structure is large or if the recursion goes too deep.
- Memory usage: Recursive algorithms can use a lot of memory, particularly if the recursion goes too deep or if the data structure is large. Each recursive call creates a new stack frame on the call stack, which can quickly add up to a significant amount of memory usage.
- Code complexity: Recursive algorithms can be more complex than iterative algorithms.
- Debugging: Recursive algorithms can be more difficult to debug than iterative algorithms, particularly if the recursion goes too deep or if the program is using multiple recursive calls.
- Stack Overflow: If the recursion goes too deep, it can cause a stack overflow error, which can crash the program.