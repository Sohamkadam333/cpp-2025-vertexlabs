# if Statement

#### The if in C is the simplest decision-making statement. It consists of the test condition and a block of code that is executed if and only if the given condition is true. Otherwise, it is skipped from execution.

```cpp
#include <stdio.h>

int main() {
    int n = 9;
  
    // if statement with true condition
    if (n < 10) {
        printf("%d < 10", n);
    }

    // if statement with false condition
    if (n > 20) 
        printf("%d > 20", n);

    return 0;
}
```