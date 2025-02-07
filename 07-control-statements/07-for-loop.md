# for Loop

#### In C++, for loop is an entry-controlled loop that is used to execute a block of code repeatedly for the given number of times. It is generally preferred over while and do-while loops in case the number of iterations is known beforehand.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

      // for loop to print "Hi" 5 times
    for (int i = 5; i < 10; i++) {
          cout << "Hi" << endl;
    }
  
    return 0;
}
```

### Syntax of for Loop
```cpp
for ( initialization; test condition; updation) { 
     // body of for loop
}
```


### Working of a for Loop in C++

- Control falls into the for loop. Initialization is done.
- The flow jumps to Condition.
- Condition is tested.
  - If the Condition yields true, the flow goes into the Body.
  - If the Condition yields false, the flow goes outside the loop.
- The statements inside the body of the loop get executed.
- The flow goes to the update.
- Updating takes place and the flow goes to Step 3 again.
- The for loop has ended and the flow has gone outside.

### Printing Numbers from N to 1
```cpp
#include <iostream>
using namespace std;

int main() {
    
      // Initializing n (value upto which you want to
      // print numbers
    int n = 5;
  
      // Initialization of loop variable
    int i;
    for (i = n; i >= 1; i--)
        cout << i << " ";

    return 0;
}
```


### Print a Square Pattern using Nested Loops
```cpp
#include <iostream>
using namespace std;

int main() {
      
    // Outer loop to print each row
    for (int i = 0; i < 4; i++) {

        // Inner loop to print each character
          // in each row
        for (int j = 0; j < 4; j++) {
            cout << "*" << " ";
        }
        cout << endl;
    }
  
      return 0;
}
```