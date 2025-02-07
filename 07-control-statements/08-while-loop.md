# While Loop

#### In C++, the while loop is an entry-controlled loop that repeatedly executes a block of code as long as the given condition remains true. Unlike the for loop, while loop is used in situations where we do not know the exact number of iterations of the loop beforehand as the loop execution is terminated on the basis of the test condition.

```cpp
#include <iostream>
using namespace std;

int main() {
  
      // while loop to print numbers from 1 to 5
    int i = 0;
    while (i < 5) {
        cout << "Hi" << endl;
        i++;
    }

    return 0;
}
```


### Syntax of while Loop
```cpp
while (condition) {
    // Body of the loop
    update expression
}
```

### Working of while Loop

- Control falls into the while loop.
- The flow jumps to Condition
- Condition is tested.
  - If the Condition yields true, the flow goes into the Body.
  - If the Condition yields false, the flow goes outside the loop
- The statements inside the body of the loop get executed.
- Updation takes place.
- Control flows back to Step 2.
- The while loop has ended, and the flow has gone outside.

### Printing Numbers from 1 to 5

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  
      // Declaration and Initialization of loop variable
    int i = 1; 

    // while loop to print numbers from 1 to 5
    while (i <= 5) {
        cout << i << " ";
      
          // Updating loop varialbe
        i++;
    }

    return 0;
}
```


### Calculating the Sum of Natural Numbers
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5;

    int sum = 0;

    // while loop to calculate the sum
    while (n > 0) {
        sum += n;
        n--;
    }

    cout << sum;
    return 0;
}
```

### Print a Square Pattern using Nested Loops
```cpp
#include <iostream>
using namespace std;

int main()
{
    int i = 0;

    // Outer loop to print each row
    while (i < 4) {
        int j = 0;
      
        // Inner loop to print each character
        // in each row
        while (j < 4) {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
```