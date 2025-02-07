# do while Loop

#### In C++, the do-while loop is an exit-controlled loop that repeatedly executes a block of code at least once and continues executing as long as a given condition remains true. Unlike the while loop, the do-while loop guarantees that the loop body will execute at least once, regardless of whether the condition is true or false.

```cpp
#include <iostream>
using namespace std;

int main() {

    // do-while loop to print "Hi" 5 times
    int i = 0;
    do {
        cout << "Hi" << endl;
        i++;
    } while (i < 5);

    return 0;
}
```

### Syntax of do-while Loop
```cpp
do {
    // Body of the loop
    // Update expression
} while (condition);
```


### Working of do while Loop in C++
- Control falls into the do-while loop.
- The statements inside the body of the loop get executed.
- Updation takes place.
- The flow jumps to Condition
- Condition is tested. 
  - If the Condition yields true, go to Step 6.
  - If the Condition yields false, the flow goes outside the loop
- The flow goes back to Step 2.
- The do-while loop has been ended and flow has gone outside the loop.


```cpp
#include <iostream>
using namespace std;

int main() {

    int i = 1;
    do {
        cout << i << endl;
        i++;
    } while (i <= 10);

    return 0;
}
```


### Print a Square Pattern using Nested Loops
```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 0;

    // Outer loop to print each row
    do {
        int j = 0;
      
        // Inner loop to print each character
        // in each row
        do {
            cout << "* ";
            j++;
        } while (j < 4);
        cout << endl;
        i++;
    }while (i < 4);

    return 0;
}
```